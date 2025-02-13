#include <stdio.h>

int main()
{
	int valor, contador=0, i;

	printf("Intoduza um valor: ");
	scanf("%d", &valor);

	i=2;
	while(i<valor)
	{	
		if( valor % i == 0)
			contador++;		
		i++;
	}

	if(contador==0)
		printf("Numero Primo");
	else
		printf("Numero não primo");

	return 0;
}
