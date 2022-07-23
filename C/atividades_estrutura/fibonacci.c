#include <stdio.h>

 int fibonacci( int n ); 

int main( void )
 {
 
 int number;
 int i;
 printf( "Quantos elementos da sequencia deseja ver?" );
 scanf( "%i", &number );

    
 for ( i = 1; i <= number; i++)
 {
      printf( "%i\n", fibonacci(i) );
 // Calcula e exibe o número da sequência na posição atual
 } 
    
 }
 // Funcao que calcula e retorna a sequencia fibonacci para a funcao main
 int fibonacci( int n )
 {
 
 if ( n == 1 ) {

    return 0;
 } else if( n == 2)
 {
    return 1;
 }else { 

 return fibonacci( n - 1 ) + fibonacci( n - 2 );
 } 
 } 