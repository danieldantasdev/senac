1. Suponha que você esteja desenvolvendo um sistema que possua um endereço virtual de 32 bits com um tamanho de página de 4 KB (4096 bytes).

Você precisa desenvolver a função inicial para a MMU, para isso escreva um programa na linguagem C ou Java que pede um endereço virtual (em decimal ou hexadecimal) e exiba o número da página e deslocamento para o endereço fornecido em hexadecimal.

Seu programa (nomeado como "converte") pode ser executado da seguinte maneira:

$ ./converte

Entre com o endereço virtual: 19986

número da página = 4

deslocamento = 3602

Você deve entregar para avaliação o código fonte (em arquivo txt) e a tela com o resultado da execução do programa.

Dicas:

1. Escrever este programa exigirá o uso do tipo de dados apropriado para armazenar 32 bits. Sugiro você usar o tipo de dados "unsigned int" se usar a linguagem C.

2. Procure usar a operações lógicas bit-a-bit existentes em Java e C: >> (deslocamento para direita), & (E), | (OU) etc. Veja tutorias do uso dos operadores bit-a-bit em: ( use o Google Tradutor para ler em portugues)
   Linguagem Java - https://www.geeksforgeeks.org/bitwise-operators-in-java/  
   Linguagem C - https://www.geeksforgeeks.org/bitwise-operators-in-c-cpp/

3. Conversão hexadecimal para decimal e vice versa

Use scanf para receber o número e printf, é só formatar o resultado com %X para hexadecimal.

decimal2hexadecimal () {
int d;

    printf ("\tEntre com um numero decimal: ");
    scanf ("%d",&d);
    printf ("\tA conversao do numero %d em hex e %2X:\n",d,d);

}
