#include <stdio.h>

int main()
{
    int valor;
    float resultado;
    printf("Introduza um valor:");
    scanf("%d", &valor );

    resultado=valor/2;
    printf("Metade do valor de %d = %f",valor, resultado);
    return 0;
}