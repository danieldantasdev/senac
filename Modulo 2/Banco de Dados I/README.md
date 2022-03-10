.'# Banco de Dados I

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

SERVER --------SQL--------> banco de dados
<--------------retorna com dados----------
