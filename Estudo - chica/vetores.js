let nomes = []
function registro_maior_idade() {
  let nome = document.getElementsByName("nome")
  let idade = Number(document.getElementsByName("idade").value)
  Console.log("idade="+idade)
   if (idade < 18) {
       window.alert("Só é permitido maiores ou iguas a 18")
   } else {
        nomes.append(nome)
   }
  
}

