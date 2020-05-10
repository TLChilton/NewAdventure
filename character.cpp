#include <character.h>
#include <string>

using namespace std;

Character::Character()
{
    hp = 80;
    lvl = 1;
    xp = 0;

    str = 5;
    dex = 5;
    con = 5;
    intel = 5;
    wis = 5;
    cha = 5;

    name = "John Doe";
    race = "Human";

}

void Character::getStats()
{

}

void Character::takeDamage(int damage)
{
    hp = hp - damage;
}

void Character::giveExperience(int xpGained)
{
    xp = xp + xpGained;
    if (xp > lvl * 100)
        levelUp();
}

void Character::levelUp()
{
    lvl = lvl + 1;
    hp = hp + 10;
    xp = 0;
}

void Character::setName(string nameInput)
{
    name = nameInput;
}