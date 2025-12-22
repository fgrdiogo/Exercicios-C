#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int x, n, y;
    bool existex = false, existey = false; 
    printf("Digite o tamanho do vetor: \n");
    scanf("%d", &n);

    int numeros[n];
    for (int i = 0; i < n; i++){
        printf("Digite um valor: \n");
        scanf("%d", &x);
        numeros[i] = x;
    }

    for (int i = 0; i < n; i++){
        printf("(%d) \n", numeros[i]);
    }
    printf("Digite um número que deseja buscar no vetor: \n");
    scanf("%d", &x);
    for (int i = 0; i < n; i++){
        if(numeros[i] == x){
            existex = true;
            break;
        }
    }
    if (existex == true){
        printf("O número digitado <%d> existe \n", x);
        printf("Digite um valor y \n");
        scanf("%d", &y);
        for (int i = 0; i < n; i++){
            if(numeros[i] == y){
                existey = true;
            }
        }
        if(existey == true){
            printf("O número y <%d> digitado já existe no vetor \n", y);
            for (int i = 0; i < n; i++){
                printf("(%d) ", numeros[i]);
            }
        }
        else{
            printf("Vetor final: ");
            for (int i = 0; i < n; i++){
            if(numeros[i] == x){
                numeros[i] = y;
                }
            }
            for (int i = 0; i < n; i++){
                printf("(%d) ", numeros[i]);
            }
        }
    }
    else{
        printf("O número não existe no vetor! \n");
        for (int i = 0; i < n; i++){
                printf("(%d) ", numeros[i]);
        }   
    }
}
