#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n;
    printf("Digite quantos números deseja armazenar \n");
    scanf("%d", &n);
    
    int vetorA[n], vetorB[n];
    for (int i = 0; i < n; i++){
        printf("Digite os valores do vetor a \n");
        scanf("%d", &vetorA[i]);
    }
    for (int i = 0; i < n; i++){
        printf("Digite os valores do vetor b \n");
        scanf("%d", &vetorB[i]);
    }
    int *vetorC = malloc(n*2 * sizeof(int));
    int i = 0, j = 0, k = 0;
    while (i < n && j < n)
    {
        if (vetorA[i] < vetorB[j]){
            vetorC[k] = vetorA[i];
            i++;
            k++;
        }
        else{
            vetorC[k] = vetorB[j];
            j++;
            k++;
        }
    }
    while(i < n) vetorC[k++] = vetorA[i++];
    while(j < n) vetorC[k++] = vetorB[j++];

    for (int x = 0; x < k; x++){
        printf("%d, ", vetorC[x]);
    }

    free(vetorC);
}