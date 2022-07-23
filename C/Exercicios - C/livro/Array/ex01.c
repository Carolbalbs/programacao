#include <stdio.h>
#include <stdlib.h>

int main (){
     
    int n [10] = {32, 27, 64, 18,95,14,90,70,60,37};
    int i;

    //for ( i = 0; i < 10; i++)
    //{
    //    n[i] = 0;
    //}
    printf("%s%13s\n", "Elemento" , "Valor");

    for (int i = 0; i < 10; i++)
    {
        printf("%7d%13d\n", i , n[i]);
    }
    return 0;
    /*
    */
    
    
    
    
    
    
    
    /*
    
    
    int c [12] = { - 45, 6, 0, 72, 1543, -89, 0, 62, -3, 1, 6453, 78};
    int i ;
    int a = 5, b = 6;
    c[a + b] += 2;
    int x = c [5] / 2; 
    printf("%d\n", c[0] + c[1] + c[2]);
    printf("%d\n", x);
     for (  i = 0; i < 12; i++)
     {  
        printf("%i --- %i\n",i, c[i] );
       
     }
     return 0;
     */
}