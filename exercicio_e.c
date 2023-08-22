// exercício E

#include <stdio.h>

int main()
{
    int horas, minutos, segundos, total_segundos, total_minutos;

    printf("Informe a quantidade de horas: ");
    scanf("%d", &horas);
    printf("Informe a quantidade de minutos: ");
    scanf("%d", &minutos);
    printf("Informe a quantidade de segundos: ");
    scanf("%d", &segundos);

    total_segundos = horas * 3600 + minutos * 60 + segundos;
    total_minutos = total_segundos/60;

    printf("Total de minutos que se passaram: %d", total_minutos);
    printf("\nTotal de segundos que se passaram: %d", total_segundos);

    return 0;
}