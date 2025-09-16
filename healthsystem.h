#ifndef HEALTHSYSTEM_H
#define HEALTHSYSTEM_H

#include "system.h"


class HealthSystem : System
{
public:
    HealthSystem();

    // System interface
public:
    void Update();
};

#endif // HEALTHSYSTEM_H
