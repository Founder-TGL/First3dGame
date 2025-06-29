#include "entityType.h"

EntityType::EntityType(Renderable entMesh, int health, glm::vec3 position)
: entObj(entMesh), health(health), startPos(position) {}

void EntityType::update(float deltaTime) {}