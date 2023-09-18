#include <stdio.h>

int main() {
    float A, B, C;

    printf("Digite os valores dos lados do triângulo (A, B, C): ");
    scanf("%f %f %f", &A, &B, &C);

    if (A + B > C && A + C > B && B + C > A) {
        if (A * A == B * B + C * C || B * B == A * A + C * C || C * C == A * A + B * B) {
            printf("Triângulo Retângulo\n");
        } else if (A * A > B * B + C * C || B * B > A * A + C * C || C * C > A * A + B * B) {
            printf("Triângulo Obtusângulo\n");
        } else {
            printf("Triângulo Acutângulo\n");
        }
    } else {
        printf("Não é um triângulo.\n");
    }

    return 0;
}