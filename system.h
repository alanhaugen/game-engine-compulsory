#ifndef SYSTEM_H
#define SYSTEM_H

class System
{
public:
    virtual ~System() = default;
    System();
    virtual void Update() = 0;
};

#endif // SYSTEM_H
