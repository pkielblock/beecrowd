#include <stdio.h>
#include <stdlib.h>

int main() {
 
    int n[10], i = 0, v;

    do
    {
        scanf("%d", &v);
    } while (v > 50);
    
    n[0] = v;

    for (i = 1; i < 10; i++)
    {
        v *= 2;
        n[i] = v;
    }

    for (i = 0; i < 10; i++)
    {
        printf("N[%d] = %d\n", i, n[i]);
    }

    return 0;
}