
function carregar() {
    let msg = window.document.getElementById('mensagem')
    let imge2 = window.document.getElementById('imge')
    let data = new Date()
    let hora = data.getHours()
    //let hora = 6
    let horadia = ''
    msg.innerHTML= `Agora são ${hora} horas `
    

    if (hora >= 5 && hora <= 12) {
        imge2.src = 'manhã.png'
        msg.innerHTML += 'Bom Dia!'
        document.body.style.background = '#9FE2DA'
    } else if (hora >= 13 && hora <= 18) {
        imge2.src = 'tarde.png'
        msg.innerHTML += 'Boa Tarde!'
        document.body.style.background = '#F46F3B'
    }else{
        imge2.src = 'noite.png'
       msg.innerHTML += 'Boa Noite!'
        document.body.style.background = '#251B3A'
    }  

}



