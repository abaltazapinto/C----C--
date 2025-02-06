#include <stdio.h>

int main() {

    int numero;
    puts("Introduza um ano aleatorio para verificar se é bissexto");
    scanf("%d", &numero);

    if ((numero % 400 == 0 || (numero%4==0 && numero%100!=0)))
        puts("O ano é bissexto");
    else
        puts("O ano não é bissexto");
}
