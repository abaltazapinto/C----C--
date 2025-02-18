#include <stdio.h>

int main(){

    int num;
    int tabuada = 1;
    int resultado = 0;

        printf("Que numero queres fazer a tabuada ? ");
        scanf("%d", &num);
        printf("Tabuada: \n");
        while(tabuada < 11)  {
            resultado = (int)(num * tabuada);

            printf("%d * %d = %d \n", num, tabuada, resultado);
            tabuada++;
        }
}
