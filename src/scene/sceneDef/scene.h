#ifndef SCENE_H
#define SCENE_H

#include "player/player.h"
#include "GameEntity.h"
#include "renderable/shapeData.h"
#include <vector>

class Scene 
{
    public:
        Player* player = nullptr;
        std::vector<EntityType*> entities;
        GLFWwindow* window;

        Scene(GLFWwindow* window);

        
        void setPlayer(Player* p) { player = p;}
        void addEntity(EntityType* ent) { entities.push_back(ent); }

        
        void update(float deltaTime);
        void draw(Shader& shader);

        void handlePlayerDeath();
}

#endif