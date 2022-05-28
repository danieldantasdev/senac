var array = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
console.log(array)
console.log(typeof array)
console.log(array.length)

var array = new Array(1, 2, 3, 4, 5);
console.log(array)
console.log(typeof array)
console.log(array.length)

//define o tamano do array
var array = Array(2)
console.log(array)

var emptyArray = new Array()
console.log(emptyArray)

emptyArray[0] = 'João'
emptyArray[1] = 'Maria'
emptyArray[2] = 'Pedro'
emptyArray[3] = 'Joana'

console.log(emptyArray)
console.log(emptyArray.length)
console.log(emptyArray[0])
console.log(emptyArray[1])
console.log(emptyArray[2])
console.log(emptyArray[3])
console.log(emptyArray[4])

for (let i = 0; i < emptyArray.length; i++) {
    console.log(emptyArray[i])
}

for (let i in emptyArray) {
    console.log(emptyArray[i])
}

for (let i of emptyArray) {
    console.log(emptyArray[i])
}


var array = ['João', 'Maria', 'Pedro', 'Joana']
console.log(array.length)
console.log(array[0])
console.log(array[1])
console.log(array[2])
console.log(array[3])
console.log(array[4])

console.log(array.push('José'))

console.log(array.pop())
console.log(array.shift())
console.log(array.unshift())