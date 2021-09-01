#include <stdio.h>
 
int main() {
 
    int c1, n1, c2, n2;
    double v1, v2, totalC1, totalC2, totalFinal;
    
    scanf("%d%d%lf", &c1, &n1, &v1);
    scanf("%d%d%lf", &c2, &n2, &v2);
    
    totalC1 = n1 * v1;
    totalC2 = n2 * v2;
    totalFinal = totalC1 + totalC2;
    
    printf("VALOR A PAGAR: R$ %.2lf\n", totalFinal);
 
    return 0;
}
