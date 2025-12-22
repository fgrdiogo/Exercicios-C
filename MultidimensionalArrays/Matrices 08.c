#include <stdio.h>
#define n 3
#include <stdbool.h>

int main(void)
{
   int matriz[n][n];
   for (int i = 0; i < n; i++){
      for (int j = 0; j < n; j++){
         printf("Digite um valor \n");
         scanf("%d", &matriz[i][j]);
      }
   }
   bool condicao = true;
   for (int i = 0; i < n; i++){
      int soma = 0;
      for (int j = 0; j < n; j++){
         if (j != i){
            soma += (matriz[i][j]<0) ? -matriz[i][j] : matriz[i][j];
            }
      }
      if ((matriz[i][i]<0 ? -matriz[i][i]:matriz[i][i]) <= soma){
         condicao = false;
         break;
      }
   }
   if (condicao){
      printf("A matriz é diagonal estritamente dominante");
   }
   else{
      printf("A matriz não é diagonal estritamente dominante");
   }
}
