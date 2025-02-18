#include <stdio.h>

int main() {
    int num = 0;
	int j;
	int i;
    printf("Enter a positive number: ");
    scanf("%d", &num);


    for(int i = num; i >= 1; i--) {
	for(int j= 1; j <= i;j++)
		printf("%d ", j);

	printf("\n");
    }
}
