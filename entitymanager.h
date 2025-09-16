#ifndef ENTITYMANAGER_H
#define ENTITYMANAGER_H

class EntityManager
{
public:
    EntityManager();
    int nextEntityID = 0;
    int CreateEntity();
};

#endif // ENTITYMANAGER_H
