/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int idade, tempo;

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    printf("Informe o tempo de serviço (em anos): ");
    scanf("%d", &tempo);

    if ((idade >= 65) || (tempo >= 30) || (idade >= 60 && tempo >= 25)) {
        printf("Você pode se aposentar!\n");
    } else {
        printf("Você não pode se aposentar!\n");
    }

    return 0;
}
