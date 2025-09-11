#ifndef TROPHY_H
#define TROPHY_H

#include "ObjMesh.h"

class Trophy : public ObjMesh
{
public:
    Trophy();
    float lifeTime;
    float initialLifeTime = 30.0f;
};

#endif // TROPHY_H
