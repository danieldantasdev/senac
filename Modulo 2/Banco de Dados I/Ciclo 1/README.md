# Banco de Dados I - 10/03/22

-   O mais importante aqui são as informações
-   Usamos qualquer informação para transformar em um dado útil

`Por que é importante ter informações?`

-   Nosso dia-a-dia estamos rodeados de dados
-   Essas informações por muitas vezes existem e se perdem

`Big Data`

-   Pegar informações existente que não eram utilizadas, pegamos tratamos e usamos para consulta

## Vivemos uma fase de transição do valor da informação para as empresas

-   Antigamente a informação era o conhecimento que habilitava o negócio
-   E para habilitar o negócio, as empresas buscam informação nossa para uso
-   Dados e dados e dados...

## Mas esta quantidade de dados toda não foram utilizadas antes?

-   Não conseguíamos organizar essa quantidade massiva de dados

**Podemos ter dados sem informações, mas não podemos ter informações sem dados**

> Daniel Keys Moran

## Banco de Dados

`O que são?`

-   Coleção de Dados fortemente estruturados acompanhados de um conjunto de mecanismos de controle, acesso e manipulação

`O que é um sistema gerenciador de banco de dados`

-   SGBD (Sistema Gerenciador de Banco de Dados) ou DBMS (DataBase Management System)

-   Aplicação que fica de frente a uma coleção de dados e faz a mediação e acesso

`Propriedades de um SGBD`

-   Sistema composto de um conjunto de mecanismos de controle, acesso e manipulação de uma base de dados, que permite construir e manipular bases de dados de diversas aplicações

-   Provê independência entre os dados, com relação a organização física de arquivos e dados

-   Manipula grandes quantidades de dados

-   Garante a persistência de dados

`Controle e Manipulação de Dados... Mas como representar os dados?`

-   É necessário uma forma estruturada e consistente para representar os dados

> Modelo de dados

-   Descreve a organização dos dados do mundo real em estruturas computacionais

> Esquemas conceitual e lógicos

-   Descreve uma coleção de dados, usando um modelo de dados

> Esquema físico

-   Descreve a organização física dos dados

`Como armazenar os dados`

-   Um modelo de dados é representado em um banco de dados através de estruturas de dados

-   Por exemplo, as tabelas interligadas entre si

`Acessando os Dados com Álgebra Relacional`

-   Linguagem de consulta de banco de dados que consiste em um conjunto de operações, tendo como entrada uma ou duas relações e produzindo como resultado um nova relação

-   Usando declarações da linguagem SQL podemos definir a estrutura de um banco de dados, manipular os dados suas tabelas, controlar acesso e gerenciar operações (transações)

> Divisão do SQL

-   DDL (Construir)
-   DML (Manipular)
-   DCL (Controlar acesso)
-   TCL (Transacionar)

`SERVER --------SQL--------> banco de dados
<--------------retorna com dados----------`

---

# Banco de Dados I - 17/03/22

`Instalando o SQL Server 2019 Express`

- Entrar no site da [Microsoft](https://www.microsoft.com/pt-br/sql-server/sql-server-downloads)
- Baixar e executar instalando na máquina local

`Instalando o SSMS`

- Entrar no site da [Microsoft](https://docs.microsoft.com/pt-br/sql/ssms/download-sql-server-management-studio-ssms?view=sql-server-ver15)
- Baixar e executar instalando na máquina local

- Computador não tem cognição, ele é 'burro', por isso utilizamos a lógica para se comunicar com o mesmo, o famoso paradoxo de `>Turing`

`SQL`

- Standar Query Language, ou seja, é a linguagem padrão para criar queries
- Baseada na teoria de conjuntos da matemática, teoria da álgebra relacional
- Somente Strings

## Referências

- Elmasri & Navathe - "Sistemas de Banco de Dados"

## Modelo Relacional

- Modelo de dados, que se baseia no princípio em que todos os dados estão guardados como tabelas
- Baseado em lógica de predicados e na teoria de conjuntos
- Sucessor do modelo hierárquico e do modelo de rede

`Por que o Modelo Relacional?`

- Simplicidade dos conceitos
- Definição formal dos conceitos
- Paradigma formal para linguagens de consulta
- SGBDs com desempenho adequqado, principalemnte quanto à otimização de consultas
- Mais de 25 anos de desenvolvimento

**Precisamos saber perguntar para o banco, precisamos diferenciar a linguagem coloquial da linguagem SQL**

`> Exemplo`

- Não podemos perguntar para o banco: "Quero calças azuis e brancas"

``Continuando no modelo relacional ou Schema`

- Um atributo ou coluna
- Uma tupla ou linha ou registro

`Definição`

- Conjunto de relçoes e outors componentes do banco

`Notação`

- Simplificada de relação nos Schemas

Estudante(sid: string, nome: string, CR: float)

- Estudante seria o `nome da relação`
- String, float e int são os domínios dos `atributos` (o domínio é o valor em si, não o tipo de dado
- sid, nome e CR são os `atributos`

- Em um SGBD, o conjunto de esquemas está contido no catálogo

**Estudar sobre SQL Injection**

---

# Banco de Dados I - 24/03/22

Tupla:  uma linha
Atributo: é  o cabeçalho da coluna 
Relação: é a tabela 
Domínio: são os valores aceitáveis para um atributo 
![image](https://user-images.githubusercontent.com/90552955/160014080-b75811b5-f6a6-4ad7-997c-c4156f25c111.png)

Aluno(Nome: String, Mat: int, FoneRes: string, Idade: int, CR: float)
Relação: Aluno
Atributo: (7 atributos) - Nome, Mat, FoneRes, Idade, CR
Domínio: Dom(Nome)=nomes; Dom(Mat)= números
Tupla: <Roberto, 001,222-2222, 40, 9,1>
![image](https://user-images.githubusercontent.com/90552955/160014177-69827ef2-b260-46c3-9513-1ae4a93e80d7.png)

`Atributos Chaves`

- As chaves são parte muito importante da base de dados relacional
- Elas são usadas para estabelecer e identificar relacionamento entre as tabelas
- Todas combinações possíveis na mesma linha

- O conjunto de um ou mais atributos que nos permite identificar inequivocamente uma tupla é conhecido como `Superchave`

> Duas tuplas não podem ter a mesma superchave
> A superchave pode conter atributos desnecessários

Por exemplo: A relação Pessoa(CPF, Nome, endereço,....)  pode ter como superchave 
{CPF}, {CPF, nome}, {CPF, nome, Endereco}, Etc...

`Chaves`

- É a Superchave mínima
- Pode existir mais de uma chave nesta condição: `Chaves Candidatas`
são as menores superchaves possíveis (cujos subconjuntos não sejam superchaves)

Por exemplo, na relação 
Empregado(Mat, CPF, Nome, Ndata, Endereco, Depnum)
Chaves:  {CPF} ou {Mat}

`Chave primária`

- Chave Candidata escolhida
- O restante das chaves candidatas são chamadas `chaves únicas`
- Chave Primária identifica exclusivamente cada registro em uma tabela 
- É uma chave candidata que é mais apropriada para se tornar chave principal 
- > Por convenção, ela aparece sublinhada num esquema

`Chave estrageira`

- Uma chave estrangeira é um campo (ou conjunto de campos) em uma tabela que identifica unicamente uma linha de outra tabela ou na mesma
- Aponta para chave primária de outra relação
- > Por convenção, ela paarece em itálico

`Rstrições`

- Uma Restrição é uma propriedade associada a uma coluna, ou conjunto de colunas numa tabela, que previne certos tipos de inconsistências de valores de dados serem colocados nestas coluna(s)
- são utilizados para reforçar integridade dos dados, garantindo uma exatidão e confiabilidade dos dados no BD

  `Integridade da entidade`
  
  - Nenhuma tupla da relação poderá ter valor nulo no atributo chave primária (PK)
  - Propriedade da PK também garante que não existe 2 linhas (tuplas) duplicadas

  `Intgridade de Domínio`
  
  - Reforça a validação dos dados, em termos de tipo, formato ou intervalo de valores
  - Exemplo: credito > 0; Grau  > 0 e < 10; Sexo: {M, F}
![image](https://user-images.githubusercontent.com/90552955/160017043-63d7b4f8-9246-4094-9783-b558ba8f300b.png)

  `Integridade Referencial`

  - Especificada entre 2 relações
  - Mantem a consistência entre as tuplas

  `Integridade definida pelo usuário`
  
  - Garante algumas regras de negócio, não cobertas por outras restrições
  - Exemplo: 1 médico pode atender no máximo a 50 pacientes
  - Exemplo: 1 aluno pode atender no máximo a 7 cursos por semestre






