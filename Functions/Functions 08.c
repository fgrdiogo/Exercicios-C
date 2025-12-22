#include <stdio.h>

int Fibonacci(int n){
    if (n == 0){
        return 0;
    }
    else if (n == 1){
        return 1;
    }
    else{
        return Fibonacci(n-1) + Fibonacci(n-2);
    }
}

int main(void)
{
    int n;
    printf("Qual termo da sequência de Fibonacci você deseja? \n");
    scanf("%d", &n);

    int resultado = Fibonacci(n);
    printf("O termo %d de Fibonacci é %d \n", n, resultado);
}
