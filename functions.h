
int getcommand()
{

    int cmd;

    printf("\nENTER COMMAND: ");
    scanf("%d", &cmd);

    return cmd;
}

void removeability()
{
    int remove5, removecol, removerow;
    printf("\n1 : ERASE COLUMN || 2 : ERASE ROW || 3 : ERASE CORNERS AND CENTER \n");
    remove5 = getcommand();
    switch (remove5)
    {
    // CASE 1 REMOVE COLMN
    case 1:
        printf("\nENTER COLUMN TO ERASE\n");
        removecol = getcommand();
        // SWITCH TO CHOOSE WHICH COLUMN TO REMOVE
        switch (removecol)
        {
        case 1:
            cell01 = ' ';
            cell06 = ' ';
            cell11 = ' ';
            cell16 = ' ';
            cell21 = ' ';
            break;
        case 2:
            cell02 = ' ';
            cell07 = ' ';
            cell12 = ' ';
            cell17 = ' ';
            cell22 = ' ';
            break;
        case 3:
            cell03 = ' ';
            cell08 = ' ';
            cell13 = ' ';
            cell18 = ' ';
            cell23 = ' ';
            break;
        case 4:
            cell04 = ' ';
            cell09 = ' ';
            cell14 = ' ';
            cell19 = ' ';
            cell24 = ' ';
            break;
        case 5:
            cell05 = ' ';
            cell10 = ' ';
            cell15 = ' ';
            cell20 = ' ';
            cell25 = ' ';
            break;
        default:
            printf("\nINVALID INPUT\n");
            break;
        }
        break;
    // CASE 2 TO ERASE ROW
    case 2:
        printf("\nENTER ROW TO ERASE\n");
        removerow = getcommand();
        // SWITCH TO CHOOSE WHICH ROW TO ERASE
        switch (removerow)
        {
        case 1:
            cell01 = ' ';
            cell02 = ' ';
            cell03 = ' ';
            cell04 = ' ';
            cell05 = ' ';
            break;
        case 2:
            cell06 = ' ';
            cell07 = ' ';
            cell08 = ' ';
            cell09 = ' ';
            cell10 = ' ';
            break;
        case 3:
            cell11 = ' ';
            cell12 = ' ';
            cell13 = ' ';
            cell14 = ' ';
            cell15 = ' ';
            break;
        case 4:
            cell16 = ' ';
            cell17 = ' ';
            cell18 = ' ';
            cell19 = ' ';
            cell20 = ' ';
            break;
        case 5:
            cell21 = ' ';
            cell22 = ' ';
            cell23 = ' ';
            cell24 = ' ';
            cell25 = ' ';
            break;
        default:
            printf("\nINVALID INPUT\n");
            break;
        }
        break;
    // CASE 3 TO REMOVE 4 CORNERS AND CENTER
    case 3:
        cell01 = ' ';
        cell05 = ' ';
        cell13 = ' ';
        cell20 = ' ';
        cell25 = ' ';
        break;
    default:
        printf("\nINVALID INPUT\n");
    }
}

void printturn(char turn)
{
    printf("\nMAKE YOUR MOVE PLAYER %c\n", turn);
}

void changeturn(char *turn, int playernum)
{
    if (playernum == 2)
    {

        if (*turn == p1)
            *turn = p2;
        else
            *turn = p1;
    }
    if (playernum == 3)
    {
        if (*turn == p1)
            *turn = p2;
        else if (*turn == p2)
            *turn = p3;
        else
            *turn = p1;
    }
}

void changecell(char *turn, int playernum, int specialoption)
{
    int move = getcommand();
    int specialmove, remove1, remove5, removecol, removerow;

    switch (move)
    {
    // ONLY WORKS WHEN SEPCIAL OPTION IS 1 || TRUE
    case 0:
        if (specialoption != 1)
        {
            printf("\nSPECIAL ABILITIES ARE TURNED OFF\n");
        }
        else
        {
            printf("\n1 : ERASE A SPACE || 2 : ERASE 5 SPACES\n");
            specialmove = getcommand();
            // SWITCH FOR CHOOSING REMOVE 1 OR REMOVE 5 OR CORNER
            switch (specialmove)
            {
            // CASE 1 TO REMOVE 1 CELL
            case 1:
                printf("\nENTER A CELL TO REMOVE\n");
                remove1 = getcommand();
                switch (remove1)
                {
                case 1:
                    if (cell01 == ' ')
                        printf("\nCELL IS ALREADY EMPTY\n");
                    else if (cell01 != *turn)
                    {
                        cell01 = ' ';
                        changeturn(turn, playernum);
                    }
                    else
                        printf("\nCELL IS TAKEN BY YOU\n");
                    break;
                case 2:
                    if (cell02 == ' ')
                        printf("\nCELL IS ALREADY EMPTY\n");
                    else if (cell02 != *turn)
                    {
                        cell02 = ' ';
                        changeturn(turn, playernum);
                    }
                    else
                        printf("\nCELL IS TAKEN BY YOU\n");
                    break;
                case 3:
                    if (cell03 == ' ')
                        printf("\nCELL IS ALREADY EMPTY\n");
                    else if (cell03 != *turn)
                    {
                        cell03 = ' ';
                        changeturn(turn, playernum);
                    }
                    else
                        printf("\nCELL IS TAKEN BY YOU\n");
                    break;
                case 4:
                    if (cell04 == ' ')
                        printf("\nCELL IS ALREADY EMPTY\n");
                    else if (cell04 != *turn)
                    {
                        cell04 = ' ';
                        changeturn(turn, playernum);
                    }
                    else
                        printf("\nCELL IS TAKEN BY YOU\n");
                    break;
                case 5:
                    if (cell05 == ' ')
                        printf("\nCELL IS ALREADY EMPTY\n");
                    else if (cell05 != *turn)
                    {
                        cell05 = ' ';
                        changeturn(turn, playernum);
                    }
                    else
                        printf("\nCELL IS TAKEN BY YOU\n");
                    break;
                case 6:
                    if (cell06 == ' ')
                        printf("\nCELL IS ALREADY EMPTY\n");
                    else if (cell06 != *turn)
                    {
                        cell06 = ' ';
                        changeturn(turn, playernum);
                    }
                    else
                        printf("\nCELL IS TAKEN BY YOU\n");
                    break;
                case 7:
                    if (cell07 == ' ')
                        printf("\nCELL IS ALREADY EMPTY\n");
                    else if (cell07 != *turn)
                    {
                        cell07 = ' ';
                        changeturn(turn, playernum);
                    }
                    else
                        printf("\nCELL IS TAKEN BY YOU\n");
                    break;
                case 8:
                    if (cell08 == ' ')
                        printf("\nCELL IS ALREADY EMPTY\n");
                    else if (cell08 != *turn)
                    {
                        cell08 = ' ';
                        changeturn(turn, playernum);
                    }
                    else
                        printf("\nCELL IS TAKEN BY YOU\n");
                    break;
                case 9:
                    if (cell09 == ' ')
                        printf("\nCELL IS ALREADY EMPTY\n");
                    else if (cell09 != *turn)
                    {
                        cell09 = ' ';
                        changeturn(turn, playernum);
                    }
                    else
                        printf("\nCELL IS TAKEN BY YOU\n");
                    break;
                case 10:
                    if (cell10 == ' ')
                        printf("\nCELL IS ALREADY EMPTY\n");
                    else if (cell10 != *turn)
                    {
                        cell10 = ' ';
                        changeturn(turn, playernum);
                    }
                    else
                        printf("\nCELL IS TAKEN BY YOU\n");
                    break;
                case 11:
                    if (cell11 == ' ')
                        printf("\nCELL IS ALREADY EMPTY\n");
                    else if (cell11 != *turn)
                    {
                        cell11 = ' ';
                        changeturn(turn, playernum);
                    }
                    else
                        printf("\nCELL IS TAKEN BY YOU\n");
                    break;
                case 12:
                    if (cell12 == ' ')
                        printf("\nCELL IS ALREADY EMPTY\n");
                    else if (cell12 != *turn)
                    {
                        cell12 = ' ';
                        changeturn(turn, playernum);
                    }
                    else
                        printf("\nCELL IS TAKEN BY YOU\n");
                    break;
                    ;
                case 13:
                    if (cell13 == ' ')
                        printf("\nCELL IS ALREADY EMPTY\n");
                    else if (cell13 != *turn)
                    {
                        cell13 = ' ';
                        changeturn(turn, playernum);
                    }
                    else
                        printf("\nCELL IS TAKEN BY YOU\n");
                    break;
                case 14:
                    if (cell14 == ' ')
                        printf("\nCELL IS ALREADY EMPTY\n");
                    else if (cell14 != *turn)
                    {
                        cell14 = ' ';
                        changeturn(turn, playernum);
                    }
                    else
                        printf("\nCELL IS TAKEN BY YOU\n");
                    break;
                case 15:
                    if (cell15 == ' ')
                        printf("\nCELL IS ALREADY EMPTY\n");
                    else if (cell15 != *turn)
                    {
                        cell15 = ' ';
                        changeturn(turn, playernum);
                    }
                    else
                        printf("\nCELL IS TAKEN BY YOU\n");
                    break;
                case 16:
                    if (cell16 == ' ')
                        printf("\nCELL IS ALREADY EMPTY\n");
                    else if (cell16 != *turn)
                    {
                        cell16 = ' ';
                        changeturn(turn, playernum);
                    }
                    else
                        printf("\nCELL IS TAKEN BY YOU\n");
                    break;
                case 17:
                    if (cell17 == ' ')
                        printf("\nCELL IS ALREADY EMPTY\n");
                    else if (cell17 != *turn)
                    {
                        cell17 = ' ';
                        changeturn(turn, playernum);
                    }
                    else
                        printf("\nCELL IS TAKEN BY YOU\n");
                    break;
                case 18:
                    if (cell18 == ' ')
                        printf("\nCELL IS ALREADY EMPTY\n");
                    else if (cell18 != *turn)
                    {
                        cell18 = ' ';
                        changeturn(turn, playernum);
                    }
                    else
                        printf("\nCELL IS TAKEN BY YOU\n");
                    break;
                case 19:
                    if (cell19 == ' ')
                        printf("\nCELL IS ALREADY EMPTY\n");
                    else if (cell19 != *turn)
                    {
                        cell19 = ' ';
                        changeturn(turn, playernum);
                    }
                    else
                        printf("\nCELL IS TAKEN BY YOU\n");
                    break;
                case 20:
                    if (cell20 == ' ')
                        printf("\nCELL IS ALREADY EMPTY\n");
                    else if (cell20 != *turn)
                    {
                        cell20 = ' ';
                        changeturn(turn, playernum);
                    }
                    else
                        printf("\nCELL IS TAKEN BY YOU\n");
                    break;
                case 21:
                    if (cell21 == ' ')
                        printf("\nCELL IS ALREADY EMPTY\n");
                    else if (cell21 != *turn)
                    {
                        cell21 = ' ';
                        changeturn(turn, playernum);
                    }
                    else
                        printf("\nCELL IS TAKEN BY YOU\n");
                    break;
                case 22:
                    if (cell22 == ' ')
                        printf("\nCELL IS ALREADY EMPTY\n");
                    else if (cell22 != *turn)
                    {
                        cell22 = ' ';
                        changeturn(turn, playernum);
                    }
                    else
                        printf("\nCELL IS TAKEN BY YOU\n");
                    break;
                case 23:
                    if (cell23 == ' ')
                        printf("\nCELL IS ALREADY EMPTY\n");
                    else if (cell23 != *turn)
                    {
                        cell23 = ' ';
                        changeturn(turn, playernum);
                    }
                    else
                        printf("\nCELL IS TAKEN BY YOU\n");
                    break;
                case 24:
                    if (cell24 == ' ')
                        printf("\nCELL IS ALREADY EMPTY\n");
                    else if (cell24 != *turn)
                    {
                        cell24 = ' ';
                        changeturn(turn, playernum);
                    }
                    else
                        printf("\nCELL IS TAKEN BY YOU\n");
                    break;
                case 25:
                    if (cell25 == ' ')
                        printf("\nCELL IS ALREADY EMPTY\n");
                    else if (cell25 != *turn)
                    {
                        cell25 = ' ';
                        changeturn(turn, playernum);
                    }
                    else
                        printf("\nCELL IS TAKEN BY YOU\n");
                    break;
                default:
                    printf("INVALID INPUT\n");
                    break;
                }
                break;
                // SEPCIAL ABILITY TO BE USED ONLY ONCE
                // CASE 2 TO CHOOSE COLUMN,ROW, OR CORNERS
            case 2:

                if (*turn == p1 && p1_special == 1)
                {
                    removeability();
                    if (*turn == p1)
                        p1_special--;
                    if (*turn == p2)
                        p2_special--;
                    if (*turn == p3)
                        p3_special--;
                    changeturn(turn, playernum);

                    break;
                }
                else if (*turn == p2 && p2_special == 1)
                {
                    removeability();
                    if (*turn == p1)
                        p1_special--;
                    if (*turn == p2)
                        p2_special--;
                    if (*turn == p3)
                        p3_special--;
                    changeturn(turn, playernum);
                    break;
                }
                else if (*turn == p3 && p3_special == 1)
                {
                    removeability();
                    if (*turn == p1)
                        p1_special--;
                    if (*turn == p2)
                        p2_special--;
                    if (*turn == p3)
                        p3_special--;
                    changeturn(turn, playernum);
                    break;
                }
                else
                {
                    printf("\nPLAYER %c HAS NO MORE ABILITIES LEFT", *turn);
                    break;
                }

            default:
                printf("\nINVALID INPUT\n");
                break;
            }
        }
        break;
    // CASE 1 TO 25 TO FILL IN CELL
    case 1:
        if (cell01 == ' ')
        {
            cell01 = *turn;
            changeturn(turn, playernum);
            break;
        }
        else
            printf("\nCELL ALREADY TAKEN\n");
        break;
    case 2:
        if (cell02 == ' ')
        {
            cell02 = *turn;
            changeturn(turn, playernum);
            break;
        }
        else
            printf("\nCELL ALREADY TAKEN\n");
        break;
    case 3:
        if (cell03 == ' ')
        {
            cell03 = *turn;
            changeturn(turn, playernum);
            break;
        }
        else
            printf("\nCELL ALREADY TAKEN\n");
        break;
    case 4:
        if (cell04 == ' ')
        {
            cell04 = *turn;
            changeturn(turn, playernum);
            break;
        }
        else
            printf("\nCELL ALREADY TAKEN\n");
        break;
    case 5:
        if (cell05 == ' ')
        {
            cell05 = *turn;
            changeturn(turn, playernum);
            break;
        }
        else
            printf("\nCELL ALREADY TAKEN\n");
        break;
    case 6:
        if (cell06 == ' ')
        {
            cell06 = *turn;
            changeturn(turn, playernum);
            break;
        }
        else
            printf("\nCELL ALREADY TAKEN\n");
        break;
    case 7:
        if (cell07 == ' ')
        {
            cell07 = *turn;
            changeturn(turn, playernum);
            break;
        }
        else
            printf("\nCELL ALREADY TAKEN\n");
        break;
    case 8:
        if (cell08 == ' ')
        {
            cell08 = *turn;
            changeturn(turn, playernum);
            break;
        }
        else
            printf("\nCELL ALREADY TAKEN\n");
        break;
    case 9:
        if (cell09 == ' ')
        {
            cell09 = *turn;
            changeturn(turn, playernum);
            break;
        }
        else
            printf("\nCELL ALREADY TAKEN\n");
        break;
    case 10:
        if (cell10 == ' ')
        {
            cell10 = *turn;
            changeturn(turn, playernum);
            break;
        }
        else
            printf("\nCELL ALREADY TAKEN\n");
        break;
    case 11:
        if (cell11 == ' ')
        {
            cell11 = *turn;
            changeturn(turn, playernum);
            break;
        }
        else
            printf("\nCELL ALREADY TAKEN\n");
        break;
    case 12:
        if (cell12 == ' ')
        {
            cell12 = *turn;
            changeturn(turn, playernum);
            break;
        }
        else
            printf("\nCELL ALREADY TAKEN\n");
        break;
    case 13:
        if (cell13 == ' ')
        {
            cell13 = *turn;
            changeturn(turn, playernum);
            break;
        }
        else
            printf("\nCELL ALREADY TAKEN\n");
        break;
    case 14:
        if (cell14 == ' ')
        {
            cell14 = *turn;
            changeturn(turn, playernum);
            break;
        }
        else
            printf("\nCELL ALREADY TAKEN\n");
        break;
    case 15:
        if (cell15 == ' ')
        {
            cell15 = *turn;
            changeturn(turn, playernum);
            break;
        }
        else
            printf("\nCELL ALREADY TAKEN\n");
        break;
    case 16:
        if (cell16 == ' ')
        {
            cell16 = *turn;
            changeturn(turn, playernum);
            break;
        }
        else
            printf("\nCELL ALREADY TAKEN\n");
        break;
    case 17:
        if (cell17 == ' ')
        {
            cell17 = *turn;
            changeturn(turn, playernum);
            break;
        }
        else
            printf("\nCELL ALREADY TAKEN\n");
        break;
    case 18:
        if (cell18 == ' ')
        {
            cell18 = *turn;
            changeturn(turn, playernum);
            break;
        }
        else
            printf("\nCELL ALREADY TAKEN\n");
        break;
    case 19:
        if (cell19 == ' ')
        {
            cell19 = *turn;
            changeturn(turn, playernum);
            break;
        }
        else
            printf("\nCELL ALREADY TAKEN\n");
        break;
    case 20:
        if (cell20 == ' ')
        {
            cell20 = *turn;
            changeturn(turn, playernum);
            break;
        }
        else
            printf("\nCELL ALREADY TAKEN\n");
        break;
    case 21:
        if (cell21 == ' ')
        {
            cell21 = *turn;
            changeturn(turn, playernum);
            break;
        }
        else
            printf("\nCELL ALREADY TAKEN\n");
        break;
    case 22:
        if (cell22 == ' ')
        {
            cell22 = *turn;
            changeturn(turn, playernum);
            break;
        }
        else
            printf("\nCELL ALREADY TAKEN\n");
        break;
    case 23:
        if (cell23 == ' ')
        {
            cell23 = *turn;
            changeturn(turn, playernum);
            break;
        }
        else
            printf("\nCELL ALREADY TAKEN\n");
        break;
    case 24:
        if (cell24 == ' ')
        {
            cell24 = *turn;
            changeturn(turn, playernum);
            break;
        }
        else
            printf("\nCELL ALREADY TAKEN\n");
        break;
    case 25:
        if (cell25 == ' ')
        {
            cell25 = *turn;
            changeturn(turn, playernum);
            break;
        }
        else
            printf("\n\nCELL ALREADY TAKEN\n");
        break;
    default:
        printf("\nINVALID INPUT\n");
        break;
    }
}

void gameover(char turn, int *checkwin)
{
    if (cell01 == turn && cell02 == turn && cell03 == turn && cell04 == turn & cell05 == turn)
    {
        printf("CONGRATULATIONS YOU WON PLAYER %c", turn);
        *checkwin = 0;
    }
    if (cell06 == turn && cell07 == turn && cell08 == turn && cell09 == turn & cell10 == turn)
    {
        printf("CONGRATULATIONS YOU WON PLAYER %c", turn);
        *checkwin = 0;
    }
    if (cell11 == turn && cell12 == turn && cell13 == turn && cell14 == turn & cell15 == turn)
    {
        printf("CONGRATULATIONS YOU WON PLAYER %c", turn);
        *checkwin = 0;
    }
    if (cell16 == turn && cell17 == turn && cell18 == turn && cell19 == turn & cell20 == turn)
    {
        printf("CONGRATULATIONS YOU WON PLAYER %c", turn);
        *checkwin = 0;
    }
    if (cell21 == turn && cell22 == turn && cell23 == turn && cell24 == turn & cell25 == turn)
    {
        printf("CONGRATULATIONS YOU WON PLAYER %c", turn);
        *checkwin = 0;
    }
    if (cell01 == turn && cell06 == turn && cell11 == turn && cell16 == turn & cell21 == turn)
    {
        printf("CONGRATULATIONS YOU WON PLAYER %c", turn);
        *checkwin = 0;
    }
    if (cell02 == turn && cell07 == turn && cell12 == turn && cell17 == turn & cell22 == turn)
    {
        printf("CONGRATULATIONS YOU WON PLAYER %c", turn);
        *checkwin = 0;
    }
    if (cell03 == turn && cell08 == turn && cell13 == turn && cell18 == turn & cell23 == turn)
    {
        printf("CONGRATULATIONS YOU WON PLAYER %c", turn);
        *checkwin = 0;
    }
    if (cell04 == turn && cell09 == turn && cell14 == turn && cell19 == turn & cell24 == turn)
    {
        printf("CONGRATULATIONS YOU WON PLAYER %c", turn);
        *checkwin = 0;
    }
    if (cell05 == turn && cell10 == turn && cell15 == turn && cell20 == turn & cell25 == turn)
    {
        printf("CONGRATULATIONS YOU WON PLAYER %c", turn);
        *checkwin = 0;
    }
    if (cell05 == turn && cell09 == turn && cell13 == turn && cell17 == turn & cell21 == turn)
    {
        printf("CONGRATULATIONS YOU WON PLAYER %c", turn);
        *checkwin = 0;
    }
    if (cell01 == turn && cell07 == turn && cell13 == turn && cell19 == turn & cell25 == turn)
    {
        printf("CONGRATULATIONS YOU WON PLAYER %c", turn);
        *checkwin = 0;
    }
}
