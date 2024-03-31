#include <stdio.h>
#include "declaration.h"
#include "grid.h"
#include "functions.h"

int main()
{
    printgrid();
    printf("WELCOLME TO 5 x 5 TIC TAC TOE\n");
    printf("\n1 : EXIT GAME || 2 : TWO PLAYERS || 3 : THREE PLAYERS\n");
    playernum = getcommand();
    // gets player number

    while (playernum != 1 && playernum != 2 && playernum != 3)
    {
        printf("INVALID INPUT\n");
        playernum = getcommand();
    }

    // decides  if it has abilities active or not
    printf("\nACTIVATE SPECIAL ABILITIES?\n");
    printf("\n1 : YES || 2 : NO\n");
    specialoption = getcommand();

    while (specialoption != 1 && specialoption != 2)
    {
        printf("\nINVALID INPUT\n");
        specialoption = getcommand();
    }
    
    // main game
    while (checkwin != 0)
    {
        printgrid();
        printturn(turn);
        changecell(&turn, playernum, specialoption);
        gameover(turn, &checkwin);
    }
}