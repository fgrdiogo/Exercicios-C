#include <stdio.h>

int somadigitos(int n){
    int soma = 0; 
    if (n < 10){
        return n;
    }
    else{
        soma += n%10 + somadigitos(n/10);
    }
    return soma; 
}

int main(void)
{
   int n; 
   printf("Digite o número \n");
   scanf("%d", &n);

   int soma = somadigitos(n);
   printf("A soma dos dígitos é %d \n", soma);
}
