#include <stdio.h>

int main() {
	int i;

	for(i = 0; i < 101; i++)
	{
		if(i % 2 == 0)
		{
			puts("É Par");
		}
		else 
		{
			puts("É impar");
		}
		printf("%d \n",i);
	}

	return 0;

}
