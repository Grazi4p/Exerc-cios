/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int numero;
    long long fatorial = 1; // Inicializa o fatorial com 1 (para evitar overflow)

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    // Verifica se o número é positivo
    if (numero < 0) {
        printf("Número inválido. Digite um número positivo.\n");
    } else {
        // Calcula o fatorial
        for (int i = 1; i <= numero; i++) {
            fatorial *= i;
        }

        printf("O fatorial de %d é %lld.\n", numero, fatorial);
    }

    return 0;
}