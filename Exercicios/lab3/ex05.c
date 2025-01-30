#include <stdio.h>

int main() {
    char a;
    printf("Introduza um carater:");
    
    a = getchar();

    printf("Caracter introduzido: %c", a);

    printf("Conversor de temperaturas \n");
    printf("**** 1-Celsius para Fahrenheit ****\n");
    printf("**** 2-Fahrenheit para Celsius ****\n");
    printf("**** 3-Kelvin para Celsius     ****\n");
    printf("**** 4-Celsius para Kelvin     ****\n");
    printf("**** 5-Fahrenheit para Kelvin  ****\n");
    printf("**** 6-Kelvin para Fahrenheit  ****\n");
    return 0;
}




