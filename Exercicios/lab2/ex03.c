#include <stdio.h>

int main() {
    int number1 = 12345,number2 = 678;
    printf("Hello, number1 is %d.\n", number1);
    printf("number1=%d, number2=%5d.\n", number1, number2);
    printf("number1=%8d, number2=%5d.\n", number1, number2);
    printf("number1=%08d, number2=%05d.\n", number1, number2);
    printf("number1=%-8d number2=%-5d.\n", number1, number2);
    return 0;
}