#include <stdio.h>
#include <math.h>

//criando o primeiro struct
struct Vetor2D{
    float x;
    float y;
};

//funcao que vai retornar uma struct com os valores já atribuídos
struct Vetor2D criar_vetor(float x, float y){
    struct Vetor2D ponto;
    ponto.x = x;
    ponto.y = y;

    //retorna o struct montado com os campos já possuindo valores
    return ponto;
}; 

//função recebe o ponteiro da struct criada anteriormente como parametro
float calcular_modulo(struct Vetor2D *ponto){
    float mod =  sqrt(pow(ponto->x, 2) + pow(ponto->y, 2));
    //retorna o valor do módulo
    return mod;
}

int main(void){
    float x, y;
    scanf("%f", &x);
    scanf("%f", &y);

    //estou criando um vetor com os parametros x e y que vão virar um struct chamada ponto
    struct Vetor2D ponto = criar_vetor(x, y);
    
    //o valor do modulo será usar a função calcular módulo com o parametro sendo o endereço do struct ponto que entra como ponteiro na função
    float modulo = calcular_modulo(&ponto);
    printf("%f", modulo);
}

