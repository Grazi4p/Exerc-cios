/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int totalAlunos;
    float peso, somaPesos = 0;
    int contador = 0;

    printf("Quantos alunos você tem na academia? ");
    scanf("%d", &totalAlunos);

    while (contador < totalAlunos) {
        printf("Digite o peso do aluno %d (em kg): ", contador + 1);
        scanf("%f", &peso);

        somaPesos += peso;
        contador++;
    }

    if (totalAlunos > 0) {
        float mediaPeso = somaPesos / totalAlunos;
        printf("A média de peso dos alunos é: %.2f kg\n", mediaPeso);
    } else {
        printf("Nenhum aluno informado.\n");
    }

    return 0;
}
