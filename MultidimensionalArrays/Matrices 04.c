#include <stdio.h>

int main(void)
{
   int matriz[2][2];
   for (int i = 0; i < 2; i++){
      for (int j = 0; j < 2; j++){
         printf("Digite um valor \n");
         scanf("%d", &matriz[i][j]);
      }
   }
   int d1 = matriz[0][0] * matriz[1][1];
   int d2 = matriz[0][1] * matriz[1][0];
   int determinante = d1 - d2;
   printf("O determinante é: %d \n", determinante);
}
