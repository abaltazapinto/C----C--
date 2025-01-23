#include <stdio.h> 
void main(){ 
  int x=11,y=2,n; 
  n=x+y;  
  printf("Soma de %d por %d=%d\n",x,y,n); 
  n=x-y; 
  printf("Subtracao de %d por %d=%d\n",x,y,n); 
  n=x*y; 
  printf("Multiplicacao de %d por %d=%d\n",x,y,n); 
  n=x/y; 
  printf("Divisao inteira de %d por %d=%d\n",x,y,n); 
  n=x%y; 
  printf("Resto da divisão inteira de %d por %d=%d\n",x,y,n); 
} 
