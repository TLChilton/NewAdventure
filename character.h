#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include <inventory.h>

using namespace std;

class Character
{

    private:
        int str, dex, con, intel, wis, cha;
        int hp, xp, lvl;
        string name, race;
        Inventory inv();

    public:
        Character();

        void getStats();
        void takeDamage(int damage);
        void giveExperience(int xpGained);
        void levelUp();
        void setName(string nameInput);
};

#endif