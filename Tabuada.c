/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


#include <stdio.h>

int main() {
    int num, i;

    // Solicita ao usuário que insira um número entre 1 e 10
    do {
        printf("Digite um valor entre 1 e 10: ");
        scanf("%d", &num);
    } while (num < 1 || num > 10);

    // Calcula e imprime a tabuada
    for (i = 1; i <= 10; i++) {
        printf("%d X %d = %d\n", num, i, num * i);
    }

    return 0;
}

