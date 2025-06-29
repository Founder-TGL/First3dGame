#ifndef ENTITY_TYPE_H
#define ENTITY_TYPE_H

#include "Camera.h"
#include "renderable/Renderable.h"
#include "gameEntity.h"

class EntityType
{
    public:
        gameEntity entObj;
        int health;
        glm::vec3 startPos = glm::vec3(0.0f, 0.0f, 0.0f);
        int startingHealth;

        EntityType(Renderable entMesh, int health = 10, glm::vec3 position = {1.0f, 1.0f, 1.0f});

        bool isDead() const { return health <= 0;}
};

#endif