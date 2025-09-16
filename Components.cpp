struct Component
{
    Component(int id)
    {
        ID = id;
    }
    int ID;
};

struct HealthComponent : Component
{
    HealthComponent(int id) : Component(id) {}
    int health = 100;
};

struct AttackComponent : Component
{
    AttackComponent(int id) : Component(id) {}
    float damage = 50;
    float range = 0;
};

struct PositionComponent : Component
{
    PositionComponent(int id) : Component(id) {}
    float x = 0;
    float y = 0;
};

struct MovementComponent : Component
{
    MovementComponent(int id) : Component(id) {}
    float speed = 0;
    float targetX = 0;
    float targetY = 0;
};
