#include <stdio.h>

int main()
{
    int numero;
    printf("Por favor introduza um numero: ");
    scanf("%d", &numero);

    if(numero % 2 == 0)
    {
        printf("É numero par!!!");
    }else{
        printf("O numero e impar");
    }
}