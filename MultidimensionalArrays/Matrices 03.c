#include <stdio.h>

int main(void)
{
   int n; 
   printf("Digite o tamanho NxN da matriz\n");
   scanf("%d", &n);
   int matriz[n][n];
   for (int i = 0; i < n; i++){
      for (int j = 0; j < n; j++){
         printf("Digite um valor \n");
         scanf("%d", &matriz[i][j]);
      }
   }
   int soma = 0;
   for (int i = 0; i < n; i++){
      for (int j = 0; j < n; j++){
         soma += matriz[i][j]; 
      }
   }
   int media = soma / (n*2);
   printf("A média dos elementos é: %d \n", media);
}
