#include <stdio.h>

int main(void){

int a;


    puts("Por favor introduza um numero inteiro que representa o numero do mes [1, 12]");
    scanf("%d", &a);

    switch (a) {
        case 1:
            puts("Janeiro");
            puts("31 dias");
            break;
        case 2:
            puts("Fevereiro");
            puts("28 dias");
            break;
        case 3:
            puts("Março");
            puts("31 dias");
            break;
        case 4:
            puts("Abril");
            puts("30 dias");
            break;
        case 5:
            puts("Maio");
            puts("31 dias");
            break;
        case 6:
            puts("Junho");
            puts("30 dias");
            break;
        case 7:
            puts("Julho");
            puts("31 dias");
            break;
        case 8:
            puts("Agosto");
            puts("31 dias");
            break;
        case 9:
            puts("Setembro");
            puts("30 dias");
            break;
        case 10:
            puts("Outubro");
            puts("31 dias");
            break;
        case 11:
            puts("Novembro");
            puts("30 dias");
            break;
        case 12:
            puts("Dezembro");
            puts("31 dias");
            break;
    }
    
}