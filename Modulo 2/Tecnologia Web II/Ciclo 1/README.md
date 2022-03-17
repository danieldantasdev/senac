# Tecnologia Web II - 09/03/22

## JavaScript

-   O JavaScript pode ser utilizado tanto no Back (Parte inteligente) e Front (Cara bonita do site)

-   Durante um bom tempo, o JavaScript era usado apenas na web

-   Lançaram os Framework de JavaScript, como Angular e React para mudar isso

### Ambiente de programação para JavaScript

-   IDE (Ambiente de Desenvolvimento Integrado) é um software que te permite programar utilizando recursos extras

-   Com as IDE's, podemos editar, modificar, debugar, executar e implantar meu código

-   Eclipse
-   Visual Studio
-   Visual Studio Code
-   Netbeans
-   Atom
-   WebStorm

**Podemos utilizar o console do browser para escrever JavaScript**

#### Instalação do VsCode

-   Já tinha

#### Instalação do NodeJS

-   Já tinha
-   Para gente agora, só vai executar nosso código

-   Vamos instalar a extensão `Node.js exec`

## JavaScript

-   É uma linguagem de script orientada a objetos, multiplataforma.

-   Dentro de um ambiente de host (um navegador web) o JavaScript pode ser ligado aos objetos deste ambiente para prover um controle programático
    sobre eles

-   JavaScript tem uma biblioteca padrão de objetos, como `Array`, `Date` e `Math` e um conjunto de elementos que formam o núcleo da linguagem, tais como `Operadores`, `Estruturas de controle` e `Declarações`

**Dentro do browser tem o engine v8, por isso não precisamos compilar JavaScript**

### O núcleo do JavaScript

`Cliente`

-   Fornece objetos para controlar um navegador web e seu Document Object Model (DOM), eventos de usuários

`Servidor`

-   Fornece objetos relevantes à execução do JavaScript em um servidor. Operações com BD e arquivos

### JavaScript não é Java

-   JavaScript segue a sintaxe básica do Java, convenções de nomenclatura e construções de controle fluxo
-   Sistema em tempo de execução com base em um pequeno númeor de tipos de dados representando valores númericos, booleanos e strings
-   Suporta funções sem quaisquer requisitos especiais declarativos. As funções podem ser propriedades de objetos, executando como métodos
-   Não tem de declarar todas as variáveis, classes e métodos
-   Não tem que se preocupar com o fato dos métodos serem públicos, privados ou protegidos
-   Variáveis, parâmetros e tipo de retorno da função não são explicitamente tipados

| JavaScript                                                                                                                                                                       |                                                                                                  Java                                                                                                   |
| :------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------: |
| Orietado a objeto. Sem distinção entre tipos e objetos. A herança é feita através do protótipo e as propriedades e métodos podem ser adicionadas a qualquer objeto dinamicamente | Baseado em classe. Objetos são dividos em classes e instâncias com toda a herança através da hierarquia de classe. Classes e instâncias não podem ter propriedades ou métodos adicionados dinamicamente |
| Os tipos de dados das variáveis não precisam ser declarados (tipagem dinâmica)                                                                                                   |                                                                 Os tipos de dados das variáveis devem ser declarados (tipagem estática)                                                                 |
| Não pode escrever automaticamente no disco rígido                                                                                                                                |                                                                              Pode escrever automaticamente no disco rígido                                                                              |
| Liguagem não compilada (linguagem interpretada)                                                                                                                                  |                                                                                           Linguagem compilada                                                                                           |

### Padronização ECMAScript

-   Padronização pela ECMA International - a associação Euroupeia para a padronização de Sistemas de comunicação e Informação
-   ECMAScript é documentado na especificação ECMA-262
-   ECMA-262 também é aprovado pela ISO (International Organization for Standardization) como ISO-16262

### Sintaxe de comandos em JavaScript

-   JavaScript é `case-sensitive`, ou seja, Maiuscula é diferente de Minuscula
-   Espaços, tabulação e uma nova linha são considerados espaços em branco
-   O código fonte dos scripts em Java Script são lidos daesquerda para direita e são convertidos em uma sequência de elementos de entrada
-   Recomenda-se sempre adicionar ponto e vírgula no final de suas declarações
-   Escolha nomes coerentes para seu sistema

var Nome = "Maria";

#### Cometários

-   São usados para inserir dicas, notas, sugestões ou alertas no código
-   Torna mais fácil de ler ou entender o que o código faz
-   Também pode ser usado para desabilitar código, evitando sua execução

function comment() {
//Isto é um comentário de linha
console.log('Olá, mundo!");
}
comment();

function comment() {
/_
Isto é um comentário de várias linhas (comentário de bloco)
console.log('Olá, mundo!");
_/
}
comment();

#### Declarações

##### Tipos:

`var` - declara uma variável local ou global e a inicializa com um valor
`let` - declara uma variável local, escopo de bloco, a inicialização do valor é opcional
`const`- declara uma constante de escopo de bloco, somente leitura

var Nome = 'Maria'; (declaração local ou global)

Sal = 1560; (declaração global)

let idade = 22; (declaração local (bloco))

### Regras para identificadores de variáveis

-   Podem conter somente caracteres alfanúmericos (ou '$' ou '\_')
-   Não podem iniciar com um dígito
-   É `case-sensitive`, Estado_origem é diferente de estado_origem

Exemplos válidos

-   Nome_funcionario
-   \_Salario e $Cidade

`Variável Global`

-   Declaradas fora de uma função
-   Disponível para todos os blocos

`Variável Local`

-   Declarada dentro de uma função
-   Disponível apenas para função ond foi declarada

if (true) {
var x = 5;
}
console.log('x') //saída 5

if (true) {
let x = 5;
}
console.log('x') //saída referenceError: y não está definido

`const`

-   Para declarar use a palavra-chave 'const'
-   Apenas leitura
-   A sintaxe de um identificador de uma constante é semelhante ao identificador de uma variável
-   Não pode alterar seu valor por meio de uma atribuição ou ser declarada novamente enquanto o script está em execução
-   Deve ser inicializada com um valor

const PI = 3.14;

### Tipos de Dados em JavaScript

#### Tipos Primitivos

`Boolean`

-   Tipo de dado lógico que pode ter apenas um de dois valores possíveis: verdadeiro ou falso

if (condição booleana){
//código a executar se o booleano for TRUE
}

if (condição booleana){
//código a executar se o booleano for TRUE
console.log('booleano verdadeiro');
} else {
console.log('booleano falso')
}

//JavaScript for loop

for (variavel de controle; condição booleana; contador) {
//código a se repetir se o booleano for TRUE
}

for (var i = 0; i < 4; i++) {
console.log('código a executar se a condição for verdadeira, ou seja, até 'i' atingir o valor de 4);
}

`Null`

-   O valor null é um literal que representa um valor nulo ou vazio

//marca não existe, não foi definido e jamais foi inicializado

Entrada: marca

Saída: "ReferenceError: marca is not defined"

//marca é conhecida e existe, mas não aponta para nenhum tipo ou valor

Entrada: var marca = null;

Saída: marca null

`Undefined`

-   É um valor primitivo atribuído automaticamente a variáveis que acabaram de ser declaradas ou a argumentos formais para os quais não existem argumentos reais

//Cria a variável mas não atribui o valor

Entrada: var x

Saída: value is undefined

`Number`

-   É um tipo de dado numérico

Entrada: var x = 1

Saída: console.log('x') //1

`BigInt`

-   No JavaScript, BigInt é um tipo de dado numérico que representa inteiros no formato de precisão arbitrária. Em outras linguagens de programação existem tipos numéricos diferentes, como por exemplo: Integers, Floats, Doubles ou Bignums.

`String`

-   É uma sequência de caracteres para representar texto

var x = 'Uma string'
var y = '515151'
var z = '757257%%$%%¨&'

`Objeto`

-   Estrutura de dados contento dados contendo dados e instruções
-   Objetos muitas das vezes se referem a coisas do mundo real, por exemplo um objeto de carro ou um mapa em um jogo de corrida
-   Os objetos podemo ser criados usando o construtor `Object()` ou o `inicializador de objetos`

new Object()
new Object(valor)

let = new Object()
o.numero=42
console.log('o') //Object {numero:42}

`Symbol type`

-   Symbols são novos no JavaScript ECMAScript edição 6. Um Symbol é um valor primitivo `único` e `imutável` e pode ser usado como chave de uma propriedade de Object
-   Em algumas linguagens de programação, Symbols são chamados de atoms (átomos). Você também pode compará-los à enumerações nomeadas (enum) em C. Para mais detalhes veja Symbol e o Symbol object wrapper em JavaScript.

#### Conversão de tipos

-   JavaScript é uma linguagem `dinamicamente tipada`
-   Não precisa especificar o tipo de dado de uma variável quando declará-la
-   Os tipos de dados são `convertidos automaticamente` conforme a necessidade durante a execução do script

var resp = 42
resp = 'João tem 42 anos'

x = 'A resposta é' + 42 //'A resposta é 42'
y = 42 + 'é a resposta' //'42 'é a resposta'
z = `A resposta é ${resp}`

**Em expressões envolvendo valores numérico e string com o operador +, JavaScript converte valores numérico para string**

---

# Tecnologia Web II - 16/03/22

## Operadores

### Tipos

`Binário`

-   operando1 operador operando2
-   2 + 3; 4 - 5; x - y

`Unário`

-   Operador operando ou ainda, operando operador
-   ++z; x--; x++

`Atribuição simples`

-   =
-   Atribuir um valor de uma variável a outro
-   x = y

`Atribuição de adição`

-   x += y
-   x = x + y

`Atribuição de subtração`

-   x -= y
-   x = x - y

`Atribuição de multiplicação`

-   x \*= y
-   x = x \* y

`Atribuição de divisão`

-   x /= y
-   x = x / y

`Atribuição de resto`

-   x %= y
-   x = x % y

`Atribuição de exponencial`

-   x \*\*= y
-   x = x \*\* y

`Incremento e decremento`

-   var i = 1, j = i++ // j = 2 e i = 2
-   var i = 1, j = ++i // j = 2 e i = 1
-   var i = 1, j = i-- // j = 2 e i = 2
-   var i = 1, j = --i // j = 2 e i = 1

`Comparação`

    1. == - true caso os operandos sejam iguais
    2. != - true caso os operandos não sejam iguais
    3. === - true caso os operandos sejam iguais e do mesmo tipo. Object.is e igualdade em JS
    4. !== - true caso os operandos não sejam iguais e do mesmo tipo. Object.is e igualdade em JS
    5. > - true caso os operando da esquerda seja maior que o da direita
    6. < - true caso os operando da esquerda seja menor que o da direita
    7. >= - true caso os operando da esquerda seja maior ou igual que o da direita
    8. <= - true caso os operando da esquerda seja menor ou igual que o da direita
