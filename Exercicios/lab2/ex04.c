#include <stdio.h>

void main()
{
    int number1 = 12345, number2 = 678, m1, s1;
    m1= number1 * number2;
    s1 = number1 + number2;

    printf("A soma dos numeros e: %010d \n", s1);
    printf("A multiplicacao dos numeros e: %010d \n", m1);
}