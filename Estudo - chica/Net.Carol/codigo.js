filmes = []
//Regitrar o filme
function inserir_filme() {
    
    //Nome do filme
    let tituloFilme = document.getElementById ("titulo_filme")
    let nome_filme = tituloFilme.value
    
    //Ano
    let ano_estreia = document.getElementById("ano")
    let valor_ano = Number(ano_estreia.value)
    
    //Personagens
    let personagem1 = document.getElementById("protagonista1")
    let persona1 = personagem1.value

    let personagem2 = document.getElementById("protagonista2")
    let persona2 = personagem2.value
    
    //Genero 
    let radioGenero = document.getElementsByName("genero")
    let txt_genero = ''
    for(let i = 0; i < radioGenero.length; i++){
        if(radioGenero[i].checked){
            txt_genero = radioGenero[i].value
        }
    }
    //Duracao
    let radioDuracao = document.getElementsByName("duracao")
    let txt_duracao = ''
    for(let i = 0; i < radioDuracao.length; i++){
        if(radioDuracao[i].checked){
            txt_duracao = radioDuracao[i].value
        }
    }
    //Classificaçoes
    let radioClassificacoes = document.getElementsByName("clasificacao")
    let txt_classificacoes = ''
    for(let i = 0; i < radioClassificacoes.length; i++){
        if(radioClassificacoes[i].checked){
            txt_classificacoes = radioClassificacoes[i].value
        }
    }
    // Avaliacoes
    let radioAvaliacoes = document.getElementsByName("avaliacao")
    let txt_avaliacoes = ''
    for(let i = 0; i < radioAvaliacoes.length; i++){
        if(radioAvaliacoes[i].checked){
            txt_avaliacoes = radioAvaliacoes[i].value
        }
    }

    let filme = {}
    filme["titulo"] = nome_filme
    filme["genero"] = txt_genero
    filme["duracao"] = txt_duracao
    filme["classificacao"] =txt_classificacoes
    filme["ano"] = valor_ano
    filme["protagonista1"] = persona1
    filme["protagonista2"] = persona2
    filme["avaliacao"] = txt_avaliacoes

    filmes.push(filme)
    tituloFilme.value = ''
    ano_estreia.value = ''
    personagem1.value = ''
    personagem2.value = ''
    radioGenero.value = ''
    radioDuracao.value= ''
    radioClassificacoes.value = ''
    radioAvaliacoes.value = ''

   alert('Filme CADASTRADO!!!')
}
//Exibir filmes registrados
function exibir_filme() {
    let mensagem = `<h1> Seus filmes cadastrados</h1>`
    for (let i = 0; i < filmes.length; i++) {
        const filme = filmes[i];
        mensagem += `Titulo: ${ filme["titulo"]} 
         Gênero: ${filme["genero"]} 
         Duração: ${filme["duracao"]}
         Classificação ind.: ${filme["classificacao"]}
         Ano: ${filme["ano"]}
         Protagonista 1: ${filme["protagonista1"]} 
         Protagonista 2: ${filme["protagonista2"]}
         Avalições: ${filme["avaliacao"]} `  
        }
}
/*Cadastro do filme : 1- titulo 
2- genero(checkbox)  
3- duração
 4- classificação ind. 
 5- ano 
 6- princ. estrelas 
7- avalições*/