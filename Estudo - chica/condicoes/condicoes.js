/*

    condição : é uma comparação utilizando um operador relacional.
    resulta em: Verdadeiro ou Falso (true or false): bolean

*/

    let idade = parseInt(prompt("Digite sua idade: "))
    let maiorIdade =  18 
    if(idade >= 18 && idade < 70 ){
        alert("Voto obrigatorio" + idade)

    }
    else if  ( idade < maiorIdade && idade >= 16){
        alert("Voto facultativo")

    }
    else if  (idade >= 70){
        alert("Voto facultativo")

    }
    else{
        alert("Seu voto nao e valido por conta da idade " )

    }

    /*
        escrever na mão condições
        nao permitido votar: > 16
        voto facultativo juvenil: >= 16 e < 18
        voto obrigatorio: >= 18 e < 70
        voto facultativo idoso >= 70
    */
   /*
   Toda condiçao tem uma consequencia e toda condicao resulta em um valor logico
   eu so posso ir para festa (consequencia)
   se eu tiver dinheiro e minha mae deixar(condicao)

   operador aritmetico (opera cálculos matematicos)
   operador relacional (opera o relacionamento entre grandezas(operadores relacionais tambem sao usados para definir consequencias de condicoes))
   operador logico (opera sobre condicoes que resultam consequencias de acordo com cada situacao)
   
   operadores logicos {
     and(&&)
     or(||)
     not(!)

    e => so resulta em verdadeiro se todas as condiçoes forem verdadeiras
    ou => resulta em verdadeiro se pelo menos um for verdade
    não = inverte o resultado ou a consequencia esperada
   }
    Toda condicao tem uma consequencia que resulta em uma determinada acao a ser executada caso a condicao seja (verdadeira ou falsa(valor logico))
   
   */