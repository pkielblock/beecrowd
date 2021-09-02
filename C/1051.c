#include <stdio.h>
 
int main() {
 
    float renda, imposto;

    scanf("%f", &renda);

    if (renda > 0 && renda <= 2000.00)
    {
        printf("Isento\n");
    }
    else if(renda > 2000.00 && renda <= 3000.00)
    {
        imposto = (renda - 2000) * 0.08;
        printf("R$ %.2f\n", imposto);
    }
    else if(renda > 3000.00 && renda <= 4500.00)
    {
        imposto = (1000.0 * 0.08 + (renda - 3000.0) * 0.18);
        printf("R$ %.2f\n", imposto);
    }
    else
    {
        imposto = (1000.0 * 0.08 + 1500.0 * 0.18 + (renda - 4500.0) * 0.28);
        printf("R$ %.2f\n", imposto);
    }
 
    return 0;
}