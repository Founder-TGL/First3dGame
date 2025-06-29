#ifndef PLAYER_H
#define PLAYER_H

#include "Camera.h"
#include "renderable/Renderable.h"
#include "gameEntity.h"
#include "default/entityType.h"

class Player : public EntityType
{
    public:
        int width;
        int height;
        float speed;
        float followDist   = 5.0f;
        float followHeight = 2.0f; 
        GLFWwindow* window;
        gameEntity playerObj;
        Camera playerCamera;
        bool firstClick = true;
        bool mouseLocked = false;
        int health;
        float damageCooldown;
        float damageCooldownTime;
        glm::vec3 startPos = glm::vec3(0.0f, 0.0f, 0.0f);
        int startingHealth;
        float yaw = 0.0f;

        Player(GLFWwindow* window, int width, int height, Renderable playerMesh, float speed = 0.1f, int health = 10, glm::vec3 position = {1.0f, 1.0f, 1.0f}, float damageCooldown = 0.5f);

        glm::vec3 Input(float deltaTime);
        void moveCamera();
        bool isDead() const { return health <= 0; std::cout << "player health " << health << std::endl;}
        void update(float deltaTime) override;
};

#endif