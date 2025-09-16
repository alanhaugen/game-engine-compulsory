#ifndef SYSTEMMANAGER_H
#define SYSTEMMANAGER_H

#include "system.h"

#include <typeindex>
#include <unordered_map>


class SystemManager
{   
    std::unordered_map<std::type_index, System*> Systems{};

public:
    SystemManager();

    template<typename T>
    T* GetSystem()
    {
        std::type_index index = typeid(T);
        return Systems[index];
    }

    template<typename T, typename... Args>
    T* RegisterSystem(Args&&... args)
    {
        std::type_index index = typeid(T);

        auto system = new T(std::forward<Args>(args)...);
        Systems.insert({ index, system });
        return system;
    }
};

#endif // SYSTEMMANAGER_H
