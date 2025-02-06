#include <stdio.h>

int soma_valores(int a, int b, int c)
{
    int d;

    d= a+b+c;

    return d;
}

int positivo(int a){
    if(a > 0){
        return 1;
    } else {
        return 0;
    }
}

int maior_valor2(int um , int dois ) {

    if(um > dois) {
        printf("O numero maior é %d \n", um);
    }else if(um = dois) {
        puts("Os dois numeros sao iguais!!!");
    }else {
        printf("O numero %d é o maior dos dois", dois);
    }
}

int maior_valor3(int um , int dois, int tres ) {

    if(um > dois && um > tres) {
        return printf("O maior numero é o %d\n", um);
    }
    if(dois > um && dois > tres) {
        return printf("O maior numero é o %d\n", dois);
    }
    if(tres > um && tres > dois) {
        return printf("O maior numero é o %d\n", tres);
    }
}

int main() {

    int val1, val2, val3,s,p,m;

    printf("Introduza um valor: ");
    scanf("%d", &val1);

    printf("Introduza um valor: ");
    scanf("%d", &val2);

    printf("Introduza um valor: ");
    scanf("%d", &val3);

    s=soma_valores(val1,val2,val3);

    p=positivo(s);



    printf("Soma %d, Este numero é: %d \n",s,p);
    if(p==1)
        printf("Numero Positivo \n");
    if(p==0)
        printf("Numero Negativo \n");
    maior_valor3(val1, val2, val3);

    return 0;
}
