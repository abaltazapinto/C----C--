#include <stdio.h>

void main()
{
    int anInt = 123456;
    float aFloat = 55.6677;
    double aDouble = 11.2233;
    char aChar = 'a';

    printf("The int is %d.\n", anInt); // The int is 12345
    printf("THe float is %f.\n",aFloat); // The float is 55.667702
    printf("The double is %lf.\n", aDouble); // The double is 11.223300
    printf("The char is %c. \n", aChar); // The char is a.
    printf("The int (in hex) is %x.\n", anInt); // The int (in hex) is 3039
    printf("The double (in scientific) is %le.\n", aDouble); //The double (in scientific) is 1.122330e+01. 
    printf("The float (in scientific) is %E.\n", aFloat); //The float (in scientific) is 5.566770E+01.
}