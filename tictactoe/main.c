#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "header.h"



int main()
{
    

    while(1)
    {

        //print main menu
        main_menu();

        int choice;
        scanf("%d",&choice);

        if(choice == 3)
        {
            printf("\nThank you for playing Tic Tac Toe!\n");
            printf("See you soon!\n");
            break;
        }

        switch(choice)
        {
            case 1: play_game();
                    break;

            case 2: print_instructions();
                    break;
                    
            default : printf("Invalid input\nTry again!\n");
                    break;        
        }

    }

    
}