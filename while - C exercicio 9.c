/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    float saldo = 0.0;
    int opcao;
    float valor;

    do {
        printf("\nMenu de opções:\n");
        printf("1- Consulta\n");
        printf("2- Saque\n");
        printf("3- Depósito\n");
        printf("4- Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Saldo atual: R$ %.2f\n", saldo);
                break;
            case 2:
                printf("Digite o valor de saque: R$ ");
                scanf("%f", &valor);
                if (valor <= saldo) {
                    saldo -= valor;
                    printf("Saque realizado com sucesso!\n");
                } else {
                    printf("Saldo insuficiente para o saque.\n");
                }
                break;
            case 3:
                printf("Digite o valor de depósito: R$ ");
                scanf("%f", &valor);
                saldo += valor;
                printf("Depósito realizado com sucesso!\n");
                break;
            case 4:
                printf("Encerrando o programa. Obrigado!\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 4);

    return 0;
}
