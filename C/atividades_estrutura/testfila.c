/* Fig. 12.13: fig12_13.c
 Operando e mantendo uma fila */
 #include <stdio.h>
 #include <stdlib.h>

 /* estrutura autorreferenciada */
 struct queueNode {
 char data; /* define dados como char */
 struct queueNode *nextPtr; /* queueNode pointer */
 }; /* fim da estrutura queueNode */

 typedef struct queueNode QueueNode;
 typedef QueueNode *QueueNodePtr;
 /* protótipos de função */
 void printQueue( QueueNodePtr currentPtr );
 int isEmpty( QueueNodePtr headPtr );
 char dequeue( QueueNodePtr *headPtr, QueueNodePtr *tailPtr );
 void enqueue( QueueNodePtr *headPtr, QueueNodePtr *tailPtr,
 char value );
 void instructions( void );

 /* função main inicia execução do programa */
 int main( void )
 {
 QueueNodePtr headPtr = NULL; /* inicializa headPtr */
 QueueNodePtr tailPtr = NULL; /* inicializa tailPtr */
 int choice; /* escolha de menu do usuário */
 char item; /* entrada char pelo usuário */

    instructions(); /* exibe o menu */
    printf( "? " );
    scanf( "%d", &choice );

 /* enquanto usuário não digita 3 */
 while ( choice != 3 ) {

 switch( choice ) {
 /* enfileira valor */
 case 1:
 printf( "Digite um caractere: " );
 scanf( "\n%c", &item );
 enqueue( &headPtr, &tailPtr, item );
 printQueue( headPtr );
 break;
 /* desenfileira valor */
 case 2:
 /* se fila não estiver vazia */
 if ( !isEmpty( headPtr ) ) {
 item = dequeue( &headPtr, &tailPtr );
 printf( "%c saiu da fila.\n", item );
 } /* fim do if */

 printQueue( headPtr );
 break;
 default:
 printf( "Escolha inválida.\n\n" );
 instructions();
 break;
 } /* fim do switch */

 printf( "? " );
 scanf( "%d", &choice );
 } /* fim do while */

 printf( "Fim da execução.\n" );
 return 0; /* indica conclusão bem-sucedida */
 } /* fim do main */

 /* exibe instruções do programa ao usuário */
 void instructions( void )
 {
 printf ( "Digite sua escolha:\n"
 " 1 para incluir um item na fila\n"
 " 2 para remover um item da fila\n"
 " 3 para encerrar\n" );
 } /* fim da função instructions */

 /* insere um nó na cauda da fila */
 void enqueue( QueueNodePtr *headPtr, QueueNodePtr *tailPtr,
 char value )
 {
 QueueNodePtr newPtr; /* ponteiro para novo nó */

 newPtr = malloc( sizeof( QueueNode ) );

 if ( newPtr != NULL ) { /* se houver espaço disponível */
 newPtr->data = value;
 newPtr->nextPtr = NULL;

 /* se vazia, insere nó na cabeça */
 if ( isEmpty( *headPtr ) ) {
 *headPtr = newPtr;
 } /* fim do if */
 else {   
 ( *tailPtr )->nextPtr = newPtr;
 } /* fim do else */

 *tailPtr = newPtr;
 } /* fim do if */
 else {
 printf( "%c não inserido. Não há memória disponível.\n", value );
 } /* fim do else */
 } /* fim da função enqueue */

 /* remove nó da cabeça da fila */
 char dequeue( QueueNodePtr *headPtr, QueueNodePtr *tailPtr )
 {
 char value; /* valor do nó */
 QueueNodePtr tempPtr; /* ponteiro de nó temporário */

 value = ( *headPtr )->data;
 tempPtr = *headPtr;
 *headPtr = ( *headPtr )->nextPtr;

 /* se a fila estiver vazia */
 if ( *headPtr == NULL ) {
 *tailPtr = NULL;
 } /* fim do if */

 free( tempPtr );
 return value;
 } /* fim da função dequeue */

 /* Retorna 1 se a lista estiver vazia; caso contrário, retorna 0 */
int isEmpty( QueueNodePtr headPtr )
 {
 return headPtr == NULL;
 } /* fim da função isEmpty */

 /* Imprime a fila */
 void printQueue( QueueNodePtr currentPtr )
 {
 /* se a fila estiver vazia */
 if ( currentPtr == NULL ) {
 printf( "A fila está vazia.\n\n" );
 } /* fim do if */
 else {
 printf( "A fila é:\n" );

 /* enquanto não for fim da fila */
 while ( currentPtr != NULL ) {
 printf( "%c --> ", currentPtr->data );
 currentPtr = currentPtr->nextPtr;
 } /* fim do while */

 printf( "NULL\n\n" );
 } /* fim do else */
 } /* fim da função printQueue */