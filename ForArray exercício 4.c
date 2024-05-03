/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <ctype.h> // Biblioteca para usar a função isalpha

int main() {
    char vetor[10];
    int i, contador_consoantes = 0;

    // Lendo os caracteres do vetor
    printf("Digite 10 caracteres:\n");
    for (i = 0; i < 10; i++) {
        printf("Caractere %d: ", i + 1);
        scanf(" %c", &vetor[i]); // Usamos espaço antes do %c para ignorar espaços em branco
    }

    // Verificando se cada caractere é uma consoante
    for (i = 0; i < 10; i++) {
        char c = tolower(vetor[i]); // Convertendo para minúscula para facilitar a comparação
        if (isalpha(c) && c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            contador_consoantes++;
            printf("Consoante encontrada: %c\n", vetor[i]);
        }
    }

    printf("Quantidade de consoantes lidas: %d\n", contador_consoantes);

    return 0;
}


