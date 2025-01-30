#include <stdio.h>

int main() {
    int valor;

    printf("Introduza um valor: ");
    scanf("%d", &valor);

    if(valor > 0) {
        printf("Valor positivo \n");

        if (valor > 1000)
        {
            printf("Superior a 1000");
        }
    }
    
    if (valor < 0)
    {
        printf("Valor Negativo");
    }
    if (valor == 0) {
        printf("Zero");
    }
    
}