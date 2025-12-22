#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    char aniver1[9], aniver2[9];
    int aniver1_int[8], aniver2_int[8];
    int soma[2]; 
    printf("Digite a sua data de nascimento 1 \n");
    scanf("%s", aniver1);
    for (int i = 0; i < 8; i++){
        aniver1_int[i] = aniver1[i] - '0';
                                }
    printf("Digite a sua data de nascimento 2 \n");
    scanf("%s", aniver2);
    for (int i = 0; i < 8; i++){
        aniver2_int[i] = aniver2[i] - '0';
                                }
    int soma1 = 0;
    for (int i = 0; i < 8; i++){
        soma1 += aniver1_int[i];
                                }
    int soma2 = 0;
    for (int i = 0; i < 8; i++){
        soma2 += aniver2_int[i];
                                }

    int dig1, dig2;
    while (soma1 >= 10)
    {
        dig1 = soma1 % 10;
        dig2 = soma1 / 10;
        soma1 = dig1 + dig2;
    }
    while (soma2 >= 10)
    {
        dig1 = soma2 % 10;
        dig2 = soma2 / 10;
        soma2 = dig1 + dig2;
    }
    if (soma1 == soma2){
        printf("Vocês são um casal perfeito! \n");
    }
    else{
        printf("Vocês não são um casal perfeito! \n");
    }
    
}
