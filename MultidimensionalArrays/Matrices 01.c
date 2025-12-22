#include <stdio.h>

int main(void)
{
   int n; 
   printf("Digite o tamanho NxN da matriz\n");
   scanf("%d", &n);
   int matriz[n][n];
   for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j ++){
        printf("Digite um valor \n");
        scanf("%d", &matriz[i][j]);
    }
   }
   int x;
   printf("Digite o escalar que deseja multiplicar a matriz: ");
   scanf("%d", &x);
   for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j ++){
        matriz[i][j] *= x;
        }
        }

     for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j ++){
        printf("%d \n", matriz[i][j]);
        }
     }
}
