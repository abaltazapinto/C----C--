#include <stdio.h>

int main() {
    int a;
    float b;
    char x;
    printf("Introduza um inteiro, decimal e caracter.");
    scanf("%d %f %c", &a, &b, &x);

    printf("Inteiro=%d, Float=%f, Caracter=%c", a, b, x);

    return 0;
}