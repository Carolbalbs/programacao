#include <stdio.h>
#include <stdlib.h>
/*

*/
int fatorial (long number);
int main() {
    int i;

    for ( i = 0; i <= 10; i++)
    {
        printf("%2d! = %1d\n", i , fatorial(i) );
    }
    
return 0;
}
int fatorial (long number){

    if (number <= 1)
    {
        return 1;
    }else
    {
        return (number * fatorial(number - 1));
    }
    
    
}