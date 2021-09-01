#include <stdio.h>
 
int main() {
 
    int x, y, count;

    count = 1;

    while(count != 0)
    {
        scanf("%d %d", &x, &y);

        if(x > 0 && y > 0)
        {
            printf("primeiro\n");
        }
        else if(x < 0 && y > 0)
        {
            printf("segundo\n");
        }
        else if(x < 0 && y < 0)
        {
            printf("terceiro\n");
        }
        else if(x > 0 && y < 0)
        {
            printf("quarto\n");
        }
        else if(x == 0 || y == 9)
        {
            return 0;
        }
    }
}