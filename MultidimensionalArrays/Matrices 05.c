#include <stdio.h>

int main(void)
{
   int matriz[3][3];
   for (int i = 0; i < 3; i++){
      for (int j = 0; j < 3; j++){
         printf("Digite um valor \n");
         scanf("%d", &matriz[i][j]);
      }
   }
   int d1 = (matriz[0][0] * matriz[1][1] * matriz[2][2]) + (matriz[0][1] * matriz[1][2] * matriz[2][0]) + (matriz[0][2] * matriz[1][0] * matriz[2][1]);
   int d2 = (matriz[0][2] * matriz[1][1] * matriz[2][0]) + (matriz[0][0] * matriz[1][2] * matriz[2][1]) + (matriz[0][1] * matriz[1][0] * matriz[2][2]);
   int determinante = d1 - d2;
   printf("O determinante da matriz é: %d \n", determinante);
}
