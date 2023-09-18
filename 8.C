#include <stdio.h>

int main() {
    int alunos = 30;
    float notas1[alunos], notas2[alunos], notas3[alunos];
    float mediaPonderada, mediaGeral = 0;

    for (int i = 0; i < alunos; i++) {
        printf("Digite as notas do aluno %d (n1 n2 n3): ", i + 1);
        scanf("%f %f %f", &notas1[i], &notas2[i], &notas3[i]);

        mediaPonderada = (notas1[i] * 2 + notas2[i] * 4 + notas3[i] * 3) / 10;
        printf("Média ponderada do aluno %d: %.2f\n", i + 1, mediaPonderada);

        mediaGeral += mediaPonderada;

        if (mediaPonderada >= 7) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }
    }

    mediaGeral /= alunos;
    printf("Média geral da turma: %.2f\n", mediaGeral);

    return 0;
}