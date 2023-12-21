#include <stdio.h>
 
int main() {
    int nome;
    double sf, mv, s;
    scanf("%i", &nome);
    scanf("%lf", &sf);
    scanf("%lf", &mv);
    s= (mv * 0.15/100) + sf;
    printf("TOTAL = R$ %.2lf\n", s);
    return 0;
}