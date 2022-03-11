var idade = 18
console.log(idade)

//Funções do Browser
// alert('Daniel')
// prompt('Daniel')

var var1 = 1
var2 = 2
var3 = 3

let Soma = () => {
    console.log(var1 + var2)
}

Soma()

const NUM = 200

if (typeof NUM === 'number') {
    console.log(typeof NUM)
}

const STRING = '200'
console.log(typeof STRING)

// const TIPO
// console.log(typeof TIPO)

var STR = 'JavaScript'
console.log(STR.toLocaleUpperCase())

var TAMANHO = 'JavaScript e Python'
console.log(TAMANHO.length)
console.log(TAMANHO.charAt(7))
console.log(TAMANHO.indexOf('Python'))
console.log(TAMANHO.replace('JavaScript', 'Java'))
console.log(TAMANHO.substring(0, 12))

// Descobrir qual é a posição do Python e vamos colocar outra coisa
console.log(TAMANHO.substring(13, 19) + ' e Java')
console.log(TAMANHO.substring(13, 19) + ' e ' + TAMANHO.substring(0, 4))
console.log(TAMANHO.substring(13, 19) + ' e ' + TAMANHO.indexOf('Java'))
