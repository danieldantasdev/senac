// Online C compiler to run C program online
#include <stdio.h>
   

int main() {
    // Write C code here
    int index = 0;
    
// Enquanto os caracteres forem iguais, corre os vectores.
    while( a[index] == b[index] ) {
    // Verifica se alguma das strings terminou.
    // Se sim, sai do loop. Caso contrario, analisa o próximo carácter.
        if( a[index] == '\0' || b[index] == '\0' )
            break;
            ++index;
    }

// Se ambos terminaram, as strings contidas são iguais.
    if( a[index] == '\0' && b[index] == '\0' )
        return 0;
    else
        return -1;
}