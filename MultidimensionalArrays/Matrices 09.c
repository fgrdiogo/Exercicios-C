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
   //verificador de soma das linhas
   bool soma_das_linhas_condicao = true;
   int soma_linhas = 0;
   for (int i = 0; i < n; i++){
      int soma_linha = 0;
      for (int j = 0; j < n; j++){
         soma_linha += matriz[i][j];
   }
   if (soma_linhas == 0){
      soma_linhas = soma_linha;
      }
   if (soma_linhas != soma_linha){
      soma_das_linhas_condicao = false;
      break;
   }
  }
  //verificador de colunas
  bool soma_das_colunas_condicao = true;
  int soma_coluna_ref = 0;
  for (int j = 0; j < n; j++){
   int soma_colunas = 0;
      for (int i = 0; i < n; i++){
         soma_colunas += matriz[i][j];
      }
   if (soma_coluna_ref == 0){
      soma_coluna_ref = soma_colunas;
         }
   if (soma_coluna_ref != soma_colunas){
         soma_das_colunas_condicao = false;
         break;
      }
   }
   //verificador das diagonais
   int d1 = 0;
   for (int i = 0; i < n; i++){
      for (int j = 0; j < n; j++){
         if(i == j){
            d1 += matriz[i][j];
         }
      }
   }
   int d2 = 0;
   for (int i = 0; i < n; i++){
      for (int j = 0; j < n; j++){
         if(i + j == n - 1){
            d2 += matriz[i][j];
         }
      }
   }
   if (soma_linhas == soma_coluna_ref && soma_coluna_ref == d1 && d1 == d2){
      printf("Matriz quadrada mágica!");
   }
   else{
      printf("Matriz não é quadrada mágica!");
   }
}
