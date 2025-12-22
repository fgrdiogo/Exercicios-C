#include <stdio.h>

int contadorVogais(char vet[]){
    int contador_de_vogais = 0;
    //strings em C terminam em \0 ou seja da pra saber quando a string acaba quando o for achar esse caractere
    for (int i = 0; vet[i] != '\0'; i++){
        if(vet[i] == 'a' || vet[i] == 'e' || vet[i] == 'i' || vet[i] == 'o' || vet[i] == 'u' ||
    vet[i] == 'A' || vet[i] == 'E' || vet[i] == 'I' || vet[i] == 'O' || vet[i] == 'U'){
            contador_de_vogais += 1;
        }
    }
    return contador_de_vogais;
}

int main(void)
{   
    char palavra[50];
    printf("Digite a palavra desejada \n");
    fgets(palavra, 50, stdin);

    //estou definindo que a variavel qtd vogais vai ser o return da função contadorVogais quando o parametro usado for o vetor palavra q o usuario digitou
    int quantidade_de_vogais = contadorVogais(palavra);
    printf("A quantidade de vogais é %d \n", quantidade_de_vogais);
}
