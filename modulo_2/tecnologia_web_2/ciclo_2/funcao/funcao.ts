function fatorial(n) {
    if (n == 0) {
        return 1
    }
    return n * fatorial(n - 1)
}
console.log(fatorial(5))

function expoente(base, expoente) {
    if (expoente == 0) {
        return 1
    }
    return base * expoente(base, expoente - 1)
}

const multiplicar = (a, b) => a * b
console.log(multiplicar(2, 3))
console.log(multiplicar(4, 3))

const experiencia = (anos) => {
    if (anos <= 1) {
        return `${anos} ano, portanto junior`
    } else if (anos == 2) {
        return `${anos} Pleno`
    } else if (anos == 3) {
        return `${anos} Sênior`
    }
    return `${anos} anos`
}
console.log(experiencia(1))

const calculaSalario = (salario) => {
    if (salario <= 1000) {
        return `${salario}`
    } else if (salario <= 2000) {
        return `${salario * 0.9}`
    }
}

console.log(calculaSalario(1000))

const calculaPrecoCarro = (custoFabrica: number, impostos: number) => {
    var custoFinal: number = custoFabrica * 0.28 + impostos * 0.45

    return `O preço final do carro com os impostos é de ${custoFinal}`
    // return custoFinal > impostos ? `Impostos: ${impostos}` : `Custo final: ${custoFinal}`
}

console.log(calculaPrecoCarro(10000, 100))

