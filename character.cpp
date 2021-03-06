#include "character.h"
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
    gen = Male;

}

Character::Character(int s, int d, int co, int i, int w, int ch, 
    int h, int l, string n, string r)
{
    hp = h;
    lvl = l;

    str = s;
    dex = d;
    con = co;
    intel = i;
    wis = w;
    cha = ch;
    name = n;
    race = r;
}

void Character::getStats()
{
    printf("CHARACTER SHEET\n");
    printf("Name: %s\n", name.c_str());
    printf("Race: %s\n", race.c_str());
    printf("Level: %i\n", lvl);
    printf("HP: %i\n", hp);
    printf("AC: %i\n", inv.getAC());
    printf("STR: %i\n", str);
    printf("DEX: %i\n", dex);
    printf("CON: %i\n", con);
    printf("INT: %i\n", intel);
    printf("WIS: %i\n", wis);
    printf("CHA: %i\n", cha);
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

void Character::setGender(char genInput)
{
    if (tolower(genInput) == 'm')
    {
        gen = Male;
    }
    else if (tolower(genInput) == 'f')
    {
        gen = Female;
    }
    else
    {
        gen = They;
    }
}

string Character::getGender()
{
    string gender;
    if (gen == Male)
        gender = " man";
    else if (gen == Female)
        gender = " woman";
    else if (gen == They)
        gender = "n adventurer";
    return gender;
}

string Character::getPronoun()
{
    string pronoun;
    if (gen == Male)
        pronoun = "he";
    else if (gen == Female)
        pronoun = "she";
    else if (gen == They)
        pronoun = "they";
    return pronoun;
}