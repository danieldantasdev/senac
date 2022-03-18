# Engenharia de Software II - 09/03/22

## Carga horária de 80 Horas

## Competência

-   Definir e construir a arquitetura de um sistema computacional baseado em padrões

-   Os arquitetos de software definem como criar o software

## Indicadores de competência

-   Construir modelos orientados a objetos utilizando notações e diagramas da UML

-   Definir processos de gerência de configuração e mudança de software

-   Utilizar sistema de gerência de configuração executando suas principais funções de manipulações de código fonte

-   Identificar as principais diferenças/padrões entre os ambientes produtivos e não produtivos de software. Transformar o modelo de classes em um modelo relacional

## Bibliografia

-   Princípios de análise e projetos de sistemas com UML, Eduardo Bezerra

-   UML (guia do usuário), Booch

-   UML 2 (Uma abordagem prática)

## Software que vamos usar

-   UMLstar

## Convenções

-   [UML.org](https://www.uml.org)
-   [OMG](https://www.omg.org/spec/UML/2.5.1/About-UML/)

## O que é análise?

-   Análise modela o problema e consiste das atividades necessárias para entender o domínio do problema

-   Trata-se de uma atividade de investigação

-   Análise consiste de atividades feitas com e para o cliente (análise de requisitos)

    -   Interface do usuário (Wireframes de baixa e alta)

-   A informação produzida na análise deve ser discutida e aprovada pelo cliente

## Domínio

-   Define até onde vai ser desenvolvido dentro do meu projeto

## Projeto

-   O projeto modela a solução e consiste das atividades de criação

-   Trata-se de uma atividade de resolução

-   O projeto inclui as atividades que resultam em informação que interessa apenas ao programador

-   A atividade do projeto serve como base para a atividade de programação (construção)

### Exemplo

**Previdência social**

`Domínio de dados`

`Anos`: Números inteiros positivos de 17 a 120 anos;
`Endereço`: Strings;
`Número do endereço`: Strings e Numbers;

`Sistema de Atendimento de pedidos (processos jurídicos)`

-   Nome do solicitante
-   Motivo da solicitação
-   Tipo do pedido
-   CPF/CNPJ
-   Email

## Resumo

-   Análise (modelagem do problema - `Entender` - cliente)

    -   Informação importante para o cliente discutir e aprovar

-   Projeto (modelagem do solução - `criar` - Programador)
    -   Informação importante para o programador

## Análise Orientadas a Objetos

-   Objetos são coisas, conceitos, entidades... com estados

-   Responsabilidade

-   Ênfase em identificar descrever objetos ou conceitos do domínio do problema num sistema para uma biblioteca, os conceito são livro, biblioteca, usuário...

## Representando modelos na análise

-   Podemos criar modelos do domínio do problema

-   UML é útil aqui:
    -   Se os objetos forem do domínio do problema
    -   Se os objetos não tiverem métodos

**Implantar é pegar o software e colocar ele em produção**
**Atributos são valores e métodos são comportamentos**

`Processos do desenvolvimento de software`

-   Análise de projetos

-   Análise, projeto, implementação e testes

-   O que são Artefatos? São objetos concretos, ou seja, os subprodutos concretos de um projeto (Metodologia RUP)
    -   Exemplos: Executável do projeto, código fonte, framework ou biblioteca e etc

`Processo unificado - PU`

-   A motivação para o uso da abordagem de Craig Lamar ao processo unificado deve-se ao fato de que este é um processo bastante conciso e eficiente para análise e projeto de sistemas orientados a objetos

`UML - Unified Modeling Language`

-   Serve para se comunicar com todo mundo

-   Uma linguagem de comunicação iconográfica

-   Conhecer uma boa linguagem não implica na habilidade de saber usa-lá para produzir artefatos úteis

-   Escrever bons projetos é como escrever poesia. Não basta conhecer a linguagem. É preciso dominar certas técnicas de escrita

`Software Deselegante`

-   Software deselegante é aquele feito sem uma estrutura clara
-   O software deselegante é aquele do qual não se consegue reusar blocos do mesmo

`Software Elegante`

-   O software elegante é aquele documentado, reutilizável e etc
-   Ele é mais fácil de reutilizar

> Livros

-   Padrões de projetos
-   Design pattern
-   Domain-Drive Design

`Design patterns`

-   Lições aprendidas ao longo d anos de projeto

`Etapas do desenvolvimento`

1. Análise
    - A qualidade do processo de análise é importante para não dar erros
2. Projetos
    - Apresenta a solução
3. Implementação
    - Utilização de técnicas sistemáticas nas fases de análise (CI/CD - GitFlow)
4. Testes
    - A fase de testes envolve testar a unidade, feitas pelo programador, para verificar e validar se os componentes gerados atendem à especificação do projetista, e aos testes de caso de uso. Normalmente efetuados pelo analista experiente, que visam verificar a adequação do sistema aos requisitos inicialmente levantados

`Fases do Processo Unificado`

1. Concepção
    - Estuda a viabilidade e elaborar o problema
2. Elaboração
    - Elaborar os modelos para solucionar o problema
3. Construção
    - Criação
4. Transição
    - Implantação

**Antes de programar, precisamos elaborar muito bem o que vamos produzir**

`Análise de requisitos`

-   É fundamental para o Desenvolvimento de sistemas, pois trata justamente os problemas do cliente

`Técnicas de análise`

1. Etnografia

    - A etnografia é uma técnica de observação que pode ser utilizada para compreender os requisitos sociais e organizacionais, ou seja, entender a política organizacional bem como a cultura de trabalho com objetivo de familiarizar-se com o sistema e sua história. Os cientistas sociais e antropólogos usam técnicas de observação para desenvolver um entendimento completo e detalhado de culturas particulares.

2. Workshops

    - Trata-se de uma técnica de elicitação em grupo usada em uma reunião estruturada. Devem fazer parte do grupo uma equipe de analistas e uma seleção dos stakeholders que melhor representam a organização e o contexto em que o sistema será usado, obtendo assim um conjunto de requisitos bem definidos.

3. Prototipagem

    - Protótipo tem por objetivo explorar aspectos críticos dos requisitos de um produto, implementando de forma rápida um pequeno subconjunto de funcionalidades deste produto.

4. Entrevistas

    - A entrevista é uma das técnicas tradicionais mais simples de utilizar e que produz bons resultados na fase inicial de obtenção de dados. Convém que o entrevistador dê margem ao entrevistado para expor as suas idéias.

5. Entrevistas

    - A entrevista é uma das técnicas tradicionais mais simples de utilizar e que produz bons resultados na fase inicial de obtenção de dados. Convém que o entrevistador dê margem ao entrevistado para expor as suas idéias.

6. Entrevistas

    - A entrevista é uma das técnicas tradicionais mais simples de utilizar e que produz bons resultados na fase inicial de obtenção de dados. Convém que o entrevistador dê margem ao entrevistado para expor as suas idéias.

`Requisitos`

-   Funcionais: O que o sistema faz
-   Não funcionais: Restrições sobre como o sistema deve desempenhar suas funções

**Deve ficar claro ao analista que requisitos que o cliente ou usuário solicitam, e não coisas que ele, como analista, planejou**

---

# Engenharia de Software II - 16/03/22

`CRUD`

-   Criar
-   Listar
-   Atualizar
-   Deletar

`Daemon`

-   Antivírus
-   Monitor impressora (spooler)
-   Email

---

# Engenharia de Software II - 17/03/22

- Vamos usar o [Draw.io](https://drawio-app.com)

`Broadcast`

- Em telecomunicações e teoria da informação, broadcasting é um método de transferência de mensagem para todos os receptores simultaneamente

`Assíncrona`

- Quando enviamos um pedido, não precisamos esperar a resposta
- Aula ao vivo, Mensagem do celular

`Síncrono`

- Envio de sinal com espero de resposta
- Sinal de rádio
