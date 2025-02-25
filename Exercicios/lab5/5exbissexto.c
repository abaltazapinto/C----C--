#include <stdio.h>

int bissexto(int ano) {
	if((ano%400 == 0 || (ano%4==0 && ano %100!=0)))
		puts("O ano é bissexto");
	else
		puts("O ano não é bissexto");
}

int main()
{
	int ano;
do {

	puts("Introduza um ano aleatorio || para sair introduza '0'");
	scanf("%d ", &ano );

	if(ano != 0) {

	bissexto(ano);
	}

} while (ano != '0');

return 0;

}
