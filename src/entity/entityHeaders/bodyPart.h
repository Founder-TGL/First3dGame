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

        bool damage() {}

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
    vector<Tool> toolSlots;
    vector<UtilMount> utilMounts;
    vector<LegMount> legMounts;

public:
	torso();
	torso(string name, int enityHealth, int armorLVL, int armorHealth, int weight, int toolSlots, int utilSlots, int legMounts);

    int getToolSlotsCount(){}
    vector<Tool>& getToolSlots(){}
    void setToolSlots(int index, Tool tool){}
    int getUtilMountsCount(){}
    vector<UtilMount>& getUtilMounts(){}
    void setUtilMounts(int index, UtilMount utilMount){}
    int getLegsMountsCount(){}
    vector<LegMount>& getLegMounts(){}
    void setLegMounts(int index, LegMount legMount){}
    
 
};

        /*------------------------------------*/
        //TOOLS
        /*------------------------------------*/

        class Tool : public bodyPart{
        public:
            Tool();
            Tool(string name, int enityHealth, int armorLVL, int armorHealth, int weight, int toolSlots);
        };

        /*------------------------------------*/
        //MOUNTS
        /*------------------------------------*/

        class UtilMount : public bodyPart{
        private: 
            vector<Util> UtilSlots;
        public:
            UtilMount();
            UtilMount(string name, int enityHealth, int armorLVL, int armorHealth, int weight, int UtilSlots);

            int getUtilSlotsCount(){}
            vector<Util>& getUtilSlots(){}
            void setUtilSlots(int index, Util util){}

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
                private:
                    int ammoCount;
                    Ammo ammoType;
                    double fireRate;
                public:
                    Weapon();   
                    Weapon(string name, int enityHealth, int armorLVL, int armorHealth, int weight, int ammoCount, int ammoType);
                    
                    double& getAmmoCount(){}
                    Ammo getAmmoType(){}
                    double getFireRate(){}
                };
                
                        /*------------------------------------*/
                        //AMMUNITION
                        /*------------------------------------*/

                        class Ammo{
                        private:
                            string name;
                            int damageLVL;
                            int damage;
                            int weight;
                            double size;

                        public:
                            Ammo();
                            Ammo(string name,  int damageLVL, int damage, int ammunition, int weight, double size, double fireRate);

                            string getName(){}
                            int getDamageLVL(){}
                            int getDamage(){}
                            int getWeight(){}
                            double getSize(){}
                        };

                /*------------------------------------*/
                //SHIELD
                /*------------------------------------*/

                class Shield : public Util{
                public:
                    Shield();   
                    Shield(string name, int enityHealth, int armorLVL, int armorHealth, int weight, int damageLVL, int damage, int ammunition, double fireRate);
                    bool gaurd();
                };

/*------------------------------------*/
//HIPS
/*------------------------------------*/

class LegMount : public bodyPart{
private: 
    vector<Leg> legs;
public:
	LegMount();
	LegMount(string name, int enityHealth, int armorLVL, int armorHealth, int weight, int legSlots);

    int getLegSlotsCount(){}
    vector<Leg>& getLegSlots(){}
    vector<Leg> setLegSlots(){}

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

            int& getSpeed(){}
        };

#endif


