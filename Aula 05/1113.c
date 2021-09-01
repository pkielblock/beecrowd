#include <stdio.h>
 
int main() {
 
    int x, y, count;

    count = 1;
    
    while (count != 0)
    {
        scanf("%d %d", &x, &y);
        if (x > y)
        {   
            printf("Decrescente\n");
        }
        else if (y > x)
        {
            printf("Crescente\n");
        }
        else
        {
            return 0;
        }
        
    }
}