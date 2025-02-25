#include <stdio.h>

int recebe2valores(int a, int b)
{
		
		if(b != 0)
		{
			int x;
			
			x =(a / b);
			printf("Resultado da divisao: %d\n", x);
			return x;
		}else {
			printf("Error: Divisao por zero nao e possivel !!\n");
			return 0;
		}
	
}

int main() 
{
	int a;
	int b;

	printf("Da me um valor 1: ");
	scanf("%d", &a);
	
	printf("Da me um valor 2: ");
	scanf("%d", &b);
	
	recebe2valores(a , b);

	return 0;
}
