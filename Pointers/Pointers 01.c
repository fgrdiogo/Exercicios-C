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
   //enquanto a primeira letra estiver numa posição menor que a ultima vamos trocando os caracteres
   while(primeira_letra < ultima_letra){
      char temp;
      temp = *primeira_letra; 
      *primeira_letra = *ultima_letra;
      *ultima_letra = temp;
      //a primeira letra avança uma casa
      primeira_letra++;
      //ultima letra desce uma casa
      ultima_letra--;
   }
   printf("Palavra invertida: %s \n", str);
}

