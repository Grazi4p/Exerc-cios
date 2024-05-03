/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int i;
    float numeros[5];

    // Lendo os valores do vetor
    for (i = 0; i < 5; i++) {
        printf("Digite o %do número: ", i + 1);
        scanf("%f", &numeros[i]);
    }

    // Exibindo os valores do vetor na ordem inversa
    printf("\nValores do vetor na ordem inversa:\n");
    for (i = 4; i >= 0; i--) {
        printf("numeros[%d] = %.2f\n", i, numeros[i]);
    }

    return 0;
}
