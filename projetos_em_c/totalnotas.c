#include <stdio.h>

int main()

{
   int notas,a,b,c,d,e,f,g,h,i,j,k,l,B,m,n,o,p,q,r,s,t,u;
   double valor, E;
   scanf ("%lf", &valor);

   notas=valor;

   a=notas/100;

   b=notas * 0.100;

   c=b/50;

   d=b * 0.50;

   e=d/20;

   f=d * 0.20;

   g=f/10;

   h=f * 0.10;

   i=h/5;

   j=h * 0.05;

   k=j/2;

   l=j * 0.02;

   E=valor*100;

   B=(int) E;

   m=B * 0.100;

   n=m/50;

   o=m * 0.50;

   p=o/25;

   q=o * 0.25;

   r=q/10;

   s=q * 0.10;

   t=s/5;

   u=s * 0.5;

   printf ("NOTAS:\n");

   printf ("%d nota(s) de R$ 100.00\n",a);

   printf ("%d nota(s) de R$ 50.00\n",c);

   printf ("%d nota(s) de R$ 20.00\n",e);

   printf ("%d nota(s) de R$ 10.00\n",g);

   printf ("%d nota(s) de R$ 5.00\n",i);

   printf ("%d nota(s) de R$ 2.00\n",k);

   printf ("MOEDAS:\n");

   printf ("%d moeda(s) de R$ 1.00\n",l);

   printf ("%d moeda(s) de R$ 0.50\n",n);

   printf ("%d moeda(s) de R$ 0.25\n",p);

   printf ("%d moeda(s) de R$ 0.10\n",r);

   printf ("%d moeda(s) de R$ 0.05\n",t);

   printf ("%d moeda(s) de R$ 0.01\n",u);

   return 0;

}