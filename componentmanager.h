#ifndef COMPONENTMANAGER_H
#define COMPONENTMANAGER_H

#include "componentpool.h"
#include "icomponentpool.h"

#include <typeindex>
#include <unordered_map>


class ComponentManager
{
    std::unordered_map<std::type_index, IComponentPool*> ComponentArrays{};
public:
    template<typename T>
    ComponentPool<T>* GetComponentPool()
    {
        std::type_index index = typeid(T);
        if (ComponentArrays.find(index) == ComponentArrays.end())
        {
            ComponentArrays[index] = new ComponentPool<T>();
        }
        return static_cast<ComponentPool<T>*>(ComponentArrays[index]);
    }

    void EntityDestroyed(Entity entity)
    {
        for (auto const& pair : ComponentArrays)
        {
            auto const& component = pair.second;
            component->EntityDestroyed(entity);
        }
    }

    ComponentManager();
};

#endif // COMPONENTMANAGER_H
