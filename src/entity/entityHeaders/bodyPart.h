#ifndef BODYPART_H
#define BODYPART_H

#include <iostream>
#include <vector>

using namespace std;

/*------------------------------------*/
//BODYPARTS
/*------------------------------------*/

class bodyPart {
    private:
        string name;
        int entityHealth;
        int armorHealth;
        int armorLVL;
        int weight;


    public:
        bodyPart();
        bodyPart(string name, int enityHealth, int armorHealth, int armorLVL, int weight);
        string getName(){}
        int getEnityHealth(){}
        int getArmorHealth(){}
        int getArmorLVL(){}
        int getWeight(){}
         

        void setName(string Name){}
        void setEnityHealth(int enityHealth){}
        void setArmorHealth(int armorHealth){}
        void setArmorLVL(int armorLVL){}
        void setWeight(int weight){}
        
};

/*------------------------------------*/
//TORSO
/*------------------------------------*/

class torso : public bodyPart{
private: 
    int toolSlots;
    vector<Tool> toolSlots;
    int Mounts;
    vector<UtilMount> UtilMounts;
    int legMounts;
    vector<legMount> legMount;


public:
	torso();
	torso(string name, int enityHealth, int armorLVL, int armorHealth, int weight, int toolSlots);

    int getToolSlots(){}
};

        /*------------------------------------*/
        //TOOLS
        /*------------------------------------*/

        class Tool : public bodyPart{
        private: 
            int toolSlots;
        public:
            Tool();
            Tool(string name, int enityHealth, int armorLVL, int armorHealth, int weight, int toolSlots);

            int getToolSlots(){}
        };

        /*------------------------------------*/
        //MOUNTS
        /*------------------------------------*/

        class UtilMount : public bodyPart{
        private: 
            int Utilslots;
        public:
            UtilMount();
            UtilMount(string name, int enityHealth, int armorLVL, int armorHealth, int weight, int toolSlots);

            int getToolSlots(){}
        };

        /*------------------------------------*/
        //UTILS
        /*------------------------------------*/

        class Util : public bodyPart{
        public:
            Util();
            Util(string name, int enityHealth, int armorLVL, int armorHealth, int weight);
        };

                /*------------------------------------*/
                //WEAPON
                /*------------------------------------*/

                class Weapon : public Util{
                    int damageLVL;
                    int damage;
                    int ammunition;
                    double fireRate;

                public:
                    Weapon();
                    Weapon(string name, int enityHealth, int armorLVL, int armorHealth, int weight, int damageLVL, int damage, int ammunition, double fireRate);
                };

/*------------------------------------*/
//HIPS
/*------------------------------------*/

class legMount : public bodyPart{
private: 
    int legSlots;
    vector<Leg> legs;
public:
	legMount();
	legMount(string name, int enityHealth, int armorLVL, int armorHealth, int weight, int legSlots);

    int getLegSlots(){}
};

        /*------------------------------------*/
        //LEGS
        /*------------------------------------*/

        class Leg : public bodyPart{
        private: 
            int speed;
        public:
            Leg();
            Leg(string name, int enityHealth, int armorLVL, int armorHealth, int weight, int speed);

            int getSpeed(){}
        };

#endif


