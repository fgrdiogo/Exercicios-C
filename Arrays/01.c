#include <stdio.h>
//para procurar o index de um vetor é semelhante ao python: lista[n] --> acessa o index de numero n (inicia-se  em 0)

int main(void)
{
    int x, n; 
    printf("Digite o tamanho do vetor: \n");
    scanf("%d", &n);

    int numeros[n];
    for (int i = 0; i < n; i++){
        printf("Digite um valor: \n");
        scanf("%d", &x);
        numeros[i] = x;
    }

    for (int i = 0; i < n; i++){
        printf("(%d) ", numeros[i]);
    }

}   
