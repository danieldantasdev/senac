-   1. Considere um espaço de endereços lógico de 256 páginas de 4KB cada, mapeadas em uma memória física de 64 quadros.

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

-   2. Em um sistema com paginação, um processo não pode acessar a memória que ele não possui. Por quê?

> Não, pois o mapeamento é feito por um único processo
> o que ele pode fazer, é extrapolar o tamanho de uma página, porém é muito difícil

-   3. Em que circunstâncias ocorrem falhas de página? Descreva as ações tomadas pelo sistema operacional quando ocorre uma falha de página.

`o que é uma falha de página`

> O hardware gera interrupções de falta de página quando: a página correspondente ao endereço requisitado não está carregada na memória; a página correspondente ao endereço de memória acessado está carregada, mas o seu estado corrente não foi atualizado no hardware.

-   4. Uma visão simplificada dos estados de um processo é “Pronto”, “Em Execução” e : “Bloqueado”, nos quais respectivamente o processo está pronto e aguardando para ser executado, está em execução no processador ou está bloqueado (por exemplo, aguardando uma operação de E/S). Supondo que um processo esteja no estado “Em Execução”, responda seguintes perguntas e explique sua resposta:

    -   a. O encadeamento mudará de estado se ocorrer uma falha de página? Se sim, para que estado vai mudar?

    > Sim, vai para bloqueado

    -   b. O encadeamento mudará de estado se uma referência de endereço for resolvida na tabela de páginas? Em caso afirmativo, a que estado irá mudar?

    > Não acontece nada, pois o endereço vai ser resolvido e o processo continua sua execução

-   5. O que é “Thrashing” ?

> Em ciência da computação, thrashing é a situação onde uma grande quantidade de recurso computacional é utilizada para fazer uma quantidade mínima de trabalho, com o sistema em um estado contínuo de contenção de recursos.

-   6. O gerenciador de memória tem como objetivo principal fornecer aos processos um espaço de endereçamento. Este espaço oferece um conjunto de endereços virtuais que precisam ser convertidos para endereços físicos antes de o processador acessar a memória física. Há alguma forma de implementar multiprogramação sem a utilização de endereços virtuais? Justifique.

-   7. Se tivermos um computador com apenas 32K de memória e que gere endereços virtuais de até 64K (endereços de 16 bits) e considerando que cada página deva ter 4096 bytes, teremos a seguinte situação (K = 1024bytes): Baseando-se nesse modelo, podemos visualizar os procedimentos de conversão aplicado a uma instrução de movimento de dados entre a memória e um registrador.

```
Instrução: MOVE REG,20500

1. O endereço virtual 20500 é mandado ao MMU
2. O MMU identifica que este endereço está na página 5
3. Esta página está mapeada no frame 3 da memória física
4. O MMU transforma o endereço virtual 20500 (20K + 20) no endereço real 12308 (12K + 20)

A instrução final será: MOVE REG,12308
```

-   A) Mostre como ocorre a tradução do endereço virtual 8204?

-   B) Quantas páginas terá a tabela de página considerando endereços virtuais de 32 bits e o tamanho de página de 4kbytes?

-   C) A tradução do endereço virtual em endereço físico gera um acesso extra, para cada acesso do processador à memória física, pois a MMU precisa consultar a tabela de páginação. Qual mecanismo foi criado para diminuir este trabalho extra?
