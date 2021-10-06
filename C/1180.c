#include <stdio.h>

int main() {
    int n, i;

    scanf("%d",&n);

    int v[n];

    scanf("%d", &v[0]);

    int menor = v[0], p = 0;

    for(i = 1; i < n; i++) {
        scanf("%d", &v[i]);
        if (v[i] < menor){
            p = i;
            menor = v[i];
        }
    }
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", p);
    return 0;
}