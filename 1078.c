#include <stdio.h>
 
int main() {
 
    int n, count, i;

    scanf("%d", &n);

    count = 1;

    while (count <= 10)
    {
        i = n * count;
        printf("%d x %d = %d\n", count, n, i);
        count++;
    }
    
 
    return 0;
}