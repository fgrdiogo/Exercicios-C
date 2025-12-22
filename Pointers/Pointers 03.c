#include <stdio.h>
#include <stdbool.h>
#define n 3

int main (void){
  int vetor1[n];
  for (int i = 0; i < n; i++){
   printf("Digite um valor \n");
   scanf("%f", &vetor1[i]);
  }
  int vetor2[n];
  for (int i = 0; i < n; i++){
   printf("Digite um valor \n");
   scanf("%f", &vetor2[i]);
  }
  float soma = 0;
  float *ptr_vetor1 = vetor1;
  float *ptr_vetor2 = vetor2;
  for (int i = 0; i < n; i++){
   soma += *(ptr_vetor1+i) * *(ptr_vetor2 + i);
  }
  printf("Produto escalar: %f \n", soma);
}

