function verificar() {
    let data = new Date()
    let ano1 = data.getFullYear()
    let ano2 = document.getElementById('ano')
    let res = document.getElementById('res')

    if (ano2.value.length == 0 || Number(ano2.value) > ano1) {
        alert('[ERROR] Verifique os dados e tente novamente!')
    }else{
        let fsex = document.getElementsByTagName('sexo')
        let idade = ano1 - Number(ano2.value)
        let genero = ''

        
        res.style.textAlign = 'center'
        res.innerHTML = (`Idade Calculada com sucesso. Detectamos um(a) ${genero} com ${idade} anos`)
        
    }
}
