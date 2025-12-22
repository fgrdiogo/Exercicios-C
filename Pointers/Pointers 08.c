#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void){
  int capacidade_inicial = 3;
  int quantidade = 0;

  float *vetor = (float*)malloc(capacidade_inicial * sizeof(float));
  float numero;
  printf("Digite um número // (0.0) para finalizar\n");
  while(1){
    scanf("%f", &numero);
    if (numero == 0.0){
        break;
    }
    if(capacidade_inicial == quantidade){
        capacidade_inicial += 3;
        vetor = (float*)realloc(vetor, capacidade_inicial * sizeof(float));
    }
    vetor[quantidade] = numero;
    quantidade++;
 }
 float somatorio = 0;
 for (int i = 0; i < quantidade; i++){
    somatorio += pow(vetor[i], 2);
 }
 float resultado = sqrt(somatorio/quantidade);
 printf("Resultado final: %f\n", resultado); 
 printf("Valor final da capacidade = %d\n", capacidade_inicial);
 printf("Quantidade de números %d\n", quantidade);
}
