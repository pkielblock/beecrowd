#include<stdio.h>

int main(){

    int qtde, n, in = 0, out = 0, i;

    scanf("%d", &qtde);

    for(i = 0; i < qtde; i++)
    {
        scanf("%d", &n);
        if (n >= 10 && n <= 20)
        {
            in++;
        }
        else
        {
            out++;
        }
    }

    printf("%d in\n", in);
    printf("%d out\n", out);
    
    return 0;
}