#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int n, x;
    printf("Digite o tamanho n dos vetores \n");
    scanf("%d", &n);

    int vet1[n];
    printf("Inicializando vetor 1 ... \n");
    for(int i = 0; i < n; i++){
        printf("Digite um número \n");
        scanf("%d", &x);
        while ((x < 0) || (x > 9))
        {
            printf("DIGITE UM VALOR DE 0 A 9");
            scanf("%d", &x);
        }
        vet1[i] = x;
    }
    int vet2[n];
    printf("Inicializando vetor 2 ... \n");
    for(int i = 0; i < n; i++){
        printf("Digite um número (0 a 9) \n");
        scanf("%d", &x);
        while ((x < 0) || (x > 9))
        {
            printf("DIGITE UM VALOR DE 0 A 9");
            scanf("%d", &x);
        }
        vet2[i] = x;
    }
    int vet3[n], soma, carry = 0, vet3carry[n+1];
    for(int i = n-1; i >= 0; i--){
        soma = vet1[i] + vet2[i] + carry;
        if ((soma) >= 10){
            vet3[i] = soma - 10;
            carry = 1; 
        }
        else{
            vet3[i] = soma;
            carry = 0; 
        }
    }
    // verificar se sobrou algum número
    if(carry == 1){
        vet3carry[0] = 1; 
        for(int i = 0; i < n; i++){
            vet3carry[i+1] = vet3[i];
        }
        for (int i = 0; i < n+1; i++){
            printf("%d, ", vet3carry[i]);
        }
    }
    else{
        for (int i = 0; i < n; i++){
        printf("%d, ", vet3[i]);
    }
}
}
