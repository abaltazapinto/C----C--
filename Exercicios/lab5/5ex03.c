#include <stdio.h>
#include <stdbool.h>


int main(){
char c;
int x;
while(true)
{
	printf("Introduza um caracter: ");
	scanf("%c", &c);
	x=vogal(c);

	if(x==1)
	{
		puts("VOGAL");
	}else {
		puts("NÃO VOGAL");

	}
	getchar();
}


}


int vogal(int x) {
	if(x == 65 || x == 69 || x == 73 || x == 79 || x == 85
		|| x == 'a' || x== 'e' || x== 'i' || x== 'o' || x == 'u')
       	{
		return 1;		  
	}else {
		return 0;
	}
		return 0;
}


