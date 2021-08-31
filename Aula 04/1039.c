#include <stdio.h>
 
int main() {
 
    float n1, n2, n3, n4, media, nExame;
    
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    
    media = ((n1 *2) + (n2 * 3) + (n3 * 4) + n4) / 10;
    
    if(media >= 7)
    {
    	printf("Media: %.1f\n", media);
    	printf("Aluno aprovado.\n");
	}
	else if (media < 5)
	{
		printf("Media: %.1f\n", media);
    	printf("Aluno reprovado.\n");
	}
	else if (media >= 5 && media <= 6.9)
	{
		printf("Media: %.1f\n", media);
		printf("Aluno em exame.\n");
		scanf("%f", &nExame);
		printf("Nota do exame: %.1f\n", nExame);
		
		media = (media + nExame) / 2;
		
		if (media >= 5)
		{
			printf("Aluno aprovado.\n", nExame);
			printf("Media final: %.1f\n", media);
		}
		else
		{
			printf("Aluno reprovado.\n", nExame);
			printf("Media final: %.1f\n", media);
		}
	}
 
    return 0;
}
