#include <stdio.h>
 
int main() {
 
    int n[20], i, count, v, temp;

    for (i = 0; i < 20; i++)
    {
        scanf("%d", &v);
        n[i] = v;
    }

    for (i = 0, count = 19; i < 10; i++, count--)
    {
        temp = n[i];

        n[i] = n[count];

        n[count] = temp;
    }

    for (i = 0; i < 20; i++)
    {
        printf("N[%d] = %d\n", i, n[i]);
    }
    
    return 0;
}