#include <stdio.h>

int main()
{
int c, h, area;
printf("Escreva o comprimento do terreno \n");
scanf("%d", &c);
printf("Escreva a largura do terreno \n");
scanf("%d", &h);
area=c * h;
printf("a area do terreno retangular e %d\n", area);
return 0;
}