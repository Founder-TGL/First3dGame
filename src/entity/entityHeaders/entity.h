#ifndef ENTITY_H
#define ENTITY_H

#include <iostream>
using namespace std;

class entity {
    private:
        string name;
        int entityHealth;
        int armorHealth;
        int armorLVL;


    public:
        entity();
        entity(string name, int enityHealth, int armorLVL, int armorHealth);
        string getName(){}
        int getEnityHealth(){}
        int getArmorHealth(){}
        int getArmorLVL(){}

        void setName(string Name){}
        void setEnityHealth(int enityHealth){}
        void setArmorHealth(int armorLVL){}
        void setArmorLVL(int armorHealth){}

};

#endif