#include<stdio.h>
#include<stdio.h>

/*

*/
int n_esimo (void);
int main(){
 int i, j;
 int numero ;
 numero = n_esimo(); 

    
for ( i = 1; i <= numero; i++)
{
    for ( j = 1; j <= i; j++)
     printf("%d ", j); 
     printf("\n" );
}

 return 0;
}

int n_esimo (void){
    int n;
    printf("Digite um numero inteiro : ");
    scanf("%d", &n);

return n;
}