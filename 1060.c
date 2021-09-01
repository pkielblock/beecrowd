#include <stdio.h>

int main() {
    double valor, positivo = 0;

    scanf("%lf", &valor); 

    if(valor > 0)
    {
        positivo++;
    }

    scanf("%lf", &valor);

    if(valor > 0)
    {
        positivo++;
    }

    scanf("%lf", &valor);

    if(valor > 0)
    {
        positivo++;
    }

    scanf("%lf", &valor);

    if(valor > 0)
    {
        positivo++;
    }

    scanf("%lf", &valor);

    if(valor > 0)
    {
        positivo++;
    }

    scanf("%lf", &valor);

    if(valor > 0)
    {
        positivo++;
    }

    printf("%.0lf valores positivos\n", positivo);

    return 0;
}