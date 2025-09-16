#ifndef COMPONENTPOOL_H
#define COMPONENTPOOL_H

#include "icomponentpool.h"

#include <map>
#include <vector>


template<typename T>
class ComponentPool : public IComponentPool
{
public:

    std::vector<T> components;
    std::map<int, std::vector<int>> entityIdToComponentId;

    void AddComponent(int id)
    {
        components.emplace_back(id);
        entityIdToComponentId[id].push_back(components.size() - 1);
    }

    void RemoveComponent(int id)
    {
        //remove the component
        auto* componentIndices = &entityIdToComponentId[id];
        int componentIndex = componentIndices->back(); //here! it does not have to always be the last i think
        components[componentIndex].~T();
        componentIndices->pop_back();
        if (componentIndices->empty())
            entityIdToComponentId.erase(id);

        //copy the component at the back to the removed component's place
        if (componentIndex == components.size() - 1)
        {
            components.pop_back();
            return;
        }
        auto componentToCopy = components.back();
        components[componentIndex] = componentToCopy;
        entityIdToComponentId[componentToCopy.ID].pop_back();
        entityIdToComponentId[componentToCopy.ID].push_back(componentIndex);
        components.pop_back();
    }

    void EntityDestroyed(Entity entity) override
    {
        if (entityIdToComponentId.find(entity.ID) == entityIdToComponentId.end())
            return;
        RemoveComponent(entity.ID);
    }

    ComponentPool();
};

#endif // COMPONENTPOOL_H
