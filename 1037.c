#include <stdio.h>
 
int main() {
 
    double intervalo;
    
    scanf("%lf", &intervalo);
    
    if(intervalo >= 0 && intervalo <= 25)
    {
    	printf("Intervalo [0,25]\n");
	}
	else if (intervalo > 25 && intervalo <= 50)
	{
		printf("Intervalo (25,50]\n");
	}
	else if (intervalo > 50 && intervalo <= 75)
	{
		printf("Intervalo (50,75]\n");
	}
	else if (intervalo > 75 && intervalo <= 100)
	{
		printf("Intervalo (75,100]\n");
	}
	else
	{
		printf("Fora de intervalo\n");
	}
 
    return 0;
}
