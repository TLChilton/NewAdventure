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
        int xp, lvl;
        string name, race;
        enum gender gen;

    public:
        Inventory inv;
        int hp;
        Character();
        Character(int s, int d, int co, int i, int w, int ch, 
            int h, int l, string n, string r);

        void getStats();
        void takeDamage(int damage);
        void giveExperience(int xpGained);
        void levelUp();
        void setName(string nameInput);
        void setGender(char genInput);
        string getGender();
        string getPronoun();
        string getName();
};

#endif