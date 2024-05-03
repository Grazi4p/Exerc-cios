/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int numeros[5];
    int par[5], impar[5];
    int i, cont_par = 0, cont_impar = 0;

    // Solicita ao usuário que insira os 5 números
    for (i = 0; i < 5; i++) {
        printf("Digite o %do número: ", i + 1);
        scanf("%d", &numeros[i]);

        // Verifica se o número é par ou ímpar
        if (numeros[i] % 2 == 0) {
            par[cont_par] = numeros[i];
            cont_par++;
        } else {
            impar[cont_impar] = numeros[i];
            cont_impar++;
        }
    }

    // Exibe os vetores
    printf("\nNúmeros digitados:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\n\nNúmeros pares:\n");
    for (i = 0; i < cont_par; i++) {
        printf("%d ", par[i]);
    }

    printf("\n\nNúmeros ímpares:\n");
    for (i = 0; i < cont_impar; i++) {
        printf("%d ", impar[i]);
    }

    return 0;
}

