var n = 3
n = n + 4
//ou
n += 4

var x = 10
x++

console.log(n)
console.log(x)

var a = 8
var b = 15

console.log(a > b)
console.log(a < b)
console.log(a == b)
console.log(a === b)

var c = 5
var d = '5'

console.log(typeof c)
console.log(typeof d)
console.log(c == d)
console.log(c === d)

var e = 5
f = 8

console.log(e > f && f % 2 == 0)
console.log(e <= f || f / 2 == 0)
console.log(!(e > f || 5 <= b))

//ternário
// condição ? valorTrue : valorFalso

console.log(f % 2 == 0 ? 'Par' : 'Ímpar')
