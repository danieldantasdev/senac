// Quais instruções devemos usar para acrescentar dinamicamente um span dentro de uma div com id=”divnova” e no span deve ter o texto “Novo texto do span”

// var divNova = document.getElementById('divNova')

// divNova.innerHTML = '<span>Novo texto do span</span>'

// var minhaDiv = document.getElementById('minhaDiv')
// var expor = document.getElementsByClassName('expor')
// var conteudo = document.getElementsByName('conteudo')

// minhaDiv.innerHTML = '<span>Novo texto do span</span>'
// expor.innerHTML = '<span>Novo texto do span</span>'
// conteudo.innerHTML = '<span>Novo texto do span</span>'

// Com base no html abaixo. Escreva um script javascript para pegar a segunda div usando querySelectorAll e colocar dentro da div o texto “Inserido texto” em bold.

var mensagem = document.querySelectorAll('div')[1]
mensagem.innerHTML = '<b>Inserido texto</b>'
