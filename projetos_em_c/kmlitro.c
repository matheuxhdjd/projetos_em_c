#include <stdio.h>
 
int main() {
    int horas, km;
    double litros, dist, cons;
    scanf("%i", &horas);
    scanf("%i", &km);
    dist= horas * km;
    cons=12;
    litros= dist/cons;
    printf("%.3lf\n", litros);
    return 0;
}