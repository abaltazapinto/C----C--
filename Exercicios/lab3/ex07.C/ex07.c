#include <stdio.h>
#include "taxa.h"

int main(){
    float preco_inicial, preco_com_iva, preco_com_desconto;
    const float desconto = 0.125;
    // preco_inicial = 13.26;
    // IVA = 0.20;
    // desconto = 0.125;

    printf("Preco incial: ");
    scanf("%f", &preco_inicial);

    preco_com_iva = preco_inicial*(1.0 + IVA);
    preco_com_desconto = preco_com_iva * (1.0 - desconto);

    printf("IVA=%f", IVA);

    printf("Desconto=%f\n", desconto);
    printf("Preco com IVA=%f\n", preco_com_iva);
    printf("Preco com desconto=%f\n", preco_com_iva);

}
