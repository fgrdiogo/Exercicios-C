#include <stdio.h>

int trocarValores(int *a, int *b){
    int temp = *a; 
    *a = *b;
    *b = temp; 
    // a funcao nao precisa retornar nada
}

int main(void)
{
    int a, b;
    printf("Digite o valor de a \n");
    scanf("%d", &a);
    printf("Digite o valor de b \n");
    scanf("%d", &b);
    printf("Valor de a: %d, Valor de b: %d \n", a, b);

    trocarValores(&a, &b);
    // apos chamar a função as variaveis a e b são trocadas automáticamente na memória, ou seja, so basta chamar novamente as variaveis que eles ja vão estar com os novos valores
    printf("Novo valor de a: %d, Novo valor de b: %d \n", a, b);
}
