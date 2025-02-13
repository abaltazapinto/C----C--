#include <stdio.h>

int main()
{
	int ano;
	int i;
	int numero_vezes = 0;
	int primeiro_bissexto = 0;
	int diferenca = 0;

	printf("Introduza o ano limite");
	scanf("%d", &ano);

	i=2000;
	
	while(i<ano) 
	{
		if(i%400==0 || i%4==0 && i%100!=0)
		{

			printf("%d \n",i);
				
			
			if(numero_vezes == 0)
			{
				primeiro_bissexto = i;
				printf("%d", primeiro_bissexto);
			}
			numero_vezes++;
		}
	i++;
		
	}
	
	printf("%d primeiro bissexto \n", primeiro_bissexto);
	printf("%d o valor de i \n", i);
	if (primeiro_bissexto != -1 )
	{
		diferenca = (i - primeiro_bissexto);
		printf("%d de anos de diferenca", diferenca);
	}
	else
	{
		printf("Nenhum ano bissexto encontrado no intervalio \n");
	}
	
	return 0;
}
