// exercício B

#include <stdio.h>

int main()
{
    int num_1, num_2, num_3;

    printf("Informe o primeiro valor: ");
    scanf("%d", &num_1);
    printf("Informe o segundo valor: ");
    scanf("%d", &num_2);
    printf("Informe o terceiro valor: ");
    scanf("%d", &num_3);

    if (num_1 == num_2 && num_1 == num_3)
    {
        printf("Este é um triângulo equilátero!");
    }else if (num_1 != num_2 && num_1 != num_3 && num_2 != num_3)
    {
        printf("Este é um triângulo escaleno!");
    }else{
        printf("Este é um triângulo isósceles");
    }

    return 0;
}