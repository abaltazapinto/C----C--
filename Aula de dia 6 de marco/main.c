#ifndef CALCULADORA_H
#define CALCULADORA_H

void mostrar_menu();
void limpar_terminal();
void executar_operacao(int opcao);
float somar(float a, float b);
float subtrair(float a, float b);
float multiplicar(float a, float b);
float dividir(float a, float b);
float potencia(float base, int expoente);
void tabuada(int num);
int eh_primo(int num);
int eh_par(int num);
void calcular_estacionamento(int minutos);

#endif

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "calculadora.h"

void mostrar_menu() {
    printf("****************************\n");
    printf("**** Calculadora \"C\" ****\n");
    printf("*** 1- Soma              ***\n");
    printf("*** 2- Multiplicacao     ***\n");
    printf("*** 3- Divisao           ***\n");
    printf("*** 4- Subtracao         ***\n");
    printf("*** 5- Potenciacao       ***\n");
    printf("*** 6- Tabuada           ***\n");
    printf("*** 7- Verificar primo   ***\n");
    printf("*** 8- Verificar par     ***\n");
    printf("*** 0- Terminar          ***\n");
    printf("****************************\n");
}

void limpar_terminal() {
    system("clear"); // Para Linux/macOS, usar "cls" no Windows
}

void executar_operacao(int opcao) {
    float a, b, resultado;
    int num, expoente, minutos;
    switch (opcao) {
        case 1:
            printf("Digite dois numeros: ");
            scanf("%f %f", &a, &b);
            printf("Resultado: %.2f\n", somar(a, b));
            break;
        case 2:
            printf("Digite dois numeros: ");
            scanf("%f %f", &a, &b);
            printf("Resultado: %.2f\n", multiplicar(a, b));
            break;
        case 3:
            printf("Digite dois numeros: ");
            scanf("%f %f", &a, &b);
            if (b != 0)
                printf("Resultado: %.2f\n", dividir(a, b));
            else
                printf("Erro: Divisao por zero!\n");
            break;
        case 4:
            printf("Digite dois numeros: ");
            scanf("%f %f", &a, &b);
            printf("Resultado: %.2f\n", subtrair(a, b));
            break;
        case 5:
            printf("Digite a base e o expoente: ");
            scanf("%d %d", &num, &expoente);
            printf("Resultado: %.2f\n", potencia(num, expoente));
            break;
        case 6:
            printf("Digite um numero: ");
            scanf("%d", &num);
            tabuada(num);
            break;
        case 7:
            printf("Digite um numero: ");
            scanf("%d", &num);
            printf("%d %s primo\n", num, eh_primo(num) ? "e" : "nao e");
            break;
        case 8:
            printf("Digite um numero: ");
            scanf("%d", &num);
            printf("%d %s par\n", num, eh_par(num) ? "e" : "nao e");
            break;
        case 9:
            printf("Digite a quantidade de minutos a faturar: ");
            scanf("%d", &minutos);
            calcular_estacionamento(minutos);
            break;
        default:
            printf("Opcao invalida!\n");
    }
    limpar_terminal();
}

void calcular_estacionamento(int minutos) {
    printf("********************************\n");
    printf("********** ParkStop **********\n");
    printf("** NIF: 999888111            **\n");
    printf("********************************\n");
    
    if (minutos <= 5) {
        printf("Quantidade de minutos a faturar: %d\n", minutos);
        printf("A imprimir recibo ...\n");
        printf("..Valor a pagar: 0.0€\n");
        printf("..Minutos faturados: 0\n");
        return;
    }
    
    minutos -= 5;
    int periodos = (minutos + 14) / 15;
    float total = 0.0;
    if (periodos > 0) total += 0.5;
    if (periodos > 1) total += 0.7 * (periodos > 3 ? 2 : (periodos - 1));
    if (periodos > 3) total += 0.9 * (periodos - 3);
    
    printf("Quantidade de minutos a faturar: %d\n", minutos);
    printf("A imprimir recibo ...\n");
    printf("..Valor a pagar: %.2f€\n", total);
    printf("..Minutos faturados: %d\n", (periodos * 15));
}
int main() {
    int opcao;

    do {
        mostrar_menu();
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao != 0) {
            executar_operacao(opcao);
        }
    } while (opcao != 0);

    printf("Programa encerrado.\n");
    return 0;
}

