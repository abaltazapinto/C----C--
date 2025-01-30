#include <stdio.h>

int main() {
    int b;
    float c;
    double d;

    printf("Introduza um int,");
    scanf("%d", &b);
    printf("seguido de um float");
    scanf("%f", &c);
    printf("e terminando num double.");
    scanf("%lf", &d);

    printf("Os numeros apresentados foram Inteiro=%d, Float=%f Double=%lf", b,c,d);
    double soma;
    soma = b + c + d;

    printf("\n A soma dos 3 numeros será %lf", soma);
}