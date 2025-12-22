#include <stdio.h>

int maiorElemento(int n, int vet[n]){
    // a variável maior não precisa inicializar com valor 0, ela pode ser inicializada com o primeiro elemento do vetor q a comparação continua funcionando
    int maior = vet[0];
    for (int i = 0; i < n; i++){
        if (vet[i] > maior){
            maior = vet[i];
        }
    }
    return maior;
}

int main(void)
{
    int n;
    printf("Digite o tamanho n do vetor \n");
    scanf("%d", &n);

    int vet[n], x;
    for (int i = 0; i < n; i++){
        printf("Digite um número \n");
        scanf("%d", &x);
        vet[i] = x;
    }
    // estou dizendo que a varíavel maior será atribuida usando a funcao maiorElemento que na declaração utiliza como parametros n(tamanho do vetor) e vet(vetor de fato)
    int maior = maiorElemento(n, vet);

    printf("O maior elemento do vetor é %d \n", maior);
}
