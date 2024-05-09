/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int vetor1[5], vetor2[5], vetor3[10];
    int i, j;

    // Lê os elementos do primeiro vetor
    printf("Digite os elementos do primeiro vetor:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &vetor1[i]);
    }

    // Lê os elementos do segundo vetor
    printf("Digite os elementos do segundo vetor:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &vetor2[i]);
    }

    // Gera o terceiro vetor com os valores intercalados
    j = 0;
    for(i = 0; i < 5; i++) {
        vetor3[j++] = vetor1[i];
        vetor3[j++] = vetor2[i];
    }

    // Imprime o terceiro vetor
    printf("Terceiro vetor intercalado:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", vetor3[i]);
    }
    printf("\n");

    return 0;
}

