#include <stdio.h>
int main() {
    int inicio, fim, i;

    printf("Introduza o valoor inicial:");
    scanf("%d", &inicio);

    for(i=inicio; i <=fim; i++) {
        if(i%5 == 0)
            printf("%d", i);
    }
    return 0;
}