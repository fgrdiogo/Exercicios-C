#include <stdio.h>
#include <math.h>

struct Produto{
    int codigo;
    float preco_custo;
    float percentual_lucro;

};

struct Produto ler_produto(){
    struct Produto p1;
    printf("Digite o código do produto \n");
    scanf("%d", &p1.codigo);

    printf("Digite o preço do custo \n");
    scanf("%f", &p1.preco_custo);

    printf("Digite o percentual de lucro \n");
    scanf("%f", &p1.percentual_lucro);

    return p1;
}

float calcular_preco_venda(struct Produto p1){
    float preco_venda = p1.preco_custo * (1 + (p1.percentual_lucro/100));
    
    return preco_venda;
}

int main(void){
    struct Produto info = ler_produto();

    float preco_venda = calcular_preco_venda(info);
    printf("Código %d", info.codigo);
    printf("Percentual de lucro %f", info.percentual_lucro);
    printf("Preço de cuso %f", info.preco_custo);
    printf("Preço de venda %f", preco_venda);
}