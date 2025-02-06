#include <stdio.h>

int main() {
    char resp;

    printf("+ | - | / | *  \n");
    printf("Escolha:");
    resp=getchar();

    switch(resp) {
        case '+':
            printf("A escolha foi a soma \n");
            break;
        case '-':
            printf("A escolha foi subtraccao");
            break;
        case '*':
            printf("A escolha foi multiplicacao");
            break;
        case '/':
            printf("A escolha foi divisao");
            break;
        default:
        printf("Escolha invalida! \n");

    }
    return 0;
}