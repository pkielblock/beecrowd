#include <stdio.h>
 
int main() {
 
    int n, i;
    double x, y, z, mediaP;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%lf %lf %lf", &x, &y, &z);
        mediaP = ((x * 2.0) + (y * 3.0) + (z * 5.0)) / 10;
        printf("%.1lf\n", mediaP);
    }
 
    return 0;
}