#include <stdio.h>

int main() {
    float a;
    float b;

    printf("Introduxa um numero float para variavel a:");
    scanf("%f", &a);
    printf("Introduxa um valor para a variavel b:");
    scanf("%f", &b);

    if(a > b)
    {
        printf("Valor a %f maior que valor b%f", a, b);
    }
    if(b > a)
    {
        printf("Valor a %f maior que valor b%f", b, a);
    }
    if(a == b)
    {
        printf("Valor a %f é igual ao valor de b%f", a, b);
    }
}