# Tecnologia Web II

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

- Fornece objetos para controlar um navegador web e seu Document Object Model (DOM), eventos de usuários

`Servidor`

- Fornece objetos relevantes à execução do JavaScript em um servidor. Operações com BD e arquivos

### JavaScript não é Java

- JavaScript segue a sintaxe básica do Java, convenções de nomenclatura e construções de controle fluxo
- Sistema em tempo de execução com base em um pequeno númeor de tipos de dados representando valores númericos, booleanos e strings
- Suporta funções sem quaisquer requisitos especiais declarativos. As funções podem ser propriedades de objetos, executando como métodos
- Não tem de declarar todas as variáveis, classes e métodos
- Não tem que se preocupar com o fato dos métodos serem públicos, privados ou protegidos
- Variáveis, parâmetros e tipo de retorno da função não são explicitamente tipados

JavaScript | Java 
:--------- | :------: 
| Orietado a objeto. Sem distinção entre tipos e objetos. A herança é feita através do protótipo e as propriedades e métodos podem ser adicionadas a qualquer objeto dinamicamente | Baseado em classe. Objetos são dividos em classes e instâncias com toda a herança através da hierarquia de classe. Classes e instâncias não podem ter propriedades ou métodos adicionados dinamicamente |
| Os tipos de dados das variáveis não precisam ser declarados (tipagem dinâmica) | Os tipos de dados das variáveis devem ser declarados (tipagem estática) |
| Não pode escrever automaticamente no disco rígido | Pode escrever automaticamente no disco rígido |
| Liguagem não compilada (linguagem interpretada) | Linguagem compilada |

### Padronização ECMAScript

- Padronização pela ECMA International - a associação Euroupeia para a padronização de Sistemas de comunicação e Informação
- ECMAScript é documentado na especificação ECMA-262
- ECMA-262 também é aprovado pela ISO (International Organization for Standardization) como ISO-16262

### Sintaxe de comandos em JavaScript

- JavaScript é `case-sensitive`, ou seja, Maiuscula é diferente de Minuscula
- Espaços, tabulação e uma nova linha são considerados espaços em branco
- O código fonte dos scripts em Java Script são lidos daesquerda para direita e são convertidos em uma sequência de elementos de entrada
- Recomenda-se sempre adicionar ponto e vírgula no final de suas declarações
- Escolha nomes coerentes para seu sistema

var Nome = "Maria";

#### Cometários

- São usados para inserir dicas, notas, sugestões ou alertas no código
- Torna mais fácil de ler ou entender o que o código faz
- Também pode ser usado para desabilitar código, evitando sua execução

function comment() {
    //Isto é um comentário de linha
    console.log('Olá, mundo!");
}
comment();

function comment() {
    /*
    Isto é um comentário de várias linhas (comentário de bloco)
    console.log('Olá, mundo!");
    */
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

- Podem conter somente caracteres alfanúmericos (ou '$' ou '_')
- Não podem iniciar com um dígito
- É `case-sensitive`, Estado_origem é diferente de estado_origem

Exemplos válidos

- Nome_funcionario
- _Salario e $Cidade

