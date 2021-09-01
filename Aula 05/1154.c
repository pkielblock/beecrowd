#include <stdio.h>
 
int main() {
 
    int idade, i = 0;
    double media, count = 0;

    while (1)
    {
        scanf("%d", &idade);

        if (idade > 0)
        {
            count++;
            i += idade;
        }
        else
        {
            media = i / count;
            printf("%.2lf\n", media);
            return 0;
        }
        
    }   
}