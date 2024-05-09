/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int idade[5];
    float altura[5];
    int i;

    // Solicita a idade e a altura de 5 pessoas e armazena em seus respectivos vetores
    printf("Digite a idade e a altura de 5 pessoas:\n");
    for(i = 0; i < 5; i++) {
        printf("Pessoa %d:\n", i+1);
        printf("Idade: ");
        scanf("%d", &idade[i]);
        printf("Altura: ");
        scanf("%f", &altura[i]);
    }

    // Imprime a idade e a altura na ordem inversa à ordem lida
    printf("\nIdade e altura na ordem inversa:\n");
    for(i = 4; i >= 0; i--) {
        printf("Pessoa %d - Idade: %d, Altura: %.2f\n", 5-i, idade[i], altura[i]);
    }

    return 0;
}