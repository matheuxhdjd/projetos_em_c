#include <stdio.h>

int main() {
    double valor;
    
    scanf("%lf", &valor);

    int notas[] = {100, 50, 20, 10, 5, 2, 1};
    double moedas[] = {0.5, 0.25, 0.1, 0.05, 0.01};

    for (int i = 0; i < 7; i++) {
    int quantidade = valor / notas[i];
    valor -= quantidade * notas[i];
    printf("%d nota(s) de R$%.2lf\n", quantidade, (double)notas[i]);
    }

    for (int i = 0; i < 5; i++) {
    int quantidade = valor / moedas[i];
    valor -= quantidade * moedas[i];
    printf("%d moeda(s) de R$%.2lf\n", quantidade, moedas[i]);
    }
    return 0;
}
