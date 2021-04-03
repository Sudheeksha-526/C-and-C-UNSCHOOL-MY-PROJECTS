#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int Rock=1;
    int Paper=2;
    int Scissor=3;
    int i;
    int Pscore =0;
    int Cscore =0;
    int Choice;
    srand(time(NULL));
    printf("Rock=1 , Paper= 2, and Scissors= 3\n");

    for(i=0;i<5;i++){
        printf("Enter your choice:");
        scanf("%d",&Choice);
            int Computer=rand()%3+1;
            printf("computer choice %d\n",Computer);
            if(Choice==1){
                if(Computer==1){
                    printf("Draw\n");
                }
                if(Computer==2){
                    printf("Computer Wins!\n");
                    Cscore= Cscore + 1;
                }
                if(Computer==3){
                    printf("Player Wins\n");
                    Pscore = Pscore + 1;
                }
            }
              else  if(Choice==2){
                    if(Computer==2){
                        printf("Draw\n");
                    }
                    if(Computer==3){
                        printf("Computer Wins!\n");
                        Cscore = Cscore + 1;
                    }
                    if(Computer==1){
                        printf("Player Wins!\n");
                        Pscore= Pscore + 1;
                    }
                }
                else if(Choice==3){
                    if(Computer==3){
                        printf("Draw\n");
                    }
                    if(Computer==2){
                        printf("Player Wins!\n");
                        Pscore= Pscore + 1;
                    }
                    if(Computer==1){
                        printf("Computer Wins!\n");
                        Cscore = Cscore + 1;

                    }

                }
        else{
            printf("Wrong Option\n");
        }

            }
            if(Cscore > Pscore ){
                printf("Computer wins with %d \n",Cscore);
            }
            else if(Cscore < Pscore ){
                printf("Player wins with %d\n",Pscore);
            }
           else if(Cscore == Pscore)
            {
                printf("No winner,it is a draw!\n");
            }


    return 0;
}


