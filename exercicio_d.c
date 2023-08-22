// exercício D

#include <stdio.h>

int main()
{
    int num_1, num_2, num_3, num_4, num_5, negativos = 0;

    printf("Informe o primeiro valor: ");
    scanf("%d", &num_1);
    printf("Informe o segundo valor: ");
    scanf("%d", &num_2);
    printf("Informe o terceiro valor: ");
    scanf("%d", &num_3);
    printf("Informe o quarto valor: ");
    scanf("%d", &num_4);
    printf("Informe o quinto valor: ");
    scanf("%d", &num_5);

    if (num_1 < 0)
    {
        negativos++;
    }
    if (num_2 < 0)
    {
        negativos++;
    }
    if (num_3 < 0)
    {
        negativos++;
    }
    if (num_4 < 0)
    {
        negativos++;
    }
    if (num_5 < 0)
    {
        negativos++;
    }

    printf("Numeros de valores negativos: %d", negativos);    

    return 0;
}