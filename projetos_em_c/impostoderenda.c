#include <stdio.h>


double
inss (double salario)
{
  double valor_inss = 0;
  if (salario <= 1320.00)
    {
      valor_inss = (salario * 0.075);
    }
  else if (salario > 1320.01 && salario < 2571.29)
    {
      valor_inss = (salario * 0.09);
    }
  else if (salario > 2571.30 && salario < 3856.94)
    {
      valor_inss = (salario * 0.12);
    }
  else if (salario > 3856.95 && salario < 7507.49)
    {
      valor_inss = (salario * 0.14);
    }
  else
    {
      valor_inss = 7507.49 * 0.14;
    }
  return valor_inss;
}

int
deducao (int total)
{
  return total * 189.59;
}

double
imposto (double imposto_total)
{
  double impost = 0;
  if (imposto_total <= 2112.00)
    {
      impost = 0;
    }
  else if (imposto_total > 2112.01 && imposto_total < 2826.65)
    {
      impost = (imposto_total * 0.075);
    }
  else if (imposto_total > 2826.66 && imposto_total < 3751.05)
    {
      impost = (imposto_total * 0.15);
    }
  else if (imposto_total > 3751.06 && imposto_total < 3664.68)
    {
      impost = (imposto_total * 0.22);
    }
  else
    {
      impost = (imposto_total * 0.27);
    }
  return impost;
}

int
main ()
{
  int dependentes;
  double salario, liquido, dedu, liquido_total, imposto_final;
  printf ("Escreva seu salario bruto\n");
  scanf ("%lf", &salario);
  printf ("Escreva seu numero de dependentes\n");
  scanf ("%i", &dependentes);
  liquido = inss (salario);
  dedu = deducao (dependentes);
  liquido_total = salario - liquido - dedu;

  printf ("%.2lf\n", liquido_total);
  imposto_final = imposto (liquido_total);
  printf ("%.2lf\n", imposto_final);
  return 0;
}
