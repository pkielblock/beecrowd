#include <stdio.h>
int main(){
    int n, m, a = 0;
    scanf("%i %i",&n, &m);
    if (n > m) {
        n += m;
        m = n - m;
        n -= m;
    }
    if (n % 2 == 0)
        n++;
    else
        n += 2;
    while (n < m) {
        a+=n;
        n+=2;
    }
    printf("%i\n", a);
    return 0;
}