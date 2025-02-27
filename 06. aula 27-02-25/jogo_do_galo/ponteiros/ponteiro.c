#include <stdio.h>

int main() {

    int valor = 100;
    int *ponteiro;

    printf("valor=%d\n", valor);
    printf("endereco de valor=%p\n", &valor);

    ponteiro = &valor;
    // como vejo o conteudo do ponteiro
    printf("conteudo de ponteiro=%p\n", ponteiro);
    printf("endereco de ponteiro=%p\n", &ponteiro);
    printf("\n\n");

    // o conteudo do ponteiro e completamente diferente. A fazer uma assignacao 

    // o que as outras linguagens procuram no c

    ponteiro = &valor;
    *ponteiro = 150;

    
    *ponteiro = 150;
    printf("valor=%d\n", valor);

    // virtudes dos ponteiros, mexe na memoria directamente tendo um endereco de uma area de memoria conse gue mudar o valor

    valor++;
    printf("valor=%d\n", valor);

    return 0;
}