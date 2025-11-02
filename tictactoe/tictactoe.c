#include <stdio.h>
#include "header.h"

void main_menu()
{
    printf(YELLOW"\n=============================\n"RESET);
    printf(GREEN"         Tic Tac Toe \n"RESET);
    printf(YELLOW"=============================\n"RESET);
    printf("1️⃣  Play Game\n");
    printf("2️⃣  Instructions\n");
    printf("3️⃣  Exit\n");
    printf(YELLOW"=============================\n"RESET);
    printf("Enter your choice: ");
}




void print_instructions()
{
    printf("\n");
    printf(BLUE "==============================\n" RESET);
    printf(GREEN "          INSTRUCTIONS\n" RESET);
    printf(BLUE "==============================\n\n" RESET);

    printf("- Tic Tac Toe is a 2-player game.\n");
    printf("- The board has 9 positions as shown below:\n\n");

    printf(YELLOW "-------------\n");
    printf("| 1 | 2 | 3 |\n");
    printf("-------------\n");
    printf("| 4 | 5 | 6 |\n");
    printf("-------------\n");
    printf("| 7 | 8 | 9 |\n");
    printf("-------------\n\n" RESET);

    printf("- Player 1 uses 'X'\n");
    printf("- Player 2 uses 'O'\n\n");

    printf("- Players take turns choosing a position number (1–9)\n");
    printf("  to place their symbol (X or O) on the board.\n\n");

    printf("- The first player to get three of their symbols in a row\n");
    printf("  (horizontally, vertically, or diagonally) wins the game!\n\n");

    printf("- If all positions are filled and no one wins,\n");
    printf("  the game ends in a DRAW.\n\n");

    printf(GREEN "Example Winning Combinations:\n" RESET);
    printf("  → Rows: (1,2,3), (4,5,6), (7,8,9)\n");
    printf("  → Columns: (1,4,7), (2,5,8), (3,6,9)\n");
    printf("  → Diagonals: (1,5,9), (3,5,7)\n\n");

    printf(BLUE "==============================\n" RESET);
    printf("Press ENTER to return to the main menu...");
    getchar(); 
    getchar(); 
    
}


void display_board(char arr[3][3])
{

    printf("-------------\n");
    for(int i=0;i<3;i++)
    {
        printf("|");
        for(int j=0;j<3;j++)
        {
            if(arr[i][j] == 'X')
            {
                printf(RED" %c "RESET"|",arr[i][j]);
            }
            else if (arr[i][j] == 'O')
            {
                printf(BLUE" %c "RESET"|",arr[i][j]);
            }
            else
            {
                printf(" %c |",arr[i][j]);
            }
            
            
        }
        
        printf("\n");
        printf("-------------\n");
    }
}

void play_game()
{
    char arr[3][3] = {'1','2','3','4','5','6','7','8','9'};

    char name1[20];
    char name2[20];

    printf("Starting the game....\n");


    printf("\nEnter the name of player 1 : ");
    scanf(" %[^\n]",name1);

    printf("Enter the name of player 2 : ");
    scanf(" %[^\n]",name2);
    
    

    int k = 0;
    int n;
    char ch;
    char* cur_player;
    int index;
    display_board(arr);

    while(1)
    {
       
        k++;
        if(k % 2 == 0 )
        {
            n = 2;
            printf("%s ,Enter the position to place"BLUE" 'O'"RESET":\n",name2);
            cur_player=name2;
            ch = 'O';
        }
        else
        {
            n = 1;
            printf("%s ,Enter the position to place"RED" 'X'"RESET":\n",name1);
            cur_player = name1;
            ch = 'X';
        }
        scanf("%d",&index);

        switch(index)
        {
            case 1: if(arr[0][0] == 'X' || arr[0][0] == 'O')
                    {
                        printf("Already occupied\nTry again\n");
                        k--;
                    }
                    else
                    {
                        arr[0][0] = ch ;
                        
                    } 
                    break;
            case 2: if(arr[0][1] == 'X' || arr[0][1] == 'O')
                    {
                        printf("Already occupied\nTry again\n");
                        k--;
                        
                    }
                    else
                    {
                        arr[0][1] = ch ;
                    } 
                    break;
            case 3: if(arr[0][2] == 'X' || arr[0][2] == 'O')
                    {
                        printf("Already occupied\nTry again\n");
                        k--;
                        
                    }
                    else
                    {
                        arr[0][2] = ch ;
                    } 
                    break;
            case 4: if(arr[1][0] == 'X' || arr[1][0] == 'O')
                    {
                        printf("Already occupied\nTry again\n");
                        k--;
                        
                    }
                    else
                    {
                        arr[1][0] = ch ;
                       
                    } 
                    break;
            case 5: if(arr[1][1] == 'X' || arr[1][1] == 'O')
                    {
                         printf("Already occupied\nTry again\n");
                        k--;
                        
                    }
                    else
                    {
                        arr[1][1] = ch ;
                    } 
                    break;
            case 6: if(arr[1][2] == 'X' || arr[1][2] == 'O')
                    {
                        printf("Already occupied\nTry again\n");
                        k--;
                    }
                    else
                    {
                        arr[1][2] = ch ;
                        
                    } 
                    break;
            case 7: if(arr[2][0] == 'X' || arr[2][0] == 'O')
                    {
                        printf("Already occupied\nTry again\n");
                        k--;
                        
                    }
                    else
                    {
                        arr[2][0] = ch ;
                    } 
                    break;
            case 8: if(arr[2][1] == 'X' || arr[2][1] == 'O')
                    {
                        printf("Already occupied\nTry again\n");
                        k--;
                    }
                    else
                    {
                        arr[2][1] = ch ;
                        
                    } 
                    break;
            case 9: if(arr[2][2] == 'X' || arr[2][2] == 'O')
                    {
                        printf("Already occupied \nTry again!\n");
                        k--;
                        
                    }
                    else
                    {
                        arr[2][2] = ch ;
                    } 
                    break;

            default :printf("Enter a valid number(0-9)!!");
                    k--;
        }

        display_board(arr);


        if(arr[0][0] == ch && arr[0][1] == ch && arr[0][2] == ch)
        {
            printf("\n👏 Well played, %s!\nYou’ve won the game!\n",cur_player);
            goto restart;

        }
        else if(arr[1][0] == ch && arr[1][1] == ch && arr[1][2] == ch)
        {
            printf("\n👏 Well played, %s!\nYou’ve won the game!\n",cur_player);
            goto restart;
        }
        else if(arr[2][0] == ch && arr[2][1] == ch && arr[2][2] == ch) 
        {
           printf("\n👏 Well played, %s!\nYou’ve won the game!\n",cur_player);
           goto restart;
        }
        else if(arr[0][0] == ch && arr[1][0] == ch && arr[2][0] == ch) 
        {
            printf("\n👏 Well played, %s!\nYou’ve won the game!\n",cur_player);
            goto restart;
        }
        else if(arr[0][1] == ch && arr[1][1] == ch && arr[2][1] == ch) 
        {
            printf("\n👏 Well played, %s!\nYou’ve won the game!\n",cur_player);
            goto restart;
        }
        else if(arr[0][2] == ch && arr[1][2] == ch && arr[2][2] == ch) 
        {
            printf("\n👏 Well played, %s!\nYou’ve won the game!\n",cur_player);
            goto restart;
        }
        else if(arr[0][0] == ch && arr[1][1] == ch && arr[2][2] == ch) 
        {
            printf("\n👏 Well played, %s!\nYou’ve won the game!\n",cur_player);
            goto restart;
        }
        else if(arr[0][2] == ch && arr[1][1] == ch && arr[2][0] == ch) 
        {
            printf("\n👏 Well played, %s!\nYou’ve won the game!\n",cur_player);
            goto restart;
        }
        if(k == 9)
        {
            printf("The game has been drawn\n");
            

            restart:  
            int option;
            restart_menu();
            scanf("%d",&option);

            if(option == 1)
            {
               //restart the game:
                play_game(arr);

            }
            else
            {
                return;
            }
        }

        
        

    }
}

void restart_menu()
{
    printf(YELLOW"\n====================\n"RESET);
    printf(GREEN"     Match Ended     \n"RESET);
    printf(YELLOW"====================\n"RESET);
    printf("1. Play Again\n");
    printf("2. Go to main menu\n");
    printf("Enter your choice: ");
}