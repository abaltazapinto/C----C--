#include <stdio.h>

int main() {

    int numero, soma;
    int *ponteiro;

    ponteiro = &soma;
    soma = 0;
    do{
        printf("Introduza um valor ");
        scanf("%d", &numero);

        // soma = soma + numero;
        *ponteiro = *ponteiro + numero;

    }while(numero != 0);


    printf("Soma=%d\n\n",soma);
    return 0;
}