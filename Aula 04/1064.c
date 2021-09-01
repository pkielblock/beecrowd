#include <stdio.h>

int main() {
    double  valor, total = 0, media = 0;
    int cont, positivos = 0;
  
    for (cont = 1; cont <= 6; cont++) 
    {
        scanf("%lf", &valor);
        if (valor > 0) 
        {
            positivos += 1;
            total += valor;
        }
    }
    media = total / positivos;

    printf("%d valores positivos\n", positivos);
    printf("%.1lf\n", media);
    return 0;
}