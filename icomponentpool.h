#ifndef ICOMPONENTPOOL_H
#define ICOMPONENTPOOL_H

#include "Entity.h"

class IComponentPool
{
public:
    IComponentPool();
    virtual void EntityDestroyed(Entity entity) = 0;
};

#endif // ICOMPONENTPOOL_H
