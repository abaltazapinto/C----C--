#include <stdio.h>

int main()
{
	int numero;

	int i = 1;
	int soma = 0;
	puts("Por favor insira um numero inteiro :\n");
	scanf("%d", &numero);
	
	while (i <= numero){
		printf("%d +  \n", i);
		soma = soma + i;
		printf("Soma é: %d",soma);
		i++;
	}
	
	printf("A soma dos valores é %d",soma);
	return 0;
}
