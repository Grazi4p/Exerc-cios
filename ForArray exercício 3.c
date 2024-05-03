/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    float notas[4];
    float soma = 0;
    int i;

    // Lendo as notas do usuário
    for (i = 0; i < 4; i++) {
        printf("Digite a %da nota: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i]; // Somando as notas para calcular a média
    }

    // Exibindo as notas
    printf("\nNotas digitadas:\n");
    for (i = 0; i < 4; i++) {
        printf("Nota %d: %.1f\n", i + 1, notas[i]);
    }

    // Calculando a média
    float media = soma / 4;
    printf("\nMédia das notas: %.2f\n", media);

    return 0;
}

