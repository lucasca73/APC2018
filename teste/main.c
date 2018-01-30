#include <stdio.h>
int main()
{
  double salario;
  scanf("%lf", &salario);
  if (salario <= 400.00)
  {
    printf("Novo salario: %.2lf\n", salario*1.15);
    printf("reajuste ganho: %.2lf\n", salario*1.15-salario);
    printf("Em percentual: 15 %%\n");
  }
  else if (salario > 400.00 && salario <= 800.00)
  {
    printf("Novo salario: %.2lf\n", salario*1.12);
    printf("reajuste ganho: %.2lf\n", salario*1.12-salario);
    printf("Em percentual: 12 %%\n");
  }
  else if(salario > 800.00 && salario <= 1200.00)
  {
    printf("Novo salario: %.2lf\n", salario*1.1);
    printf("reajuste ganho: %.2lf\n", salario*1.1-salario);
    printf("Em percentual: 10 %%\n");
  }
  else if(salario > 1200.00 && salario <= 2000.00)
  {
    printf("Novo salario: %.2lf\n", salario*1.07);
    printf("reajuste ganho: %.2lf\n", salario*1.07-salario);
    printf("Em percentual: 7 %%\n");
  }
  else
  {
    printf("Novo salario: %.2lf\n", salario*1.04);
    printf("reajuste ganho: %.2lf\n", salario*1.04-salario);
    printf("Em percentual: 4 %%\n");
  }
  
    return 0;
}