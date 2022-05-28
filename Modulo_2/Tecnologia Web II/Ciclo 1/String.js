var nome = 'Daniel'
var x = nome.length

console.log(nome)
console.log(x)

resultado =
    x < 20
        ? 'Por favor, preencha o seu nome completo'
        : 'Obrigado, preenchido certinho'

console.log(resultado)
console.log(resultado.toLowerCase())
console.log(resultado.toUpperCase())

//IndexOff
var frase = 'Hoje tive aula de JS'
var posicao = frase.indexOf('tive', 2)
console.log(posicao)

//Search
var frase2 = 'Hoje tive aula de JS'
var posicao2 = frase2.search('tive')
console.log(posicao2)

//Slice
var jogo = 'Barcelona vs Real Madrid'
var posicao3 = jogo.indexOf('Real')
var rs = jogo.slice(0, posicao3)
console.log(rs)

//Replace
var time = 'Flamengo e Vasco'
var mudandoTime = time.replace('Vasco', 'Fluminense')
console.log(mudandoTime)
