#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void print(char arr[3][3])
{
    //printf("\n");
    printf("-------------\n");
    for(int i=0;i<3;i++)
    {
        printf("|");
        for(int j=0;j<3;j++)
        {
            printf(" %c |",arr[i][j]);
        }
        
        printf("\n");
        printf("-------------\n");
    }

}


int main()
{
    char arr[3][3] = {'1','2','3','4','5','6','7','8','9'};


    char name1[20];
    char name2[20];


    printf("Enter the name of player 1 : ");
    scanf(" %[^\n]",name1);

    printf("Enter the name of player 2 : ");
    scanf(" %[^\n]",name2);
    
    

    int k = 0;
    int n;
    char ch;
    print(arr);

    while(1)
    {
        int index;
        char winner[20];
        
        k++;
        if(k % 2 == 0 )
        {
            n = 2;
            printf("%s ,Enter the position to place 'O':\n",name2);
            strcpy(winner,name2);
            ch = 'O';
        }
        else
        {
            n = 1;
            printf("%s ,Enter the position to place 'X':\n",name1);
            strcpy(winner,name1);
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

        print(arr);


        if(arr[0][0] == ch && arr[0][1] == ch && arr[0][2] == ch)
        {
            printf("\n👏 Well played, %s!\nYou’ve won the game!\n",winner);
            goto restart;;

        }
        else if(arr[1][0] == ch && arr[1][1] == ch && arr[1][2] == ch)
        {
            printf("\n👏 Well played, %s!\nYou’ve won the game!\n",winner);
            goto restart;;
        }
        else if(arr[2][0] == ch && arr[2][1] == ch && arr[2][2] == ch) 
        {
           printf("\n👏 Well played, %s!\nYou’ve won the game!\n",winner);
           goto restart;;
        }
        else if(arr[0][0] == ch && arr[1][0] == ch && arr[2][0] == ch) 
        {
            printf("\n👏 Well played, %s!\nYou’ve won the game!\n",winner);
            goto restart;;
        }
        else if(arr[0][1] == ch && arr[1][1] == ch && arr[2][1] == ch) 
        {
            printf("\n👏 Well played, %s!\nYou’ve won the game!\n",winner);
            goto restart;;
        }
        else if(arr[0][2] == ch && arr[1][2] == ch && arr[2][2] == ch) 
        {
            printf("\n👏 Well played, %s!\nYou’ve won the game!\n",winner);
            goto restart;;
        }
        else if(arr[0][0] == ch && arr[1][1] == ch && arr[2][2] == ch) 
        {
            printf("\n👏 Well played, %s!\nYou’ve won the game!\n",winner);
            goto restart;;
        }
        else if(arr[0][2] == ch && arr[1][1] == ch && arr[2][0] == ch) 
        {
            printf("\n👏 Well played, %s!\nYou’ve won the game!\n",winner);
            goto restart;
        }
        if(k == 9)
        {
            printf("The game has been drawn\n");
            

            restart:  
            char ch;
            printf("\nRestart the game?(y/n)");
            scanf(" %c",&ch);

            if(ch == 'y')
            {
               //restart the game:
                 main();

            }
            else
            {
                break;
            }
        }

        
        

    }

    
}