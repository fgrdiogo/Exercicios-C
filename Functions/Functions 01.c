#include <stdio.h>

int verificarParidade(int n){
    if(n % 2 == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(void)
{
    int n;
    printf("Digite o valor de n \n");
    scanf("%d", &n);

    if (verificarParidade(n) == 1)
    {
        printf("É PAR\n");
    }
    else{
        printf("É ÍMPAR\n");
    }
    
}   
