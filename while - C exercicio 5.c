/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int mes;

    do {
        printf("Digite um número entre 1 e 12: ");
        scanf("%d", &mes);

        if (mes < 1 || mes > 12) {
            printf("Número inválido. Tente novamente.\n");
        }
    } while (mes < 1 || mes > 12);

    switch (mes) {
        case 1:
            printf("1- janeiro\n");
            break;
        case 2:
            printf("2- fevereiro\n");
            break;
        case 3:
            printf("3- março\n");
            break;
        // ... (continuar para os demais meses)
        case 12:
            printf("12- dezembro\n");
            break;
    }

    return 0;
}
