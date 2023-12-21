#include <stdio.h>

// Função para verificar se um número é primo
int ehPrimo(int numero) {
    if (numero <= 1) {
        return 0; // Representa falso
    }

    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return 0; // Representa falso
        }
    }

    return 1; // Representa verdadeiro
}

// Função para calcular a velocidade da nave com base no peso do combustível
int calcularVelocidade(int peso) {
    int velocidade = 0;
    int numero = peso;

    while (peso > 0) {
        if (ehPrimo(numero)) {
            velocidade += numero;
            peso--;
        }
        numero++;
    }

    return velocidade;
}

int main() {
    int peso;
    int distancia = 60000000; // Distância da Terra até Marte em km

    // Solicita ao usuário para fornecer o peso do combustível
    printf("Digite o peso do combustivel (entre 1000 e 60000): ");
    scanf("%d", &peso);

    // Calcula a velocidade da nave
    int velocidade = calcularVelocidade(peso);

    // Calcula o tempo aproximado em horas e dias
    double tempoHoras = (double)distancia / velocidade;
    double tempoDias = tempoHoras / 24;

    // Exibe o resultado
    printf("Velocidade da nave: %d km/h\n", velocidade);
    printf("Tempo aproximado de viagem: %.2f horas (%.2f dias)\n", tempoHoras, tempoDias);

    return 0;
}
