#include <stdio.h>

int main(){
    int num;

    printf("Introduza um valor:");
    scanf("%d", &num);
    par_impar(num);
    return 0;
}

int par_impar(int x) {
    if(x % 2 == 0) 
    {
        return puts("PAR");
    } else {
        return puts("IMPAR");
    }
}