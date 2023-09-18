#include <stdio.h>
#include <math.h>

int main() {
    double x, resultado;

    printf("Digite o valor de x: ");
    scanf("%lf", &x);

    resultado = sqrt(2 * x + 3); // Exemplo de cálculo de f(x)

    printf("O valor de f(x) é: %.2lf\n", resultado);

    return 0;
}