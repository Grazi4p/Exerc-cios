/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int codigo_produto, quantidade;
    float valor_unitario, valor_total;

    printf("Bem-vindo(a) à Lanchonete!\n");
    printf("Cardápio:\n");
    printf("100 - Cachorro Quente -> R$1.20\n");
    printf("101 - Bauru Simples -> R$1.30\n");
    printf("102 - Bauru com Ovo -> R$1.50\n");
    printf("103 - Hambúrguer -> R$1.20\n");
    printf("104 - Cheeseburguer -> R$1.70\n");
    printf("105 - Suco -> R$2.20\n");
    printf("106 - Refrigerante -> R$1.00\n");

    printf("Digite o código do produto: ");
    scanf("%d", &codigo_produto);

    switch (codigo_produto) {
        case 100:
            valor_unitario = 1.20;
            break;
        case 101:
            valor_unitario = 1.30;
            break;
        case 102:
            valor_unitario = 1.50;
            break;
        case 103:
            valor_unitario = 1.20;
            break;
        case 104:
            valor_unitario = 1.70;
            break;
        case 105:
            valor_unitario = 2.20;
            break;
        case 106:
            valor_unitario = 1.00;
            break;
        default:
            printf("Produto não registrado no sistema.\n");
            return 0;
    }

    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    valor_total = valor_unitario * quantidade;
    printf("Valor Total: R$ %.2f\n", valor_total);

    return 0;
}

