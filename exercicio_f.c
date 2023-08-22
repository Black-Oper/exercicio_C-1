// exercício F

#include <stdio.h>

int main()
{
    int time_1, time_2, saldo_1, saldo_2, pontos_1, pontos_2;

    printf("Informe o número do primeiro time: ");
    scanf("%d", &time_1);
    printf("Informe o número do segundo time: ");
    scanf("%d", &time_2);

    printf("Informe a quantidade de pontos do time %d: ", time_1);
    scanf("%d", &pontos_1);
    printf("Informe a quantidade de pontos do time %d: ", time_2);
    scanf("%d", &pontos_2);

    printf("Informe o saldo de gols do time %d: ", time_1);
    scanf("%d", &saldo_1);
    printf("Informe o saldo de gols do time %d: ", time_2);
    scanf("%d", &saldo_2);

    if (pontos_1 > pontos_2)
    {
        printf("O primeiro time é o vencedor!");
    }else if (pontos_1 < pontos_2)
    {
        printf("O segundo time é o vencedor!");
    }else if (saldo_1 > saldo_2)
    {
        printf("O primeiro time é o vencedor!");
    }else{
        printf("O segundo time é o vencedor!");
    }

    return 0;
}