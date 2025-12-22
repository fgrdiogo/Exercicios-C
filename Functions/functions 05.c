#include <stdio.h>

int max_min(int n, int vet[n],int *min, int *max){
    *max = vet[0];
    for (int i = 0; i < n; i++){
        if(vet[i] > *max){
            *max = vet[i];
        }
    }
    *min = vet[0];
    for (int i = 0; i < n; i++){
        if(vet[i] < *min){
            *min = vet[i];
        }
    }
}

int main(void)
{
    int n;
    printf("Digite o tamanho do vetor \n");
    scanf("%d", &n);

    int vet[n], x;
    for (int i = 0; i < n; i++){
        printf("Digite um valor \n");
        scanf("%d", &x);
        vet[i] = x;
    }
    int maior, menor;

    max_min(n, vet, &menor, &maior);
    printf("%d maior, %d menor", maior, menor);
}
