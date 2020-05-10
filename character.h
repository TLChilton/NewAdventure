#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include "inventory.h"

using namespace std;

enum gender 
{ 
    Male,
    Female,
    They
};

class Character
{

    private:
        int str, dex, con, intel, wis, cha;
        int hp, xp, lvl;
        string name, race;
        Inventory inv;
        enum gender gen;

    public:
        Character();

        void getStats();
        void takeDamage(int damage);
        void giveExperience(int xpGained);
        void levelUp();
        void setName(string nameInput);
        void setGender(char genInput);
        string getGender();
        string getName();
};

#endif