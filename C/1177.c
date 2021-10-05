#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[1000], t, i, x;
    
    scanf ("%d", &t);
    
    for(i = 0, x = 0; i < 1000; i++)
    {
        printf("N[%d] = %d\n", i, x);
        x++;
        if(x == t)
            x = 0;
    }

    return 0;
}