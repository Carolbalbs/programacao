programa {
	funcao inicio() {
		inteiro numero[10]
		inteiro i = 0 , opcao
            
            enquanto (i < 10){
                escreva("\n>>>>>MENU<<<<<\n"
                          "Digite o numero para realizar o que deseja\n"
                          "1. INCLUIR CLIENTE NA FILA \n"
                          "2. ATENDER UM CLIENTE DA FILA\n"
                          "3. FINALIZAR PROGRAMA\n\n")
                leia(opcao)
                
            se(escolha==1){
      
          printf("\nDigite a senha  \n\n");
        scanf("%i",&numero);
        enqueue(numero);
        display();
        }
      senao se(opcao==2)
      dequeue();
      senao se(opcao==3)
      pare;
    }
            }
	
}
funcao cheia(){
}
funcao vazia(){
    
}
funcao enqueue(){
    
}
funcao dequeue(){
    
}
funcao display(){
    
}
}