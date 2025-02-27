#include <stdio.h>

int main() {

       	char nome[1024];

 
	printf("Primeiro e ultimo nome:");

       	//scanf("%s", &nome);

 	fgets(nome, 1024,stdin);

 	printf("Nome completo: %s", nome);
 	return 0;
}
