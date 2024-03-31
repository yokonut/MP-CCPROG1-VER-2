#include <stdio.h>
#include "declaration.h"
#include "grid.h"
#include "functions.h"

int main()
{
    int playernum, specialoption, checkwin = 1;
    char turn = p1;
    
    printgrid();
    printf("WELCOLME TO 5 x 5 TIC TAC TOE\n");
    printf("\n1 : EXIT GAME || 2 : TWO PLAYERS || 3 : THREE PLAYERS\n");
    playernum = getcommand();
    while (playernum != 1 && playernum != 2 && playernum != 3)
    {
        printf("INVALID INPUT\n");
        playernum = getcommand();
    }
    if (playernum == 2)
    {
        printf("\nACTIVATE SPECIAL ABILITIES?\n");
        printf("\n1 : YES || 2 : NO\n");
        specialoption = getcommand();

        while (specialoption != 1 && specialoption != 2)
        {
            printf("\nINVALID INPUT\n");
            specialoption = getcommand();
        }

        if (specialoption == 2)
        {
            while (checkwin != 0)
            {
                printgrid();
                printturn(turn);
                changecell(&turn, playernum, specialoption);
                gameover(turn, &checkwin);
            }
        }
        if (specialoption == 1)
        {
            while (checkwin != 0)
            {
                printgrid();
                printturn(turn);
                changecell(&turn, playernum, specialoption);
                gameover(turn, &checkwin);
            }
        }
    }
    if (playernum == 3)
    {
        printf("\nACTIVATE SPECIAL ABILITIES?\n");
        printf("\n1 : YES || 2 : NO\n");
        specialoption = getcommand();

        while (specialoption != 1 && specialoption != 2)
        {
            printf("\nINVALID INPUT\n");
            specialoption = getcommand();
        }

        if (specialoption == 2)
        {
            while (checkwin != 0)
            {
                printgrid();
                printturn(turn);
                changecell(&turn, playernum, specialoption);
                gameover(turn, &checkwin);
            }
        }
        if (specialoption == 1)
        {
            while (checkwin != 0)
            {
                printgrid();
                printturn(turn);
                changecell(&turn, playernum, specialoption);
                gameover(turn, &checkwin);
            }
        }
    }
}