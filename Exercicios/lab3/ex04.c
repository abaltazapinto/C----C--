#include <stdio.h>

int main(){
    int final;
    int inicial;
    int acelaracao;
    int tempo;

    printf("Introduza o valor inicial do carro: ");
    scanf(" %d", &inicial);

    printf("Introduza a acelaracao: ");
    scanf(" %d", &acelaracao);

    printf("Introduza o tempo da operacao: ");
    scanf(" %d", &tempo);

    final = inicial + acelaracao * tempo;

    printf("A velocidade final de acordo com a formula será: %d", final);
}