/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    float nota1, nota2, soma, media;

    printf("Digite a primeira nota (valor decimal): ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota (valor decimal): ");
    scanf("%f", &nota2);

    // Soma das notas
    soma = nota1 + nota2;

    // Cálculo da média
    media = soma / 2;

    printf("A média das notas é: %.2f\n", media);

    return 0;
}
