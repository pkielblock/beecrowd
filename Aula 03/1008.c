#include <stdio.h>
 
int main() {
 
    int num, horas;
    double recebe, salario;
    
    scanf("%d", &num);
    scanf("%d", &horas);
    scanf("%lf", &recebe);

    salario = recebe * horas;

    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2lf\n", salario);
 
    return 0;
}
