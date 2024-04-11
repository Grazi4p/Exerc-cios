/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int mes;

    printf("Digite o número do mês (1 a 12): ");
    scanf("%d", &mes);

    switch (mes) {
        case 2:
            printf("Fevereiro tem 28 dias.\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("Este mês tem 30 dias.\n");
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("Este mês tem 31 dias.\n");
            break;
        default:
            printf("Número de mês inválido. Digite um valor entre 1 e 12.\n");
            break;
    }

    return 0;
}

