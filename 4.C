#include <stdio.h>

int main() {
    float A, B, C;

    printf("Digite os valores dos lados do triângulo (A, B, C): ");
    scanf("%f %f %f", &A, &B, &C);

    if (A + B > C && A + C > B && B + C > A) {
        if (A == B && B == C) {
            printf("É um triângulo equilátero.\n");
        } else if (A != B && B != C && A != C) {
            printf("É um triângulo escaleno.\n");
        } else {
            printf("É um triângulo isósceles.\n");
        }
    } else {
        printf("Não é um triângulo.\n");
    }

    return 0;
}