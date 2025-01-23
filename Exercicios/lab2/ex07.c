#include <stdio.h> 
void main() 
{ 
  int x=10; 
 
  printf("X=%d\n",x); 
   
  x=x+1; //(1) x=x+1 
  printf("X(1)=%d\n",x); 
   
  x++; //(2) x=x+1 
  printf("X(2)=%d\n",x); 
   
  x+=2; //(3) x=x+2 
  printf("X(3)=%d\n",x); 
   
  ++x; //(4) x=x+1 
  printf("X(4)=%d\n",x); 
} 
 