#ifndef DAMAGESYSTEM_H
#define DAMAGESYSTEM_H

#include "system.h"


class DamageSystem : System
{
public:
    DamageSystem();

    // System interface
public:
    void Update();
};

#endif // DAMAGESYSTEM_H
