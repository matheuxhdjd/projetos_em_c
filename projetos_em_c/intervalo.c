#include <stdio.h>
 
int main() {
    double x;
    scanf("%lf", &x);
    if (x >= 0 && x <= 25.0000) {
        printf("Intervalo [0,25]\n");
    } else if (x > 25.00001 && x <= 50.00000) {
        printf("Intervalo (25,50]\n");
    } else if (x > 50.000000 && x <= 75.0000001) {
        printf("Intervalo (50,75]\n");
    } else if (x > 75.00000001 && x <= 100) {
        printf("Intervalo (75,100])\n");
    } else {
        printf("Fora de intervalo\n");
    }
    return 0;
}