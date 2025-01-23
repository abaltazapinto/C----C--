/*
os especificadores de formatacao definem o tipo de dados a imprimir e seguem a seguinte sintaxe:

%[flags][width][.precision][length]specifier

No exemplo que se segue s~ao apresentados exemplos que utilizam os especificadores de formatacao:
*/

#include <stdio.h>

int main()
{
    printf("Integers: %d %d \n", -3456, 3456);
    printf("Characters: %c %c \n", 'z', 80);
    printf("Long Integers: %ld %ld\n", 4147483647, 5147483647);
    printf ("Some different radices: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
    printf ("floats: %4. %E \n", 3.14159, 3.14159);
    printf("Preciding with empty spaces: %10d \n", 1997);
    printf("Width: %*d \n", 15, 140);
    printf("%s \n", "Educative");

}