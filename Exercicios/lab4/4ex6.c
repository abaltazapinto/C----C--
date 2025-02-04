#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    do
    {
        puts("Introduza um caracter:");
        scanf("%c", &ch);
        if(ch >='a' && ch <='z') {
            puts("O caracter pertence ao alfabeto e é minusculo)");
        }
        else if (ch >= 65 && ch <= 90) {
            puts("O caracter está em uppercase e pertence ao alpabeto");
        }
        else if (isdigit(ch)) {
            printf("'%c' é um digito.\n",ch);
        }else if(ch >= 32 && ch <= 64 || ch >=91  && ch <=96) || ch >=7 && ch <= 13{
            printf("'%c' é um caracter especial\n");
        }

    } while (ch);

    return 0;
}