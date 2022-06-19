var a = 10
console.log(a)
console.log(typeof a)

a = 'Google'
console.log(a)
console.log(typeof a)

x = 8.5
console.log(x)
console.log(typeof x)

var string = 'Google'
console.log(string.length)
console.log(string.split('o'))
console.log(string.slice(0, 3))
console.log(string.indexOf('G'))
console.log(string.replace('G', 'M'))
console.log(string.toUpperCase())
console.log(string.toLowerCase())
console.log(string.charAt(0))
console.log(string.charCodeAt(0))
console.log(string.includes('g'))
console.log(string.startsWith('G'))
console.log(string.endsWith('o'))
console.log(string.repeat(2))
console.log(string.trim())
console.log(string.trimLeft())
console.log(string.trimRight())
console.log(string.padStart(10, '-'))
console.log(string.padEnd(10, '-'))

console.log(string.substring(0, 3))
console.log(string.substring(3, 6))

var nomeCompleto = 'João da Silva'
var nome = nomeCompleto.substring(0, nomeCompleto.indexOf(' '))
var sobrenome = nomeCompleto.substring(nomeCompleto.indexOf(' ') + 1)
console.log(nome)
console.log(sobrenome)

var nomeCompleto = 'João da Silva'
var nome = nomeCompleto.charAt(0) + nomeCompleto.charAt(nomeCompleto.indexOf(' ') + 1)
console.log(nome)

var nome = 'João'
var idade = 20
var frase = `Olá, meu nome é ${nome} e tenho ${idade} anos.`
console.log(frase)
