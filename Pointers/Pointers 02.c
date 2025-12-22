#include <stdio.h>
#include <stdbool.h>

int main (void){
   char str[50];
   printf("Digite uma palavra \n");
   scanf("%s", str);

   //o ponteiro ptr aponta para a primeira letra da string
   char *ptr = str;
   //atribui a primeira letra da string ao ponteiro primeira_letra
   char *primeira_letra = ptr;
   //inicializando o ponteiro ultima letra
   char *ultima_letra;
   //for para encontrar qual é a ultima letra da string
   for (int i = 0; i < 50; i++){
      if(*(ptr + i) == '\0'){
         ultima_letra = (ptr + i - 1);
         break;
      }
   }
   //inicializando variável de verificação
   int palindromo = 0;
   //verificar a primeira com a ultima letra
   while(primeira_letra < ultima_letra){
      //verifica se a primeira letra é diferente da ultima
      if(*primeira_letra != *ultima_letra){
         //se for a verificação muda de valor e o while quebra
         palindromo = 1;
         break;
      }
      //pula uma para direita
      primeira_letra++;
      //desce uma para esquerda
      ultima_letra--;
   }
   if (palindromo == 0){
      printf("É palíndromo \n");
   }
   else{
      printf("Não é palíndromo \n");
   }
}

