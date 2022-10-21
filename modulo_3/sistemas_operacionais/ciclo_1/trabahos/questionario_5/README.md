- 1. Considere um espaço de endereços lógico de 256 páginas de 4KB cada, mapeadas em uma memória física de 64 quadros.

`temos o espaço de memmória lógica e os endereços físicos que estão na memória principal`

a. Quantos bits são necessários para o endereço lógico?

`1024 = 10 elevado a 10 = kb`
`4 = 2 elevado a 2`

```
4 * 1024
2 elevado a 2 * 2 elevado 10 = 2 elevado 12

256 páginas * 4096
2 elevado 8(pagina) * 2 elevado 12(deslocamento)

2 elevado 20
```

> 13

b. Quantos bits são necessários para o endereço físico?

> 15

```
Para endereçar uma informação dentro de uma página de 1k

- Precisamos de 10 bits. (210 = 1024 posições)
- Para endereçar as 8 páginas
- Precisamos de 3 bits (23 = 8 posições)
- Para endereçar os 32 frames
- Precisamos de 5 bits (25 = 32 posições)
```

- 2. Em um sistema com paginação, um processo não pode acessar a memória que ele não possui. Por quê?

> Não, pois o mapeamento é feito por um único processo
> o que ele pode fazer, é extrapolar o tamanho de uma página, porém é muito difícil

- 3. Em que circunstâncias ocorrem falhas de página? Descreva as ações tomadas pelo sistema operacional quando ocorre uma falha de página.

`o que é uma falha de página`

> O hardware gera interrupções de falta de página quando: a página correspondente ao endereço requisitado não está carregada na memória; a página correspondente ao endereço de memória acessado está carregada, mas o seu estado corrente não foi atualizado no hardware.

- 4. Uma visão simplificada dos estados de um processo é “Pronto”, “Em Execução” e : “Bloqueado”, nos quais respectivamente o processo está pronto e aguardando para ser executado, está em execução no processador ou está bloqueado (por exemplo, aguardando uma operação de E/S). Supondo que um processo esteja no estado “Em Execução”, responda seguintes perguntas e explique sua resposta:

  - a. O encadeamento mudará de estado se ocorrer uma falha de página? Se sim, para que estado vai mudar?

  > Sim, vai para bloqueado

  - b. O encadeamento mudará de estado se uma referência de endereço for resolvida na tabela de páginas? Em caso afirmativo, a que estado irá mudar?

  > Não acontece nada, pois o endereço vai ser resolvido e o processo continua sua execução

- 5. O que é “Thrashing” ?

> Em ciência da computação, thrashing é a situação onde uma grande quantidade de recurso computacional é utilizada para fazer uma quantidade mínima de trabalho, com o sistema em um estado contínuo de contenção de recursos.

- 6. O gerenciador de memória tem como objetivo principal fornecer aos processos um espaço de endereçamento. Este espaço oferece um conjunto de endereços virtuais que precisam ser convertidos para endereços físicos antes de o processador acessar a memória física. Há alguma forma de implementar multiprogramação sem a utilização de endereços virtuais? Justifique.

- 7. Se tivermos um computador com apenas 32K de memória e que gere endereços virtuais de até 64K (endereços de 16 bits) e considerando que cada página deva ter 4096 bytes, teremos a seguinte situação (K = 1024bytes): Baseando-se nesse modelo, podemos visualizar os procedimentos de conversão aplicado a uma instrução de movimento de dados entre a memória e um registrador.

```
Instrução: MOVE REG,20500

1. O endereço virtual 20500 é mandado ao MMU
2. O MMU identifica que este endereço está na página 5
3. Esta página está mapeada no frame 3 da memória física
4. O MMU transforma o endereço virtual 20500 (20K + 20) no endereço real 12308 (12K + 20)

A instrução final será: MOVE REG,12308
```

- A) Mostre como ocorre a tradução do endereço virtual 8204?

- B) Quantas páginas terá a tabela de página considerando endereços virtuais de 32 bits e o tamanho de página de 4kbytes?

- C) A tradução do endereço virtual em endereço físico gera um acesso extra, para cada acesso do processador à memória física, pois a MMU precisa consultar a tabela de páginação. Qual mecanismo foi criado para diminuir este trabalho extra?

# Concurso

1. Acerca da memória principal, assinale a alternativa correta:

   (A) As memórias são formadas por um conjunto de células e, nele, cada célula tem
   um endereço fixo. Diz se que, se uma memória tiver n células, elas terão‐
   endereços de 0 a n + 1.

   (B) Devido ao seu grau de importância para o computador, as memórias não
   cometem erros, uma vez que dispõem de mecanismos que os evitam.
   (C) A memória principal não é de acesso aleatório.

   (D) Tanto os programas quanto os dados são armazenados na memória.

   (E) Parte de uma memória não pode ser usada como um buffer, uma vez que essa
   não é a sua finalidade dentro do sistema de computação.

   > LETRA D

2. Com relação a sistemas operacionais, julgue os itens seguintes:
   O gerenciador de memória do Linux é o responsável pela atribuição de áreas de
   troca (swap) para processos, para os demais componentes do kernel e para o cachê
   de disco, além de implementar multitarefa por intermédio da troca de processos
   ativos no processador.

   (C) Certo
   (E) Errado

   > CORRETO

3. Julgue os itens seguintes quanto às noções básicas de sistemas operacionais, à
   gerência de memória, ao sistema de E/S e aos sistemas de arquivos. O método para
   lidar com a sobrecarga de memória denominado de memória virtual consiste em
   trazer, em sua totalidade, cada processo para a memória, executá lo durante um‐
   certo tempo e, então, devolvê lo ao disco.‐

   (C) Certo
   (E) Errado

   > ERRADO

4. A respeito de memória virtual, assinale a opção correta:

   (A) A memória virtual utiliza a técnica de cache em disco para prever a próxima
   instrução a ser executada na memória RAM.

   (B) A memória virtual realiza sua gestão por intermédio da técnica denominada
   escalonamento não preemptivo.

   (C) Quando a memória RAM é insuficiente para executar um programa, a memória
   virtual move os dados da RAM para um espaço em disco chamado arquivo de
   paginação.

   (D) Como o computador pode ler dados da memória secundária com muito mais
   rapidez do que os da memória RAM, a melhor solução para se aumentar a
   velocidade de processamento é adicionar mais espaço em disco.

   (E) A técnica de paginação consiste em se dividir o espaço do disco em blocos de
   tamanhos variados para a execução de programas muito grandes.

   > LETRA C

5. A principal função do MMU (Memory Management Unit – Unidade de Gerenciamento
   de Memória) é:

   (A) criar e gerenciar a memória virtual, também denominada SWAP virtual;

   (B) mapear os endereços virtuais gerados por programas para endereços físicos na
   memória;

   (C) definir o tamanho máximo e mínimo dos quadros de paginação de memória virtual;

   (D) reservar espaço de memória na execução de um programa;

   (E) liberar espaço reservado após a execução de um programa.

   > LETRA B

6. No âmbito dos sistemas operacionais, o termo “swapping” refere-se a um
   mecanismo que:

   (A) permite a utilização de dispositivos de entrada/saída externos;

   (B) permite a abertura simultânea de várias páginas Web por meio do browser;

   (C) faz parte do gerenciamento de memória;

   (D) gerencia o sistema de arquivos;

   (E) gerencia a sincronização em ambientes virtualizados.

   > LETRA C

7. Com respeito a memória virtual, considere:

   I. As translações mais frequentes ficam armazenadas em uma pequena memória
   associativa chamada TLB (Translation Lookaside Buffer).

   II. O método mais usual utilizado pela memória virtual é a divisão do espaço de
   endereçamento em páginas de tamanho variável, que são a unidade de transferência
   entre a memória principal e a memória cache.

   III. A memória virtual também faz a translação de endereços virtuais em endereços
   reais, já que os programas normalmente enxergam um espaço de endereçamento
   maior que a memória física.

   IV. A memória virtual é um conjunto de hardware e de rotinas do sistema
   operacional. Além do controle da hierarquia entre a memória principal e a memória
   secundária, ela realiza a proteção, evitando que um programa modifique
   informações que pertençam a algum outro.

   Está correto o que consta APENAS em

   (A) I, II e III.

   (B) I e II.

   (C) II, III e IV.

   (D) III e IV.

   (E) I, III e IV.

   > LETRA E

8. Em relação ao gerenciamento de memória, sistemas operacionais adotam diversas
   estratégias para permitir que a memória principal seja aproveitada ao máximo. A
   estratégia de carregar um programa para a memória principal e, após certo tempo,
   devolvê-lo para o disco liberando a memória para outro processo, é conhecida
   como:

   (A) spool;

   (B) buffer;

   (C) swapping;

   (D) cache.

   > LETRA C

9. Julgue os itens a seguir, acerca de sistemas operacionais.
   A memória virtual corresponde ao espaço de endereçamento lógico reservado por
   uma máquina virtual criada pelo sistema operacional.

   (C) Certo

   (E) Errado

   > CORRETO

10. No gerenciamento de sistemas operacionais, o sistema de memória deve manter
    controle de quais partes da memória que estão sendo utilizados e por quem.

    (C) Certo

    (E) Errado

    > CERTO

11. No gerenciamento de sistemas operacionais, o sistema de memória deve decidir
    quais processos, ou partes deles, e dados devem ser removidos da memória.

    (C) Certo

    (E) Errado

    > CERTO

12. Em situações onde há numerosos processos simultâneos, o sistema pode entrar em
    thrashing, gerando um impacto negativo no desempenho. Sobre thrashing, assinale a
    alternativa correta.

    (A) É caracterizado por trocas consecutivas de contexto, independentemente do uso
    da RAM.

    (B) Pode ser mitigado, aumentando o tamanho do swap.

    (C) Ocorre com maior frequência em sistemas cujo quantum de processador para
    cada processo ativo é elevado, diminuindo as trocas de contexto e,
    consequentemente, a taxa de uso do processador.

    (D) Ocorre quando muitas faltas de página são encontradas consecutivamente,
    forçando a realização constante de trocas de página, aumentando o tempo de acesso
    à RAM.

    (E) É caracterizado por um aumento repentino na taxa de uso do processador.

    > LETRA D
