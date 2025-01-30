#include <stdio.h>

int main() {
char a;int conv;

printf("introduza uma Letra em maiusculo");
scanf("%c ", &a );

conv = a; // codigo ascii de a

conv = conv + 32; // obtem o correspondente minusculo;

printf("O NUMERO ASCII DA MINUSCULA É: %d",conv);

return 0;
}