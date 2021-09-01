#include <stdio.h>
 
int main() {
 
    double salario, reajuste, salarioFinal;
    int porcentagem;
    char p = '%';

    scanf("%lf", &salario);

    if (salario > 0 && salario <= 400.00)
    {
        reajuste = salario * 0.15;
        salarioFinal = salario + reajuste;
        porcentagem = 15;
    }
    else if (salario > 400.00 && salario <= 800.00)
    {
        reajuste = salario * 0.12;
        salarioFinal = salario + reajuste;
        porcentagem = 12;
    }
    else if (salario > 800.00 && salario <= 1200.00)
    {
        reajuste = salario * 0.10;
        salarioFinal = salario + reajuste;
        porcentagem = 10;
    }
    else if (salario > 1200.00 && salario <= 2000.00)
    {
        reajuste = salario * 0.07;
        salarioFinal = salario + reajuste;
        porcentagem = 7;
    }
    else if (salario > 2000.00)
    {
        reajuste = salario * 0.04;
        salarioFinal = salario + reajuste;
        porcentagem = 4;
    }

    printf("Novo salario: %.2lf\n", salarioFinal);
    printf("Reajuste ganho: %.2lf\n", reajuste);
    printf("Em percentual: %d %%\n", porcentagem);
 
    return 0;
}