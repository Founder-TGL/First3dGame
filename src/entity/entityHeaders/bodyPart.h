#ifndef BODYPART_H
#define BODYPART_H

#include <iostream>
#include <vector>

using namespace std;

/*------------------------------------*/
//BODYPARTS
/*------------------------------------*/

class BodyPart {
    private:
        string name;
        int entityHealth;
        int armorHealth;
        int armorLVL;
        int weight;


    public:
        BodyPart();
        BodyPart(string name, int enityHealth, int armorHealth, int armorLVL, int weight);

        bool damage(Ammo ammo) {}

        string getName(){}
        int getEnityHealth(){}
        int getArmorHealth(){}
        int getArmorLVL(){}
        int getWeight(){}
         

        void setName(string name){}
        void setEnityHealth(int enityHealth){}
        void setArmorHealth(int armorHealth){}
        void setArmorLVL(int armorLVL){}
        void setWeight(int weight){}
        void setAll(string name, int enityHealth, int armorHealth, int armorLVL, int weight){}
        
};

/*------------------------------------*/
//TORSO
/*------------------------------------*/

class Torso : public BodyPart{
private: 
    int toolSlotsCount, utilMountsCount, legMountsCount;
    vector<Tool> toolSlots;
    vector<UtilMount> utilMounts;
    vector<LegMount> legMounts;

public:
	Torso();
	Torso(string name, int enityHealth, int armorLVL, int armorHealth, int weight, int toolSlots, int utilMounts, int legMounts);

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

        class Tool : public BodyPart{
        public:
            Tool();
            Tool(string name, int enityHealth, int armorHealth, int armorLVL , int weight);
        };

        /*------------------------------------*/
        //MOUNTS
        /*------------------------------------*/

        class UtilMount : public BodyPart{
        private: 
            int utilSlotsCount;
            vector<Util> utilSlots;
        public:
            UtilMount();
            UtilMount(string name, int enityHealth, int armorHealth, int armorLVL , int weight, int UtilSlots);

            int getUtilSlotsCount(){}
            vector<Util>& getUtilSlots(){}
            void setUtilSlots(int index, Util util){}

        };

                /*------------------------------------*/
                //UTILS
                /*------------------------------------*/

                class Util : public BodyPart{
                public:
                    Util();
                    Util(string name, int enityHealth, int armorHealth, int armorLVL , int weight);
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
                            Weapon(string name, int enityHealth, int armorHealth, int armorLVL , int weight, int ammoCount, Ammo ammoType, double fireRate);
                            
                            int getAmmoCount(){}
                            void setAmmoCount(int ammoCount){}
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
                                    void setAll(string name, int damageLVL, int damage, int weight, double size);
                                };

                        /*------------------------------------*/
                        //SHIELD
                        /*------------------------------------*/

                        class Shield : public Util{
                public:
                    Shield();   
                    Shield(string name, int enityHealth, int armorLVL, int armorHealth, int weight);
                    bool gaurd();
                };

/*------------------------------------*/
//HIPS
/*------------------------------------*/

class LegMount : public BodyPart{
private: 
    vector<Leg> legs;
public:
	LegMount();
	LegMount(string name, int enityHealth, int armorHealth, int armorLVL , int weight, int legSlots);

    int getLegSlotsCount(){}
    vector<Leg>& getLegSlots(){}
    vector<Leg> setLegSlots(int index, Leg leg){}

};

        /*------------------------------------*/
        //LEGS
        /*------------------------------------*/

        class Leg : public BodyPart{
        private: 
            int speed;
        public:
            Leg();
            Leg(string name, int enityHealth, int armorHealth, int armorLVL , int weight, int speed);

            int& getSpeed(){}
        };

#endif


