// exercício C

#include <stdio.h>

int main()
{
    int A, B, C, aux;

    printf("Informe o primeiro valor: ");
    scanf("%d", &A);
    printf("Informe o segundo valor: ");
    scanf("%d", &B);
    printf("Informe o terceiro valor: ");
    scanf("%d", &C);

    if (A > B)
    {
        aux = A;
        A = B;
        B = aux;
    }
    if (A > C)
    {
        aux = A;
        A = C;
        C = aux;
    }
    if (B > C)
    {
        aux = B;
        B = C;
        C = aux;
    }

    printf("Valores após a troca: ");
    printf("\nA: %d", A);
    printf("\nB: %d", B);
    printf("\nC: %d", C);
    
    return 0;
}