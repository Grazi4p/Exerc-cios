/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int senhaCorreta = 1234; // Defina a senha correta aqui
    int senhaDigitada;

    do {
        printf("Digite a senha (4 dígitos): ");
        scanf("%d", &senhaDigitada);

        if (senhaDigitada == senhaCorreta) {
            printf("Senha Correta!\n");
            break; // Encerra o loop se a senha estiver correta
        } else {
            printf("Senha Incorreta. Tente novamente.\n");
        }
    } while (1); // Loop infinito até a senha correta ser digitada

    return 0;
}
