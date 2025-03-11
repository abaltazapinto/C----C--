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

