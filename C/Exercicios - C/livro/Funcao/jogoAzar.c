#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int rollDice(void);
int main (){

 enum Status{CONTINUE, WON , LOST};
 
 int sum;
 int mypoint;
 enum Status gameStatus; 
 srand(time(NULL));

 sum = rollDice();
   
    switch (sum)
    {
    case 11:
    case 7:
         
            gameStatus = WON;
        break;
    
    case 2:
    case 3:
    case 12:
        
            gameStatus = LOST;
            break;
   
    default:
        gameStatus = CONTINUE;
        mypoint = sum;
        printf("Ponto e %d \n", mypoint);
        break;
    }
   while (gameStatus == CONTINUE){
       sum = rollDice();

       if (sum == mypoint)
       {
           gameStatus = WON;
       }else    
       {
           if (sum == 7)
           {
               gameStatus = LOST;
           }   
       }   
   }
   if (gameStatus == WON)
   {
       printf("Jogador vence \n");
   }else{
       printf("Jogador Perde \n");
   }
   
 return 0;
}
int rollDice(void){
    
    int die1; 
    int die2; 
    int workSum;

    die1 = 1 + (rand () % 6);
    die2 = 1 + (rand() % 6);
    workSum = die1 + die2;

    printf("Jogador rolou %d + %d = %d \n", die1, die2, workSum);

 return workSum;
}