#include <stdio.h>

int main(void)
{
   //n1 e m1 são as linhas e colunas da primeira matriz
   int n1, m1;
   printf("Digite os tamanho de linhas da primeira matriz \n");
   scanf("%d", &n1);
   printf("Digite os tamanho de colunas da primeira matriz \n");
   scanf("%d", &m1);
   int matriz1[n1][m1];
   int n2, m2;
   printf("Digite os tamanho de linhas da segunda matriz \n");
   scanf("%d", &n2);
   printf("Digite os tamanho de colunas da segunda matriz \n");
   scanf("%d", &m2);
   int matriz2[n2][m2];
   if (m1 != n2){
      printf("A multiplicação das duas matrizes é inválida!");
   }
   else{
      for (int i = 0; i < n1; i++){
         for (int j = 0; j < m1; j++)
         {
            printf("Digite um valor (matriz 1)\n");
            scanf("%d", &matriz1[i][j]);
         }
      }
      for (int i = 0; i < n2; i++){
         for (int j = 0; j < m2; j++)
         {
            printf("Digite um valor (matriz 2)\n");
            scanf("%d", &matriz2[i][j]);
         }
      }
   }
   int matriz3[n1][m2];
   for (int i = 0; i < n1; i++)
   {
      for (int j = 0; j < m2; j++)
      {
         matriz3[i][j] = 0;
         for (int k = 0; k < m1; k++){
            matriz3[i][j] += matriz1[i][k] * matriz2[k][j]; 
         }
      }
   }
   for (int i = 0; i < n1; i++)
   {
      for (int j = 0; j < m2; j++)
      {
         printf("%d ", matriz3[i][j]);
      }
   printf("\n");
   }
}
