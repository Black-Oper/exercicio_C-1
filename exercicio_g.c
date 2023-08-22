// exercício G

#include <stdio.h>

int main()
{
    
    int num_1, num_2, resultado;
    char op;

    printf("Informe o primeiro valor: ");
    scanf("%d", &num_1);
    printf("Informe o segundo valor: ");
    scanf("%d", &num_2);
    printf("Informe o operador: ");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        resultado = num_1 + num_2;
        break;
    case '-':
        resultado = num_1 - num_2;
        break;
    case '*':
        resultado = num_1 * num_2;
        break;
    case '/':
        resultado = num_1 / num_2;
        break;
    }

    printf("Resultado: %d", resultado);

    return 0;
}