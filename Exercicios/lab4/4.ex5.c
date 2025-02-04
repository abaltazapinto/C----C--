#include <stdio.h>

int main() {
int semana;
    
    puts("Por favor introduza um numero que represente o dia da semana [1, 7]");
    scanf("%d", &semana);

    switch (semana)
    {
    case 1:
        puts("Segunda-Feira");
        break;
    case 2:
        puts("Terça-Feira");
        break;
    case 3:
        puts("Quarta-Feira");
        break;
    case 4:
        puts("Quinta-Feira");
        break;      
    case 5:
        puts("Sexta-Feira");
        break;  
    case 6:
        puts("Sábado");
        break;
    case 7:
        puts("Domingo");
        break;
    default:
        puts("Tens de escolher um numero de um a sete");
        break;
    }

}