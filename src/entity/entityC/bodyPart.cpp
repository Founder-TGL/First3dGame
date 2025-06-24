#include "src\entity\entityHeaders\bodyPart.h"
#include "bodyPart.h"




/*------------------------------------*/
//BODYPARTS
/*------------------------------------*/

// ignore my abysmall typing speed in cramped economy seat, no room to type

BodyPart::BodyPart()
{
    this->setAll("blank Part", 10, 10, 1, 100);
}
BodyPart::BodyPart(string name, int enityHealth, int armorHealth, int armorLVL, int weight)
{
    this->setAll(name, entityHealth, armorHealth, armorLVL, weight);
}
/*              TODO: GET DAMAGE DONE           */
bool BodyPart::damage(Ammo ammo)
{
    // if ((this->armorLVL-2) == ammo.getDamageLVL)
    return false;
}
int BodyPart::getEnityHealth(){return this->entityHealth;}
int BodyPart::getArmorHealth(){return this->armorHealth;}
int BodyPart::getArmorLVL(){return this-> armorLVL;}
int BodyPart::getWeight(){return this->weight;}
void BodyPart::setName(string name){this->name = name;}
void BodyPart::setEnityHealth(int enityHealth){ this->entityHealth = entityHealth;}
void BodyPart::setArmorHealth(int armorHealth){ this->armorHealth = armorHealth;}
void BodyPart::setArmorLVL(int armorLVL){this->armorLVL = armorLVL;}
void BodyPart::setWeight(int weight){this->weight = weight;}
void BodyPart::setAll(string name, int enityHealth, int armorHealth, int armorLVL, int weight)
{
    this->name = name;
    this->entityHealth = entityHealth;
    this->armorHealth = armorHealth;
    this->armorLVL = armorLVL;
    this->weight = weight;
}


        /*------------------------------------*/
        //TORSO
        /*------------------------------------*/

        Torso::Torso() : BodyPart(), toolSlotsCount(1), utilMountsCount(1), legMountsCount(1) {}
        Torso::Torso(string name, int enityHealth, int armorHealth, int armorLVL, int weight, int toolSlots, 
            int utilMounts, int legMounts) : BodyPart(name, enityHealth, armorHealth, armorLVL, weight), 
            toolSlotsCount(toolSlots), utilMountsCount(utilMounts), legMountsCount(legMounts){}
        int Torso::getToolSlotsCount(){return toolSlotsCount;}
        vector<Tool>&  Torso::getToolSlots(){return toolSlots;}
        void Torso::setToolSlots(int index, Tool tool){
             if (index < toolSlotsCount){
                toolSlots.insert(toolSlots.begin() + index, tool);
            }else{
                cerr << "tool added at invalid index (out of bounds)";
            }                
        }
        int Torso::getUtilMountsCount(){return utilMountsCount;}
        vector<UtilMount>& Torso::getUtilMounts(){return utilMounts;}
        void Torso::setUtilMounts(int index, UtilMount utilMount){
             if (index < utilMountsCount){
                utilMounts.insert(utilMounts.begin() + index, utilMount);
            }else{
                cerr << "Util mount added at invalid index (out of bounds)";
            }           
        }
        int Torso::getLegsMountsCount(){return legMountsCount;}
        vector<LegMount>& Torso::getLegMounts(){return legMounts;}
        void Torso::setLegMounts(int index, LegMount legMount){
            if (index < legMountsCount){
                legMounts.insert(legMounts.begin() + index, legMount);
            }else{
                cerr << "Leg mount added at invalid index (out of bounds)";
            }
        }        

                /*------------------------------------*/
                //TOOLS
                /*------------------------------------*/

                Tool::Tool() : BodyPart(){}
                Tool::Tool(string name, int enityHealth, int armorHealth, int armorLVL, int weight) : BodyPart(name, enityHealth, armorHealth, armorLVL , weight){}

                /*------------------------------------*/
                //MOUNTS
                /*------------------------------------*/

                UtilMount::UtilMount() : BodyPart(), utilSlotsCount(1){}
                UtilMount::UtilMount(string name, int enityHealth, int armorHealth, int armorLVL , int weight, int UtilSlots) : 
                                    BodyPart(name, enityHealth, armorHealth, armorLVL, weight), utilSlotsCount(utilSlotsCount){}
                int  UtilMount::getUtilSlotsCount(){return utilSlotsCount;}
                vector<Util>& UtilMount::getUtilSlots(){return utilSlots;}
                void UtilMount::setUtilSlots(int index, Util util){
                    if (index < utilSlotsCount){
                        utilSlots.insert(utilSlots.begin() + index, util);
                    }else{
                        cerr << "util mount added at invalid index (out of bounds)";
                    }                    
                }

                        /*------------------------------------*/
                        //UTILS
                        /*------------------------------------*/

                        Util::Util() : BodyPart(){}
                        Util::Util(string name, int enityHealth, int armorHealth, int armorLVL, int weight) : BodyPart(name, enityHealth, armorHealth, armorLVL , weight){}

                                /*------------------------------------*/
                                //WEAPON
                                /*------------------------------------*/

                                Weapon::Weapon() : Util(), ammoCount(100), ammoType(Ammo()), fireRate(1){}
                                Weapon::Weapon(string name, int enityHealth, int armorHealth, int armorLVL , int weight, int ammoCount, Ammo ammoType, double fireRate) : 
                                        Util(name, enityHealth, armorHealth, armorLVL , weight), ammoCount(ammoCount), ammoType(ammoType), fireRate(fireRate){}
                                int Weapon::getAmmoCount(){return ammoCount;}
                                void Weapon::setAmmoCount(int ammoCount){this->ammoCount = ammoCount;}
                                Ammo Weapon::getAmmoType(){return ammoType;}
                                double Weapon::getFireRate(){return fireRate;}
   
                                
                                        /*------------------------------------*/
                                        //AMMUNITION
                                        /*------------------------------------*/

                                        Ammo::Ammo(){setAll("", 1, 10, 1, 1);}
                                        Ammo::Ammo(string name, int damageLVL, int damage, int weight, double size){setAll(name, damageLVL, damage, weight, size);}
                                        string Ammo::getName(){return name;}
                                        int Ammo::getDamageLVL(){return damageLVL;}
                                        int Ammo::getDamage(){return damage;}
                                        int Ammo::getWeight(){return weight;}
                                        double Ammo::getSize(){return size;}
                                        void Ammo::setAll(string name, int damageLVL, int damage, int weight, double size){
                                            this->name = name;
                                            this->damageLVL = damageLVL;
                                            this->damage = damage;
                                            this->weight = weight;
                                            this->size = size;
                                        }


                                /*------------------------------------*/
                                //SHIELD
                                /*------------------------------------*/

                                Shield::Shield() : Util(){}
                                Shield::Shield(string name, int enityHealth, int armorLVL, int armorHealth, int weight) :
                                        Util(name, enityHealth, armorHealth, armorLVL , weight){}
                                bool Shield::gaurd(){return false;} //TODO: implement gaurding

        /*------------------------------------*/
        //HIPS
        /*------------------------------------*/

        LegMount::LegMount() : BodyPart(), legSlotsCount(1){}
        LegMount::LegMount(string name, int enityHealth, int armorLVL, int armorHealth, int weight, int legSlots) : 
                BodyPart(name, enityHealth, armorHealth, armorLVL , weight), legSlotsCount(legSlots){}
        int LegMount::getLegSlotsCount(){return legSlotsCount;}
        vector<Leg>& LegMount::getLegSlots(){return legSlots;}
        vector<Leg> LegMount::setLegSlots(int index, Leg leg){
            if (index < legSlotsCount){
                legSlots.insert(legSlots.begin() + index, leg);
            }else{
                cerr << "Leg added at invalid index (out of bounds)";
            }                
        }   


                /*------------------------------------*/
                //LEGS
                /*------------------------------------*/

                Leg::Leg() : BodyPart(), speed(10){}
                Leg::Leg(string name, int enityHealth, int armorHealth, int armorLVL , int weight, int speed) : 
                    BodyPart(name, enityHealth, armorHealth, armorLVL , weight), speed(speed){}


