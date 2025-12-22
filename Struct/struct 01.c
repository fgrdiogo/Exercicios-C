#include <stdio.h>
#include <stdbool.h>

struct Aluno{
      char nome[50];
      int matricula;
      float n1, n2;
   };

int main(void)
{
   struct Aluno a1;

   printf("Digite o nome do aluno \n");
   scanf("%s", a1.nome);

   printf("Digite a matrícula do aluno \n");
   scanf("%d", &a1.matricula);

   printf("Digite a nota 1 \n");
   scanf("%f", &a1.n1);

   printf("Digite a nota 2 \n");
   scanf("%f", &a1.n2);

   float media = (a1.n1 + a1.n2)/2;

   if (media < 7){
      printf("O aluno %s, de matricula %d foi reprovado! \n", a1.nome, a1.matricula);
   }
   else{
      printf("O aluno %s, de matricula %d foi aprovado! \n", a1.nome, a1.matricula);
   }


}

