#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <unistd.h>
#include "modulo_validacao.h"
#include "modulo_usuario.h"
//
// Módulo USUARIO
//
void mod_usuario(void){
    char perg_us;
    system("cls||clear");
    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                              Menu Usuarios                              ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Cadastrar Usuario                                         ///\n");
    printf("///            2. Atualizar Usuario                                         ///\n");
    printf("///            3. Remover Usuario                                           ///\n");
    printf("///            4. Listar Usuario                                            ///\n");
    printf("///            5. Procurar Usuario                                          ///\n");
    printf("///            0. Sair                                                      ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n             O que deseja? ");
    scanf("%c",&perg_us);
    getchar();
    if (perg_us=='1'){
        mod_us_cadastrar();
    }else if (perg_us == '2'){
        mod_us_atualizar();
    }else if (perg_us == '3'){
        mod_us_remover();
    }else if (perg_us == '4'){
        mod_us_listar();
    }else if (perg_us == '5'){
        mod_us_procurar();
    }else{

    }
}

//
////CADASTRAR USUARIO
//
Usuario* mod_us_cadastrar(void){
    Usuario* primeiro;
    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    system("cls||clear");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                             Menu Usuarios                               ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                           Cadastrar Usuario                             ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");   
    primeiro = (Usuario*) malloc(sizeof(Usuario));
    printf("Informe seu nome: ");
    scanf ("%30[^\n]",primeiro->nome);
    getchar();
    printf("Sua data de nascimento (dd/mm/aa): ");
    scanf ("%20[^\n]",primeiro->data);
    getchar();
    printf("Email: ");
    scanf("%40[^\n]",primeiro->email);
    getchar();
    if (email_validacao(primeiro->email)){
      printf("Telefone (99) 99999-9999: ");
      scanf ("%20[^\n]",primeiro->numero);
      getchar();
      printf("CPF: ");
      scanf("%20[^\n]",primeiro->cpf);
      getchar();
      if (!validarCPF(primeiro->cpf)){
        primeiro->status = 'C';
        grava_user(primeiro);
        free(primeiro);
        printf("\n               Cadastrado com sucesso!                                       \n");
        
      }else{
        printf("\nUsuario ja cadastrado\n\tou\nCPF invalido\n");
      }
      
    }else{
      printf("\nEmail invalido...");
    }
    printf("\n///////////////////////////////////////////////////////////////////////////////\n");
    getchar();
    return primeiro;
}
//
//Encontar usuario Baseado no código de Dayanne Xavier 
//
Usuario* achar_user(char *cpf) { 
    FILE* fp;
    Usuario* primeiro;

    if (access("user.dat", F_OK) != -1) {
        fp = fopen("user.dat", "rb");

        if (fp == NULL) {
            printf("Ocorreu um erro na abertura do arquivo!\n");

        }

        else {

            primeiro = (Usuario*) malloc(sizeof(Usuario));

            while(fread(primeiro, sizeof(Usuario), 1, fp)) {

                if ((strcmp(primeiro->cpf, cpf) == 0) && (primeiro->status != 'x')) {
                    fclose(fp);
                    return primeiro;

                } 

            }

        }

        fclose(fp);
    }

    return NULL;
}
//
//GRAVAR DADO NO ARQUIVO 
//
void grava_user(Usuario* primeiro){
    FILE* fp;
    fp = fopen("user.dat","ab");
    if (fp == NULL){
        printf("Ops!Ocorreu um erro na abertura do arquivo!\n");
        printf("Nao foi possivel continuar este programa...\n ");
    }
    fwrite(primeiro,sizeof(Usuario),1,fp);
    fclose(fp);
}
//
//EXIBE USUARIO
//
void exibe_usuario(Usuario* primeiro) {
  char situacao[20];
  if ((primeiro == NULL) || (primeiro->status == 'x')) {
    printf("\n---Usuario Inexistente---\n");
  } else {
    printf("\nNome do Usuario: %s\n", primeiro->nome);
    printf("Email: %s\n", primeiro->email);
    printf("Data: %s\n", primeiro->data);
    printf("Telefone: %s\n", primeiro->numero);
    printf("CPF: %s\n",primeiro->cpf);
    if (primeiro->status == 'C') {
      strcpy(situacao, "Cadastrado\n");
    } else {
      strcpy(situacao, "Deletado\n");
    }
    printf("Status do Usuario: %s\n", situacao);
  }
}
//
//LISTA USUARIO
//
void listar_user(void){
  FILE* fp;
  Usuario* aln;
  int achou;
  achou = 0;
  aln = (Usuario*) malloc(sizeof(Usuario));
  fp = fopen("user.dat", "rb");
  if (fp == NULL) {
    printf("\nOps! Ocorreu um erro na abertura do arquivo!\n");
    printf("Tente novamente...\n");
  }else{
    while(fread(aln, sizeof(Usuario), 1, fp)) {
      if (aln->status != 'x') {
        achou += 1;
        printf ("\n  - Usuario %d - \n",achou);
        exibe_usuario(aln);
      }else{
        printf("\nTalvez nao haja nenhum usuario cadastrado...");
      }
    }
  }
  fclose(fp);
  free(aln);
}
//
////ATUALIZAR USUARIO//
//
void mod_us_atualizar(void){
    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    system("cls||clear");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                             Menu Usuarios                               ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                            Atualizar Usuario                            ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");  
    atualiza_user();
    printf("\n///////////////////////////////////////////////////////////////////////////////\n");
    getchar();

}
//
//ATUALIZANDO USUARIO
//
void atualiza_user(void){
  FILE* fp;
  Usuario* primeiro;
  int achou;
  char resp;
  char pesquisa[21];
  fp = fopen("user.dat","r+b");
  if (fp == NULL){
    printf("Infelizmente o arquivo apresentou algum erro...\n");
    getchar();
  }else{
    printf("\nInforme o CPF do usuario: ");
    scanf("%20[^\n]",pesquisa);
    primeiro = (Usuario*) malloc(sizeof(Usuario));
    achou = 0;
    while ((!achou)&&(fread(primeiro,sizeof(Usuario),1,fp))){
      if ((strcmp(primeiro->cpf,pesquisa) == 0)&& (primeiro -> status == 'C')){
        achou = 1;
      }
    }
    if (achou){
      exibe_usuario(primeiro);
      getchar();
      printf("Deseja realmente alterar esse usuario (s/n)? ");
      scanf("%c",&resp);
      getchar();
      if (resp == 's' || resp == 'S'){
        printf("Informe seu nome: ");
        scanf ("%30[^\n]",primeiro->nome);
        getchar();
        printf("Sua data de nascimento (dd/mm/aa): ");
        scanf ("%20[^\n]",primeiro->data);
        getchar();
        printf("Email: ");
        scanf("%40[^\n]",primeiro->email);
        getchar();
        if (email_validacao(primeiro->email)){
          printf("Telefone (99) 99999-9999: ");
          scanf ("%20[^\n]",primeiro->numero);
          getchar();
          printf("CPF: ");
          scanf("%20[^\n]",primeiro->cpf);
          getchar();
          if (validarCPF(primeiro->cpf)){
            primeiro->status = 'C';
            primeiro->status = 'C';
            fseek(fp,(-1)*sizeof(Usuario),SEEK_CUR);
            fwrite(primeiro,sizeof(Usuario),1,fp);
            printf("\nUsuario alterado com sucesso!\n");
          }else{
            printf("\nCPF invalido...");
          }
        }else{
          printf("\nEmail invalido...");
        }
      }else{
        printf("\nCerto, seus dados permanecem intactos...\n");
      }
    }else{
      printf("O cpf %s nao foi encontrado...\n",pesquisa);
      getchar();
    }
    free(primeiro);
  }
  fclose(fp);

}
//
////REMOVER USUARIO//
//
void mod_us_remover(void){
    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    system("cls||clear");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                              Menu Usuarios                              ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                            Remover Usuario                              ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");   
    remove_usuario();
    printf("\n");
    printf("\n///////////////////////////////////////////////////////////////////////////////\n");
    getchar();

}
//
//REMOVER USUARIO
//
void remove_usuario(void){
  FILE* fp;
  Usuario* primeiro;
  int achou;
  char resposta;
  char pesquisa[21];
  fp = fopen("user.dat","r+b");
  if (fp==NULL){
    printf("\nOps!Ocorreu um erro ao tentar abrir o arquivo!\nTente rodar o programa novamente...\n");
  }else{
    printf("\nInforme o CPF: ");
    scanf("%20[^\n]",pesquisa);
    primeiro = (Usuario*) malloc(sizeof(Usuario));
    achou = 0;
    while ((!achou)&&(fread(primeiro,sizeof(Usuario),1,fp))){
      if((strcmp(primeiro->cpf,pesquisa)==0)&&(primeiro->status=='C')){
        achou = 1;
      }
    }
    if (achou){
      exibe_usuario(primeiro);
      getchar();
      printf("Quer realmente deletar esse usuario (s/n)? ");
      scanf("%c",&resposta);
      getchar();
      if(resposta == 's' || resposta == 'S'){
        primeiro -> status = 'x';
        fseek(fp,(-1)*sizeof(Usuario),SEEK_CUR);
        fwrite(primeiro,sizeof(Usuario),1,fp);
        printf("\nUsuario deletado com sucesso!\n");
      }else{
        printf("\nCerto, o usuario permanece cadastrado\n");
      }
    }else{
      printf("\nO cpf %s encontra-se inexistente...",pesquisa);
    }
    free(primeiro);
  }
  fclose(fp);
}
//
////LISTAR USUARIOS//
//
void mod_us_listar(){
    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    system("cls||clear");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                              Menu Usuarios                              ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                             Listar Usuarios                             ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\nUsuarios Cadastrados:\n");
    listar_user();
    printf("\n///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    getchar();
}
//
////PROCURAR USUARIOS//
//
void mod_us_procurar(void){
    Usuario* primeiro;
    FILE* fp;
    int achou;
    char pesquisa[21];
    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    system("cls||clear");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                              Menu Usuarios                              ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                             Procurar Usuario                            ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    fp = fopen("user.dat","rb");
    if (fp == NULL){
      printf("Infelizmente o arquivo apresentou algum erro...\n");
      exit(1);
    }
    printf("Informe o CPF: ");
    scanf("%20[^\n]",pesquisa);
    getchar();
    primeiro = (Usuario*) malloc(sizeof(Usuario));
    achou = 0;
    while ((!achou)&&(fread(primeiro,sizeof(Usuario),1,fp))){
      if ((strcmp(primeiro->cpf,pesquisa) == 0)&& (primeiro -> status == 'C')){
        achou = 1;
      }
    }
    if (achou){
      exibe_usuario(primeiro);
    }else{
      printf("\nUsuario inacessivel...\n");
    }
    free(primeiro);
    fclose(fp);
    getchar();
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    getchar();
}
//Valida cpf baseado no codigo de https://gist.github.com/eduardoedson/8f991b6d234a9ebdcbe3
int validarCPF(char *cpf)
{
    Usuario* primeiro;
    int i, j, primeiro_nmr = 0, segundo_nmr = 0;
    if(strlen(cpf) != 11)
        return 0;
    else if((strcmp(cpf,"00000000000") == 0) || (strcmp(cpf,"11111111111") == 0) || (strcmp(cpf,"22222222222") == 0) ||
            (strcmp(cpf,"33333333333") == 0) || (strcmp(cpf,"44444444444") == 0) || (strcmp(cpf,"55555555555") == 0) ||
            (strcmp(cpf,"66666666666") == 0) || (strcmp(cpf,"77777777777") == 0) || (strcmp(cpf,"88888888888") == 0) ||
            (strcmp(cpf,"99999999999") == 0))
        return 0; ///se o CPF tiver todos os números iguais ele é inválido.
    else
    {
        ///primeiro digito 
        for(i = 0, j = 10; i < strlen(cpf)-2; i++, j--) ///multiplica os números de 10 a 2 e soma os resultados dentro de primeiro_nmr
            primeiro_nmr += (cpf[i]-48) * j;
        primeiro_nmr %= 11;
        if(primeiro_nmr < 2)
            primeiro_nmr = 0;
        else
            primeiro_nmr = 11 - primeiro_nmr;
        if((cpf[9]-48) != primeiro_nmr)
            return 0; ///se o primeiro digito  não for o mesmo que o da validação CPF é inválido
        else
        ///segundo digito 
        {
            for(i = 0, j = 11; i < strlen(cpf)-1; i++, j--) ///multiplica os números de 11 a 2 e soma os resultados dentro de segundo_nmr
                    segundo_nmr += (cpf[i]-48) * j;
        segundo_nmr %= 11;
        if(segundo_nmr < 2)
            segundo_nmr = 0;
        else
            segundo_nmr = 11 - segundo_nmr;
        if((cpf[10]-48) != segundo_nmr)
            return 0; ///se o segundo digito  não for o mesmo que o da validação CPF é inválido
        }
    }
    primeiro = achar_user(cpf);

    if (primeiro != NULL) {

        free(primeiro);
        return 1;

    }
    free(primeiro);
    return 0;
}