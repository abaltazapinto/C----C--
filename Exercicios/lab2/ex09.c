#include <stdio.h> 
 
void main() 
{ 
  int num=10; 
  float f; 
  int i;  
   
  printf(“Int...\n”); 
  i=num/7; 
  printf(“%d\n”,i); 
 
  printf(“Float...\n”); 
  f=num/7; 
  printf(“%f\n”,f); 
 
  printf(“Float...\n”); 
  f=(float)num/7; 
  printf(“%f\n”,f); 
 
} 
#include <stdio.h> 
#define MAX 10.2 
void main() 
{ 
  const double x=10.3; 
  printf(“X=%lf”,x); 
  printf(“MAX=%lf”,MAX); 
 
} 
 
