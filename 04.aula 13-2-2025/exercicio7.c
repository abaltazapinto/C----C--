#include <stdio.h>

int main()
{
	int valor;
	int soma = 0;
	do {
		printf("Que valor quer somar ? ||  Introduza 0 se quer terminar o programa");
		scanf("%d", &valor);
		soma += valor;
	}while (valor != 0);
	printf("a soma dos valores inseridos é %d",soma);
}
