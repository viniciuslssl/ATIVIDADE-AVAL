#include <stdio.h>

int main() {
    int habitantes = 0;
    float salario, mediaSalario = 0, mediaFilhos = 0;
    float maiorSalario = 0;
    int percentualAte100 = 0;

    do {
        printf("Digite o salário do habitante (ou valor negativo para encerrar): ");
        scanf("%f", &salario);

        if (salario >= 0) {
            habitantes++;
            mediaSalario += salario;

            if (salario <= 100) {
                percentualAte100++;
            }

            float filhos;
            printf("Digite o número de filhos do habitante: ");
            scanf("%f