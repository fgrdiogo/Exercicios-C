#include <stdio.h>
#include <math.h>

int main (void){
    int n;
    printf("Digite o tamanho do vetor \n");
    scanf("%d", &n);
    
    int vetor[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }
    
    //criando duas variaveis de controle
    int k = 1;
    for (int i = 1; i < n; i++){
        if (vetor[i] != vetor[i-1]){
            vetor[k] = vetor[i];
            //a variavel k fica responsável por "andar devagar" e marcar oq seria apenas as posições no novo vetor corrigido
            k++;
        }
    }
    printf("O tamanho do vetor sem duplicatas é %d \n", k);
    for (int i = 0; i<k;i++){
        printf("%d,", vetor[i]);
    }
}