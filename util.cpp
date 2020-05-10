#include <fstream>
#include <iostream>
#include "character.h"

using namespace std;

void printOptions()
{
    printf("C: Character Sheet \n");
    printf("I: Inventory \n");
    printf("A: Attack \n");
    printf("D: Defend\n");
    printf("F: Flee\n");
    printf("P: Print Options\n");
    printf("Q: Exit\n");
}

void choiceHandler(Character player)
{
    char choice;
    do {
        printf("What will you do? (P to show options): " );
        cin >> choice;
        if (tolower(choice) == 'c')
        {
            player.getStats();
        }
        else if (tolower(choice) == 'i')
        {

        }
        else if (tolower(choice) == 'a')
        {

        }
        else if (tolower(choice) == 'd')
        {

        }
        else if (tolower(choice) == 'f')
        {

        }
        else if (tolower(choice) == 'p')
        {
            printOptions();
        }
    } while (tolower(choice != 'q'));

}