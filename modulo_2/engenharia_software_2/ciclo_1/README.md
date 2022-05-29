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

---

# Engenharia de Software II - 10/03/22

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

-   Vamos usar o [Draw.io](https://drawio-app.com)

`Broadcast`

-   Em telecomunicações e teoria da informação, broadcasting é um método de transferência de mensagem para todos os receptores simultaneamente

`Assíncrona`

-   Quando enviamos um pedido, não precisamos esperar a resposta
-   Aula ao vivo, Mensagem do celular

`Síncrono`

-   Envio de sinal com espero de resposta
-   Sinal de rádio

-   Começamos a criação do diagrama de atividade designar técnico responável

---

# Engenharia de Software II - 23/03/22

-   Relizamos o aprofudamento do diagrama de atividade designar técnico responável

---

# Engenharia de Software II - 24/03/22

-   Estamos continuando a apresentação do diagrama de atividades dos grupos de ontem

`Classe`

-   É uma representação abstrata de objetos
-   A classe instancia objetos em algum momento
-   Em UML, os substantivos virarão classes
-   Sempre será no singular

Dois objetos não são iguais, porque os mesmos ocupam lugar diferente na meória do computador

---

# Engenharia de Software II - 30/03/22

`Atributos`

-   Permite a identificação de cada objeto de uma classe
-   Os valores dos atributos podem variar de instância para instância
-   Atributos podem conter os tipos de dados a ser armazenado (boolean, byte, int, doublr, char, string e etc)

`Métodos`

-   São apenas declarados neste diagrama
-   Diagrama de classe não define a implementação

-   Outros diagramas permitem modelar o corportamento interno dos métodos (Diagram de sequência e diagram de atividades)

`Tipos de visibilidade`

-   Pública (+)
-   O atributo ou método pode ser utilizado por qualquer classe
-   Protegida (#)
-   Somente a classe ou sub-classes terão acesso
-   Privada (-)
-   Somente a classe terá acesso

`Relacionamento`

-   Classes possuem relaciuonamentos entre elas

    -   Compartilham informações
    -   Coloaboram uma com as outras

-   Principais tipos de relacionamentos
    -   Associação
    -   Agregação/Composição
    -   Herança
    -   Dependência

`Comunicação entre Objetos (I)`

-   Conceitualmente, objetos se comunicam através da troca de mensagens

> Mensagens definem:

-   O nome do serviço requisitado
-   A informação necessária para a execução do serviço
-   O nome do requisitante

`Comunicação entre Objetos (II)`

-   Na prática, mensagens são implementadas como chamadas de métodos
-   Nome = o nome do método
-   Informação = a lista de parâmetros
-   Requisitante = o método que realizou a chamada

`Associações`

-   Descreve um vínculo entre duas classes
-   Chamado Associação Binária
-   Determina que as instâncias de uma classe estão de alguma forma ligadas às instâncias da outra classe

`Multiplicidade`

> 0..1

-   No máximo um. Indica que os Objetos da classe associada não precisam obrigatoriamente estar relacionados

> 1..1

-   Um e somente um. Indica que apenas um objeto da classe se relaciona com os objetos da outra classe

> 0..\*

-   Muitos. Indica que podem haver muitos objetos da classe envolvidos no relacionamento

> 1..\*

-   Um ou muitos. Indica que há pelo menos um objeto envolvido no relacionamento

> 3..5

-   Valores específicos

`Agregação`

-   Tipo especial de associação
-   Demonstra que as informações e um objeto precisam se complementadas por um objeto de outra classe
-   Associação Todo-Parte
-   objeto-todo
-   objeto-parte

`Composição`

-   Uma variação do tipo agregação
-   Representa um vínculo mais forte entre objetos-todo e objetos parte
-   Objetos-parte têm que pertencer ao objeto-todo
-   O todo não existe (ou não faz sentido) sem a parte

`Especialização / Generalização`

-   Identificar classes-mãe (gerais) e classes-filhas (especializadas)
-   Atributos e métodos definidos na classe-mãe são herdados pelas classes-filhas

`Dependência`

-   Tipo menos comum de relacionamento
-   Identifica um baixo grau de dependência de uma classe em relação a outra

`Notas`

-   Informativos
-   Algum comentário na classe, método ou atributo
-   Alguma restrição de funcionalidade
-   Objetivo é informa como o objeto se comporta

`Diagram de classe`

-   Serve para criar estruturas no momento da execução do nosso sistema
-   E se precisarmos de alguma informação além, vamos pegar de banco de dados

`Dado`

-   Um número sozinho sem contexto

`Informação`

-   O contexto agregado aquele número

---

# Engenharia de Software II - 31/03/22

[Evolução das linguagens de programaçãp](https://www.google.com/search?q=esuemaevoluçao+das+linguagens+de+programação&tbm=isch&ved=2ahUKEwjE-prOwPH2AhUyALkGHevDDTsQ2-cCegQIABAA&oq=esuemaevoluçao+das+linguagens+de+programação&gs_lcp=CgNpbWcQA1CXCFj_DmCSE2gAcAB4AIABqAGIAdUIkgEDMC43mAEAoAEBqgELZ3dzLXdpei1pbWfAAQE&sclient=img&ei=bTlGYoSQHbKA5OUP64e32AM&bih=790&biw=1559&client=opera-gx&hs=RSn#imgrc=MHrZ2dOIvkyFZM)

`Histórias de metodologias de software`

`Início Anos 70 - Programação Estruturada`

> Início Anos 70 - Programação Estruturada

-   Niklaus Wirth

> Fim Anos 70 - Projeto Estruturado

-   Constantine, Yourdon

> Anos 80 - Análise Estruturada

-   Yourdon/DeMarco, James Martim, Chris Gane

> Anos 90

-   Orientação a Objetos
    -   Baseado no paradigma estruturado
-   Qualidade de Software
-   UML
-   Componentização

**No daigrama de ativiades, sempre que tiver um subustantivo será um objeto**

`Sistema eleitoral`

-   Classe seria a célula em branco
-   Objeto seria a célula preenchida com os candidatos
    > Objetos passam por dois estados:

class Usuario {
private string nome;
private string sobrenome;
}

void main () {
Usuario usuario1; //declaração do objeto (define o espaço na memória)
Usuario = new Usuario (); //instância do objeto (cria um ponteiro referente a declaração)

    Usuario usuario1 = new Usuario(); //declaração e instância do objeto

}

`Função`

-   Retorna um valor

int calcularSoma(){
return 0;
}

`Procedimento`

-   Não retorna nada

void calcularSoma(){
}

`Java`

class Usuario {
private string nome;
private string sobrenome;

void calcularSoma(int quant1){
Produto arroz;
arroz.descontoStock(quant1);
}

int calcularSoma(){
return 0;
}

}

---

# Engenharia de Software II - 06/04/22

`Programação estruturada`

-   Antigamente, o código fonte tinha mmiklhares de linhas
-   Estrutura monolítica

`Programação Orientada a objetos`

-   Programação modularizada
-   Reutilização de código

`Herança`

-   Mecanismop de encontrar a similaridade entre as classes, simplificando
-   Gatos, Leão, Gato

`Polimorfismo`

-   Poli (várias)
-   Morfos (formas)

-   Significa que um objeto pode asumir diferentes formas
-   Está associado a Herança
-   É caracterizado como o fato de uma operação poder ser implementada de diferentes maneiras pela mesma Classe na Hierarquia

    > Tomada Universal

-   O mesmo método sendo aplicados de diferentes maneiras

`Por que o banco de dados é o espelho do diagrama de classes`

-   O diagrama de classes serve com a estrutra de armazenamento organizado enquanto o programa está funcionando
-   O banco de dados é para `sempre`
-   Os dados seriam o caderno (anotações)

---

# Engenharia de Software II - 13/04/22

-   Estamos modelando o diagrama de estados do processo do projeto integrador II

`Integridade referencial`

-   Não deletamos nada do banco de dados, porque podemos acabar afetando no relacionamento das tabelas
-   O que devemos fazer é apagar logicamente, por meio de mudança de status

-   -1 (eliminado)
-   0 (inativo)
-   1 (cadastrado)
-   2 (designação do técnico)

---

# Engenharia de Software II - 20/04/22

`Interação de back com front`

-   Através do JSON;

[PADRÃO MVC](https://www.devmedia.com.br/padrao-mvc-java-magazine/21995)

# Engenharia de Software II - 18/05/22

`Comunicação entre front e back`

-   O front é o cliente
-   O back é o servidor

-   O HTML vai se comunicar pelo JAVA através do JSON
-   As requisições são feitas pelo JAVA, que estão hospedados no App server (Tomcat)

> Se tivessemos um milhão de requisições?

-   Não, pois o servidor é muito lento
-   Não adianta aumentar a memória RAM do servidor
-   Precisamos focar na cloud computing elastich
-   Precismaos criar uma máquina virtual dentro da nuvem, e verficamos a quantidade de requisições que entram através do Gateway

`Dao (Data Access Object)`

-   É um objeto que representa a conexão com o banco de dados

# Engenharia de Software II - 25/05/22

`Objetos persistentes`

-   Tem uma existencia que perdura durante várias execuções de sistema
-   Precisam ser armazenados e recuperados
-   Tipicamente objetos de entidade

`Objetos transientes`

-   Existem somente na memória principal
-   Objetos de controle e objetos de fronteira
-   Criptografia

`Thread`

-   Toda vez que um usuáro se conecta ao banco de dados, criamos uma execução paralela no processador que é feita de forma individual
-   Criar um espaço de memória para executar ações individuais

