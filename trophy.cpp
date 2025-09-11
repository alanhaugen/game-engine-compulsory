#include "trophy.h"

Trophy::Trophy()
    : ObjMesh(assetPath + "cylinder.obj")
{
    lifeTime = initialLifeTime;
}
