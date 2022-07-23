/*
 * CS:APP Data Lab
 *
 * <Coloque aqui seu nome e seu email>
 *
 * bits.c - Código fonte com as soluções para o laboratório.
 *          Este é o arquivo que você vai entregar ao Professor.
 *
 * ATENÇÃO: Não inclua o cabeçalho <stdio.h>, isso confunde o compilador dlc.
 * Você ainda pode usar printf para fins de debugagem sem incluir o <stdio.h>,
 * no entanto isso pode gerar um alerta do compilador.
 * No geral, não é uma boa prática ignorar esses alertas, mas nesse caso está OK
 */

#ifndef COMMON_H
#include "common.h"
#endif

#if 0
/*
 * Instruções aos alunos:
 *
 * PASSO 1: Leias as seguintes instruções cuidadosamente.
 */

Você vai fornecer as soluções para o exercício
editando a coleção de funções nesse código fonte.

REGRAS DE PROGRAMAÇÃO COM INTEIROS:

  Mude o conteúdo no "return" de cada função com uma
  ou mais linhas de código em C que implemente a função.
  Seu código deve estar em conformidade com o seguinte estilo:

  int Funct(arg1, arg2, ...) {
      /* breve explicação de como sua implementação funciona*/
      int var1 = Expr1;
      ...
      int varM = ExprM;

      varJ = ExprJ;
      ...
      varN = ExprN;
      return ExprR;
  }

  Cada "Expr" é uma expressão usando APENAS o seguinte:
  1. Constantes inteiras 0 até 255 (0xFF), inclusivo.
     Não é permitido usar constantes grandes como 0xffffffff.
     No entanto, você pode combinar constantes para obter valores maiores
     que 255 ou menores que 0, por exemplo, 250 + 250 = 500, contanto que
     o operador usado nessa operação esteja listado como
     "legal" no topo de cada método analisado.
  2. Argumentos das funções e variáveis locais (não pode usar variáveis globais).
  3. Qualquer operador listado como "legal" no topo de cada método.
  4. Versões simplificadas dos operadores "legais" (ex. você pode usar ++ e += SE + for "legal").

  Alguns dos problemas restrigem ainda mais o uso dos operadores.
  Cada "Expr" pode ser feita com múltiplos operadores,
  um operador por linha.

  Você está expressamente PROIBIDO de:
  1. Usar qualquer dispositivo de controle como if, do, while, for, switch, etc.
  2. Definir ou usar macros.
  3. Definir alguma função adicional nesse arquivo.
  4. Fazer chamadas de funções.
  5. Usar outros tipos de operações, como &&, ||, -, ou ?
  6. Usar qualquer forma de casting.
  7. Usar qualquer outro tipo de dado além do int. Isto implica que você 
     não pode usar arrays, structs ou unions.


  Você pode assumir que sua máquina:
  1. Usa complemento de 2, representação 32-bit de inteiros.  
  2. Faz shifts para a direita de forma aritmética.
  3. Tem comportamento imprevisível quando fizer um shift
     menor que 0 ou maior que 31.


EXEMPLOS DE ESTILOS DE PROGRAMAÇÃO ACEITÁVEIS:
  /*
   * pow2plus1 - retorna 2^x + 1, onde 0 <= x <= 31
   */
  int pow2plus1(int x) {
     /* explora as habilidades do shift para computar potências de 2 */
     return (1 << x) + 1;
  }

  /*
   * pow2plus4 - retorna 2^x + 4, onde 0 <= x <= 31
   */
  int pow2plus4(int x) {
     /* explora as habilidades do shift para computar potências de 2 */
     int result = (1 << x);
     result += 4;
     return result;
  }


NOTAS:
  1. Use o compilador (descrito no trabalho) dlc (data lab checker) para
     checar a legalidade de suas soluções.
  2. Cada função tem um número máximo de operadores (inteiro, lógico ou comparação)
     que você pode usar para implementar sua solução.
     O número máximo de operadores permitido é checado pelo dlc.
     Percepa que o igual ("=") não é checado na contagem de operadores,
     você pode usar quantos quiser.
  3. Use o teste btest para checar se suas funções estão retornando o valor correto. 
  4. O número máximo de operadores (ops) para cada função é dado no 
     cabeçalho de cada função. Se houver alguma inconsistência
     no número máximo de ops entre o que está escrito e este arquivo, considere
     este aquivo sua fonte principal.
  5. Escreva comentários para suas funções! Eles não influenciarão sua nota, mas é uma boa
     prática escrever comentários e isso pode ajudar a debugar seu código.
     Veja o exemplo acima para ver como devem ser os comentários.

/*
 * PASSO 2: Modifique as seguintes funções de acordo com as regras de programação.
 *
 *   IMPORTANTE. PARA EVITAR SURPRESAS NA NOTA:
 *   1. Use o compilador dlc para checar se sua solução está em conformidade
 *      com as regras de programação.
 */
#endif

/* 
 * bitXor - x^y usando apenas ~ e & 
 *   Exemplo: bitXor(4, 5) = 1
 *   ops legais: ~ &
 *   Max ops: 14
 *   Pontuação: 1
 */
int bitXor(int x, int y) {
  return 2;
}

/* 
 * allEvenBits - retorna 1 se todos os bits  pares  da palavra forem 1,
 *   onde os bits são numerados de 0 (menos significativo) até 31 (mais significativo)
 *   Exemplos allEvenBits(0xFFFFFFFE) = 0, allEvenBits(0x55555555) = 1
 *   ops legais: ! ~ & ^ | + << >>
 *   Max ops: 12
 *   Pontuação: 2
 */
int allEvenBits(int x) {
  return ;
}

/* 
 * logicalShift - faz o shift de x para a direita n vezes, usando um shift lógico.
 *   Pode assumir que 0 <= n <= 31
 *   Exemplos: logicalShift(0x87654321,4) = 0x08765432
 *   ops legais: ! ~ & ^ | + << >>
 *   Max ops: 20
 *   Pontuação: 3 
 */
int logicalShift(int x, int n) {
    return 2;
}

/* 
 * logicalNeg - implementa o operador !, usando todos os outros 
 *              operadores legais com exceção do !
 *   Exemplos: logicalNeg(3) = 0, logicalNeg(0) = 1
 *   ops legais: ~ & ^ | + << >>
 *   Max ops: 12
 *   Pontuação: 4 
 */
int logicalNeg(int x) {
  return 2;
}

/* 
 * TMax - retorna o maior inteiro num sistema com complemento de 2 
 *   ops legais: ! ~ & ^ | + << >>
 *   Max ops: 4
 *   Pontuação: 1
 */
int tmax(void) {
  return 2;
}

/* 
 * twosBits - retorna 1 se x puder ser representado por um
 *  inteiro n-bit com complemento de 2.
 *   1 <= n <= 32
 *   Exemplos: twosBits(5,3) = 0, twosBits(-4,3) = 1
 *   ops legais: ! ~ & ^ | + << >>
 *   Max ops: 15
 *   Pontuação: 2
 */
int twosBits(int x, int n) {
  return 2;
}


