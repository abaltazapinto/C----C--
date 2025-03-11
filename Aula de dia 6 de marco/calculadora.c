// calculadora.c
#include <stdio.h>
#include <math.h>
#include "calculadora.h"

float somar(float a, float b) {
    return a + b;
}

float subtrair(float a, float b) {
    return a - b;
}

float multiplicar(float a, float b) {
    return a * b;
}

float dividir(float a, float b) {
    return (b != 0) ? a / b : 0; // Evita divisão por zero
}

float potencia(float base, int expoente) {
    return pow(base, expoente);
}

void tabuada(int num) {
    for (int i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", num, i, num * i);
}

int eh_primo(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0) return 0;
    return 1;
}

int eh_par(int num) {
    return num % 2 == 0;
}

