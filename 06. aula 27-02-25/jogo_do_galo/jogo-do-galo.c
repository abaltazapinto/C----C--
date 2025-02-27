#include <stdio.h>

int main() {
  int matriz[2][3]={ {2,10,23},{79,100,12} };
  int l,c,linha,coluna,maior;

  for(l=0;l<2;l++){
    printf("\n");
    for(c=0;c<3;c++)      
      printf("%d ",matriz[l][c]);
  }
  
  linha=0;
  coluna=0;
  maior=matriz[linha][coluna];
  for(l=0;l<2;l++){
    printf("\n");
    for(c=0;c<3;c++)      
      if(matriz[l][c]>maior){
          linha=l;
          coluna=c;
          maior=matriz[l][c];
      }
      
   }

  printf("Posicao de %d: linha %d,coluna %d",maior,(linha+1),(coluna+1));

  return 0;
}
