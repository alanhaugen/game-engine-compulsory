#ifndef MOVEMENTSYSTEM_H
#define MOVEMENTSYSTEM_H

#include "system.h"


class MovementSystem : System
{
public:
    MovementSystem();

    // System interface
public:
    void Update();
};

#endif // MOVEMENTSYSTEM_H
