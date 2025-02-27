#include<stdio.h>
int main()
{
	char titulo[]="Noticias-IT";
	
	int contador=0;
	int contador2=0,i;

	fo(i=0;i<=9;i++){
		if( titulo[i]  >= 'A' && titulo[i] <= 'Z')
			contador++;
		if(titulo[i]  =='i')
			contador2++;
	}


	printf("Quantidade de maiusculas: %d", contador);
	printf("Quantidade de i: %d", contador2);

	return 0;
}
