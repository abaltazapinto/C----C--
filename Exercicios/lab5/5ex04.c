#include <stdio.h>

int ascii(char c) {
	return (int)c;
}

int main() {

	char c ;


	while (c!='q')
	{
		puts("Introduza um caractere: ");
		scanf("%c", &c);
		getchar();
		printf("O codigo ASCII de '%c' é de %d\n", c, ascii(c));
		
	
	}
	return 0;
}
