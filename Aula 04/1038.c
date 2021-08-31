#include <stdio.h>
 
int main() {
 
    int codigo, qtde;
    double preco, total;
    
    scanf("%d %d", &codigo, &qtde);
    
    if(codigo == 1)
    {
    	preco = 4.00;
    	total = preco * qtde;
    	printf("Total: R$ %.2lf\n", total);
	}
	else if(codigo == 2)
	{
    	preco = 4.50;
    	total = preco * qtde;
    	printf("Total: R$ %.2lf\n", total);	
	}
	else if(codigo == 3)
	{
    	preco = 5.00;
    	total = preco * qtde;
    	printf("Total: R$ %.2lf\n", total);	
	}
	else if(codigo == 4)
	{
    	preco = 2.00;
    	total = preco * qtde;
    	printf("Total: R$ %.2lf\n", total);	
	}
	else if(codigo == 5)
	{
    	preco = 1.50;
    	total = preco * qtde;
    	printf("Total: R$ %.2lf\n", total);	
	}
	
    return 0;
}
