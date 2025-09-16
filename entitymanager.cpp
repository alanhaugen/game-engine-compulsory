#include "entitymanager.h"

EntityManager::EntityManager() {}

int EntityManager::CreateEntity()
{
    return nextEntityID++;
}
