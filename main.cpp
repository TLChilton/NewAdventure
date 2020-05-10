#include <iostream>
#include <fstream>
#include <time.h>
#include <string>
#include <stdlib.h>
#include "character.h"
#include "util.cpp"

using namespace std;

int main()
{
    string entry;
    Character player;
    char charEntry;

    printf("Welcome to my adventure \n");
    printf("Please enter the name of your character: ");
    cin >> entry;
    player.setName(entry);
    printf("Please enter your gender \n");
    printf("(options are M for male, F for female, O for other): ");
    cin >> charEntry;
    player.setGender(charEntry);
    printf("You are a%s. You are fighting a goblin.\n", player.getGender().c_str());
    choiceHandler(player);

}