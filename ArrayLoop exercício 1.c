/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    int numeros[5];
    int i, busca;

    // Solicita ao usuário que insira 5 números e os armazena no array
    printf("Digite 5 números:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
    }

    // Solicita ao usuário que insira o número a ser buscado
    printf("Digite um número para buscar: ");
    scanf("%d", &busca);

    // Verifica se o número da busca está no array
    int encontrado = 0;
    for(i = 0; i < 5; i++) {
        if(numeros[i] == busca) {
            encontrado = 1;
            break;
        }
    }

    // Apresenta o resultado da busca
    if(encontrado) {
        printf("O número está presente no array.\n");
    } else {
        printf("O número não está presente no array.\n");
    }

    return 0;
}
