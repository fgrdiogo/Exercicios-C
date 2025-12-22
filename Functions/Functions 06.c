#include <stdio.h>

int somarVetor(int *p, int n){
    int soma = 0;

    for (int i = 0; i < n; i++){
        soma += *(p+i);
    }
    return soma;
}

int main(void)
{
    int n;
    printf("Digite o valor de n \n");
    scanf("%d", &n);

    int vet[n], x;
    for (int i = 0; i < n; i++){
        printf("Digite um valor: ");
        scanf("%d", &x);
        vet[i] = x;
    }
    int soma;
    int *p = vet;
    soma = somarVetor(p, n);
    printf("A soma do vetor é %d \n", soma);
}
