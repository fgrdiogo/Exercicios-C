#include <stdio.h>

int main(void)
{
   int n, m;
   printf("Digite o tamanho N(linhas) da matriz \n");
   scanf("%d", &n);
   printf("Digite o tamanho M(colunas) da matriz \n");
   scanf("%d", &m);
   int matriz[n][m];
   for (int i = 0; i < n; i++){
      for (int j = 0; j < m; j++){
         printf("Digite um valor \n");
         scanf("%d", &matriz[i][j]);
      }
   }
   for (int i = 0; i < n; i++){
      for (int j = 0; j < m; j++){
         printf("%d ", matriz[j][i]);
      }
      printf("\n");
   }
}
