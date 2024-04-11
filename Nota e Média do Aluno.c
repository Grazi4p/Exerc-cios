
#include <stdio.h>

int main() {
    float nota1, nota2, media;

    // Solicita as duas notas ao usuário
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    // Calcula a média das notas
    media = (nota1 + nota2) / 2;

    // Verifica se a média é maior ou igual a 7
    if (media >= 7.0) {
        printf("O aluno foi aprovado com média %.2f.\n", media);
    } else {
        printf("O aluno foi reprovado com média %.2f.\n", media);
    }

    return 0;
}