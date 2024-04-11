/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main() {
    float numero;

    printf("Digite um número: ");
    scanf("%f", &numero);

    if (numero >= 0) {
        float raiz = sqrt(numero);
        printf("A raiz quadrada de %.2f é %.2f\n", numero, raiz);
    } else {
        printf("Número inválido! A raiz quadrada não pode ser calculada para números negativos.\n");
    }

    return 0;
}

