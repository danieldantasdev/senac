# Programação I - 11/03/22

-   Basicamente aprendemos Java, com Reinaldo José Freitas
-   Trabalhando com clipper summer 87

## Unidade Curricular

-   A aplicação dos conceitos de orientação a objetos e versionamento de código no desenvolvimento de software é de fundamental importância para o profissional que deseja atuar como desenvolvedor de sistemas
-   Orientação a objetos
-   Versionamento de códigos no desenvolvimento de aplicações desktop utilizando a linguagem Java

## Trabalhos

-   08/04 (Trabalho 1)
-   06/05 (Prova 1)
-   10/06 (Trabalho 2)
-   24/06 (Prova 2)
-   08/07 (Fechamento do conceito final)

`Formas de avaliação`

> `Trabalhos 1 e 2` (Trabalhos em grupo)
> `Provas 1 e 2` (Prova individual)

`Peso`

> `Trabalhos 1 e 2` (Peso 1)
> `Provas 1 e 2` (Peso 2)

---

# Programação I - 18/03/22

`Java`

- Java é uma linguagem de programação e plataforma
computacional lançada pela primeira vez pela Sun
Microsystems em 1995. A Sun foi adquirida pela
Oracle em 2009

- O Java é uma tecnologia usada para desenvolver
aplicações que tornam a Web mais divertida e útil. O
Java não é a mesma coisa que o javascript., que é
uma tecnologia simples usada para criar páginas Web
e normalmente é executado no seu browser

**Oracle é a dona do maior banco de dados no mercado e dos anos 90 para cá, a mesma vem comprando várias empresas**

- [Seguem alguns links sobre a linguagem Java](http://www.oracle.com/technetwork/java/)
- [Oracle](http://www.oracle.com/technetwork/java/)

-  Totalmente `orientada a objetos`, permitindo a herança e a reutilização de código
**O lado bom é que temos uma reutilização de código muito grande, foi feito para não escrevermos código duas vezes**
**O lado ruim é que não podemos ter outra opção, Java é necessariamente orientado a objetos**
-  Derivada da linguagem C e C++, o que facilita a troca de informações
-  Grande volume de frameworks que facilitam e aumentam a produtividade no desenvolvimento
-  É multiplataforma, podendo ser executado em diversos sistemas operacionais (portabilidade)

                    -> Compilação - Código binário para o SO-1 -> Execução - SO-1
Código C ou Pascal 
                    -> Compilação - Código binário para o SO-2 -> Execução - SO-2
                    

                                               -> Execução - Máquina virtual do SO-1
Código fonte em Java -> Compilação - Bytecode 
                                               -> Execução - Máquina virtual do SO-2
                                         
## Componentes do Java

- JVM (Java Virtual Machine): É a máquina virtual do Java. Não existe download
em separado para ela, visto que ela vem junto com outros componentes do Java

- JRE (Java Runtime Environment): É o ambiente de execução do Java. É
formado pela JVM e bibliotecas. É o que é necessário para executar uma
aplicação Java

- JDK (Java Platform, Standard Edition Development Kit: É o kit de
desenvolvimento para Java. É formado pelo JRE e as ferramentas do compilador
Java

## Eclipse

`View`

- View são as janelas que aparecem do lado do menu

`Perspectiva`

- Conjunto dessas janelas, é o menu em si, podemos definir didaticamente com a estética do Eclipse

**Todo programa Java é executado através de classes que conterão o código fonte de todos os meus programas**

`Projeto em Java`

- Conjunto de programas

`Programas em Java`

- É a classe propriamente dita, e essas classe segue todas as regras que regem a orientação a objetos

---

# Programação I - 25/03/22

- Estamos revendo um pouco o conceito da aula passada em relação as classes de execução para execução de um programa

`Quick Fiks`

- Correções rápidas, ou seja, o nome da classe tem que ser o mesmo do nome do programa

[Diferenças entre .classe, .java e .jar](https://www.guj.com.br/t/diferenca-dentre-class-jar-java-e-outras/68261)

`Para execução de uma classe`

- Para executar uma classe precisamos de um método no mínimo chamado main

`Tipos primitivos de dados em Java`

- Booleano: Aceita apenas valores lógicos.
- boolean: Aceita apenas true ou false.
- Caracter: Aceita apenas um caracter.
- char: ocupa um caracter de 16 bits.

- > Inteiros: Aceita apenas valores inteiros, positivos ou
negativos.
- byte: ocupa 1 byte.
- short: ocupa 2 bytes.
- int: ocupa 4 bytes.
- long: ocupa 8 bytes.

- > Reais: Aceita valores não inteiros, positivos ou negativos.
- float: ocupa 4 bytes.
- double: ocupa 8 bytes.
