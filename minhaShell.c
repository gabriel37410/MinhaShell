#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>


int main(){

char opcao[10];
//char diretorio[50];
//char comando = diretorio + 3;

 do{
   printf(">");
   scanf("%s", opcao);

   if(strcmp(opcao, "hello") == 0){
      printf("Hello User\n");
   }
   else if(strcmp(opcao, "help") == 0){
      printf("  Segue alguns comandos de nossa shell\n");
      printf("  >hello: Saudacao\n");
      printf("  >help: Lista de ajuda\n");
      printf("  >ls: Exibe os diretorios em lista\n");
      printf("  >cd: Entra em um diretorio\n");
      printf("  >exit\n");
   }
   else if(strcmp(opcao, "ls") ==0){
      system("ls -l");
   }

//   else if(strcmp(opcao, "cd") == 0){
//      scanf("%s", diretorio);
//      chdir(comando);
//   }

 }while (strcmp(opcao, "exit") != 0);
}
