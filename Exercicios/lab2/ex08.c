#include <stdio.h> 
 
void main() 
{ 
  int x=10,y=0,z=0; 
   
  y = x-- ; //(1) y=x e depois x.. 
  printf("X(1)=%d\n",x); 
  printf("Y(1)=%d\n",y); 
   
  y = --x ; //(2) x-- e depois y=x 
  printf("X(2)=%d\n",x); 
  printf("Y(2)=%d\n",y); 
   
  z=y=x=15;//x=15 depois y=x depois z=y 
  printf("X(3)=%d\n",x); 
  printf("Y(3)=%d\n",y); 
  printf("z(3)=%d\n",z); 
   
  x=-x;//x=(-1)*x 
  printf("X(4)=%d\n",x); 
  x=-x; 
  y++; 
  x=x+y-(z--);//5 
  printf("Z(5)=%d\n",z);  
} 
