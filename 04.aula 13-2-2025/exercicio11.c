#include <stdio.h> 
int main() { 
    int valor;
    printf("Introduza um valor:");
    scanf("%d", &valor); 
    (valor%2==0) ? printf("%d par\n",valor) : printf("%d impar \n", valor);

    return 0;
 
}