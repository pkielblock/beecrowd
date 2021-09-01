#include <stdio.h>
 
int main() {
 
    int horaInicial, horaFinal, duracao;

    scanf("%d %d", &horaInicial, &horaFinal);

    if (horaInicial > horaFinal)
    {
        duracao = 24 - (horaInicial- horaFinal);
        printf("O JOGO DUROU %d HORA(S)\n", duracao);
    }
    else if (horaFinal > horaInicial)
    {
        duracao = horaFinal - horaInicial;
        printf("O JOGO DUROU %d HORA(S)\n", duracao);
    }
    else
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }

    return 0;
}