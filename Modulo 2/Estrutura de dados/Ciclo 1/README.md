# Estrutura de dados - Dia 08/03/22

## Roteiro de aula

-   Objetivo da aula
-   Objetivo

### Objetivo da aula

-   Apresentar os objetivos, informações e expectativas com a UC

### Competência

-   Desenvolver estruturas de dados

### Avaliações

-   1 avaliação: 29/03
-   2 avaliação: 19/04 e 26/04(seminário)
-   3 avaliação: 17/05
-   4 avaliação: 28/06

### UC

-   Nesta unidade continuaremos utilizar linguagem C para apresentação de códigos e implementação de programas

### Estrutura de dados e algoritmo

-   Estrutura de dados estão associadas a Algoritmos
-   Bons algoritmos dependem da representação e estrutura de dados adotada
-   Escolha da estrutura adequada depende diretamente do conhecimento de algoritmo para manipulá-la corretamente

### Tipos de Dados

`Primitivos` -> a partir dos quais podemos definir os demais (inteiro, real, lógico (boolean), caracteres)

`Compostos` -> constituídos de dados primitivos (Conjunto de informações agrupadas de forma coerente (com alguma relação entre elas) (lista de presença entre elas))

#### Exemplo

> Primitivos

-   int idade;
-   float altura;

> Compostos

-   float nota [50];
-   aluno alunos[50];

### Vetores

> O que são?

-   Uni-dimensional
-   Só armazenam variáveis do mesmo tipo (por causa do número de bits necessários, alguns podem ser maior que outros)
    **Todos espaços na memória são iguais**
    **Só o nome do vetor representa a primeira posição do vetor**
    **vet[0] o zero significa que não tem pulo de casas, portanto todo vetor começa da posição zero**
    **vet[] o colchete é o ponteiro constante**
-   São armazenados de maneira sequencial na memória

> Para que servem? E quando utilizar?

## Algoritmo

-   Conjunto de passos bem ordenados que visam resolver problemas

### Programação

-   O programa tem o algoritmo, mas não é a linguagem de programação

### Dados

-   Tudo o que sai de um app

### Algoritmos versus estruturas de dados

-   Vamos se aprofundar bastante nisso

## O que são?

-   Coleção de valores e operações que resultam em tarefas

### Conceitos básico de dados

-   Dados são elementos em sua forma bruta, não conduzindo a uma compreensão de determinada situação ou fato, sem contexto

### Tipos de dados

-   Atómicos ou primitivos
-   Complexos ou compostos

### E as informações?

-   Etá relacionada aos dados, mas é a ordenação de um dado em uim contexto específico

### Algoritmos

Dados(entrada) -> Processamento(processamento) -> Informações(saída)

### Estrutura de dados

-   1?
-   M?
-   Verdadeiro ou Falso?
-   1, 2, 3, 4?

**Dados são diferentes de estrutura de dados**

-   Forma de organização dos dados de modo a atender os diferentes requisitos de processamento

-   Forma de organização dos dados

### Algoritmos versus estruturas de dados

-   Algoritmo é a representação do comportamento

-   Estrutura de dados é a representação da informação

**Algoritmos são diferentes de estrutura de dados**

## Estrutura de dados

### Quantidade de dados que produzimos?

### Dados organizados? Ordenados? Estruturados?

-   Dicionário
-   Mapa

`Foco computacional`

**Precisamos focar muito na estruturação de dados, para não realizar nenhuma atividade sem organização**

## Tipos de estruturas de dados

`Básicas`

-   Int, float, char, boolean

`Compostas/personalizadas`

-   Fazemos a composição de estruturas de dados básicos

### Listas

`Cotidiano`

-   Com ordenação
-   Sem ordenação

`Computacional`

-   Com ordenação (Aplicativo de frutas)
-   Sem ordenação (Aplicativo de gerenciamento de clientes)

### Filas

`Cotidiano`

-   "A Fila do banco está muito grande!"
-   Como funciona?

`Computacional`

-   Mandar um arquivo para impressão, existe uma ordem para imprimir, os arquivos que chegam primeiro serão imprimidos primeiro

**Toda fila tem um critério de ordenação**
**Sistemas de senhas e filas do banco também tem ordenação**
**FIFO - Primeiro que entra é o primeiro que sai**

### Pilhas

`Cotidiano`

-   Por onde começar?
-   Como funciona?

`Computacional`

-   Opção de desfazer algo
-   Jogo de cartas, a exemplo do UNO

**O acesso aos itens da pilha tem uma restrição - somente um item pode ser lido ou removido por vez**
**LIFO - Último que entra vai ser o primeiro a sair ou ser lido**

### Árvore

`Cotidiano`

-   Árvore

`Computacional`

-   Organização das pastas no diretório
-   Banco de dados
-   Buscas
-   Mapa de navegação
-   IA com tomada de decisão (Jogo Akinator)

**As Árvores possuem uma hierarquia**
**Raiz e as ramificações**

### Grafos

`Computacional`/`Cotidiano`

-   Redes sociais (instagram, linkedin)
-   Redes de computadores
-   Rotas de voo

**Grafos apresentam relações sem ordenação**
**Existem grafos com definições**

## Principais operações

-   Inserção
-   Remoção
-   Busca
-   Atualização
-   Impressão

## Aplicações?

### Linguagens de programação

-   Já temos muitas estruturas já implementadas
-   Importância de conhecer estruturas e problemas
-   Lista versus conjuntos

### Vetor

`O que são?`

-   É uma estrutura de dados que em geral tem uma quantidade fixa de elementos e armazenamos o mesmo tipo de dados e os dados na memória do computador está armazenado de forma sequencial

`Suas características?`

-   Quantidade fixa de elementos e armazenamos o mesmo tipo de dados e os dados na memória do computador está armazenado de forma sequencial

`Como funcionam?`

## Importância?

## Atividade

Faça um programa em C para o gerenciamento de matriculas de alunos de uma turma de até 30 alunos. Considere que as matriculas correspondem a valores do tipo inteiro. O programa deve possibilitar cadastrar matriculas e também consulta e exiba todo o vetor

-   E se a quantidade de alunos aumentar?

-   Se as matriculas forem armazenadas de forma ordenada, como ficaria a busca? Poderia ser melhorada?

-   É possível manter todos os dados do aluno nesse array?

<!-- Segunda parte da aula -->

# Strings

## Cadeia de caracteres

-   Uma cadeia de caracteres, mais conhecida, como string, é uma sequência de letras e símbolos, onde os símbolos podem ser espaços em branco, dígitos e vários outros, tais como ponto de exclamação e interrogação e etc...

-   Em C, não existe um tipo de dado string explícito. Para isso, utiliza-se um vetor de caracteres. Uma string é um vetor de caracteres com um `terminador`

> O terminador é o caractere "\0"

-   Por essa razão é necessário prever o final de uma string, que deve conter uma posição a mais do que um número de caracteres que deseja armazenar

-   Por exemplo, para declarar um vetor que guarda um string de 10 caracteres, declara-se:
    `char str[11]`

> Formas de definir uma string

`Como Array`

char a[6] = {'S','E','N','A','C', '\0'}
ou
char a[] = {'SENAC'}

> Definindo e inicializando uma cadeia de caracteres

char texto[100] = "Olá, mondo!";

`Como é um vetor podemos corrigir o caractere errado na posição 5`

texto[5]="u"

> Como uma string não é um tipo de definido em C, algumas operações não são permitidas utilizando uma string

-   Inicialização da string apenas na declaração
    `str1 = str2` //operação inválida

-   Comparação entre strings
    if(`str1 == str2`) //operação inválida

**Para resolver essa situação utilizamos funções de manipulações de strings**

> Uso da função de scanf()

-   scanf("%s",nome)
-   Sem uso do operador &
-   Lê somente até o primeiro espaço informado e adiciona "\0" ao final

> Problemas na leitura de diversas strings, principalmente com repetições

-   Grava o ENTER no buffer de entrada
    -   uso do fflush(stdin) antes do scanf()

> Utilização da função gets() e fgets()

#include <stdio.h>

int main(){
char string[100];
printf("Digite seu nome: ");
fgets(string,100,stdin); //gets (string)
printf("\n Ola %s",string)
}

> Calculando o tamanho da string

int i, n=0;
char s[100];
fgets(s, 100, stdin);
for (i=0; s[i] != '\0',i++)
n++:

> Bibliotecas

-   A biblioteca padrão fornece várias funções úteis para manipular strings

-   Para usá-las, você deve incluir o cabeçalho `string.h` no ínicio dos seus arquivos

> Função strcpy()

-   Cópia do conteúdo de uma string

    -   Cópia entre strings
        str1 = str2 //operação inválida

-   Sintaxe
    strcpy(destino, origem)

> Função strcat()

-   Concatena duas strings;
-   Não verifica tamanho;

-   Sintaxe
    strcat(destino,origem)

> Exemplo

#include <stdio.h>
#include <string.h>

int main(){
char str1[20], str[10];
strcpy (str1, "bom");
strcpy (str2, "dia");
strcat (str1, str2);
puts(str1);
}

> Comparação de duas strings

-   Ao criar duas strings com o mesmo conteúdo e compara-lás como faria com números, verá que elas "não são iguais". Isso ocorre porque, na verdade, o que está sendo comprado são os endereços de memória onde estão guardadas as strings.

-   Para comparar o conteúdo de dus strings, deve-se usar a função strcmp()

int strcmp (char*s1, char*s2);

> Função strcmp()

-   Compara duas strings;

        -   Se iguais, retorna 0;

    **Um valor menor que zero significa que st1 é menor que str2**
    **Um valor maior que zero significa que st1 é maior que str2**

-   Sintaxe:
    -   strcmp(str1,str2)

> Função strlen()

-   A função strlen retorna o tamanho, em caracteres, de uma string dada. A função procura o terminador de string e calcula a distância dele ao inicio da string

char nome[]="Daniel Dantas";
int s = strlen (nome);
//s conterá o valor 13

> Função strupr(string)

-   A função strupr(string) converte o conteúdo da string informada em letras maiúsculas

> Função strlwr(string)

-   A função strupr(string) converte o conteúdo da string informada em letras minúsculas

---

# Estrutura de dados - Dia 15/03/22

## Matriz

-   São comumente referenciadas através de suas dimensões
-   Bi-dimensional
-   Linhas e colunas
-   Assim como no vetor, sempre começamos da posição 0
-   Notação comum: MxN
-   M é a quantidade de linhas
-   N é a quantidade de colunas

### Sintaxe

`Vetor`

tipo_dado vetor [tamanho1],[tamanho2]

`Matriz`

tipo_dado matriz [tamanho1] [coluna1]

### Como acessar?

mat[0][2]
scanf("%d",mat)

#include <stdio.h>
int main(){
int vetor [10]
int matriz [3] [3]

//vetor
int i
for (i=0; i<10 ;i++){
printf("Informe um valor: ")
scanf("%d",&vetor[])}

//matriz
int lin,col
for (lin=0;lin<3;i++){
for(col=0;col<3;i++){
printf("Informe um valor: ")
scanf("%d",&matriz [lin] [col])
}
}
}

---

# Estrutura de dados - Dia 22/03/22

`Tipos de dados`

   >`Primnitivos`
   - A partir dos quais podemos definir os demais
   - inteiro, real, lógico, carácter

   >`Estrutura de dados`
   - Constituido de dados primitivos e ou estruturas
   - Conjunto de informações agrupadas de uma forma coerente (com alguma relação entre eles)
   - Exemplo: Lista de chamada de turma

`Matriz`

- Estrutura bidimensional

`Tipos de dados estruturados homôgeneos - vetor e matriz`

- Estruturas que permitem armazenar diversos elementos, mas apenas elementos do mesmo tipo de dado
- Estrutura de dados que permite agrupar variáveios de tipos de dados diferentes

`Registros`

- Com os registros, podemos agrupar logicamente os elementos
- Conseguimos criar novos registros e associar em algum local

`Funções e procedimentos`

- 

