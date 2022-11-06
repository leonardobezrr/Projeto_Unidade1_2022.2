#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include "modulo_validacao.h"

typedef struct usuario Usuario;

struct usuario {
  char nome[31];
  char data[21];
  char email[41];
  char numero[21];
  char status;
};
//mod usuário
void mod_usuario(void);
void mod_us_cadastrar(void);
void mod_us_atualizar(void);
void mod_us_remover(void);
void mod_us_listar();
void mod_us_procurar(void);
void exibe_lista();
void grava_user(Usuario*);
void exibe_usuario(Usuario*);


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
////cadastrar usuário_1//
void mod_us_cadastrar(void){
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
    printf("Telefone (99) 99999-9999: ");
    scanf ("%20[^\n]",primeiro->numero);
    getchar();
    primeiro->status = 'C';
    free(primeiro);
    printf("\n               Cadastrado com sucesso!                                       \n");
    printf("\n///////////////////////////////////////////////////////////////////////////////\n");
    getchar();
}
//Gravar no arquivo 
void grava_user(Usuario* aln){
    FILE* fp;
    fp = fopen("user.dat","ab");
    if (fp == NULL){
        printf("Ops!Ocorreu um erro na abertura do arquivo!\n");
        printf("Nao foi possivel continuar este programa...\n ");
    }
    fwrite(aln,sizeof(Usuario),1,fp);
    fclose(fp);
}
//exibir

////atualizar usuario_2///
void mod_us_atualizar(void){
    Usuario* primeiro;
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
    primeiro = (Usuario*) malloc(sizeof(Usuario)); 
    printf("Informe o email: ");
    scanf("%[@_.a-z0-9]",primeiro->email);
    getchar();
    printf("Informe seu nome: ");
    scanf ("%[A-Z a-z]",primeiro->nome);
    getchar();
    printf("Sua data de nascimento (dd/mm/aa): ");
    scanf ("%[0-9/]",primeiro->data);
    getchar();
    printf("Telefone (99) 99999-9999: ");
    scanf ("%[() 0-9]",primeiro->numero);
    getchar();
    free(primeiro);
    printf("\n               Atualizado com sucesso!                                       \n");    
    printf("\n///////////////////////////////////////////////////////////////////////////////\n");
    getchar();

}
////remover usuario_3///
void mod_us_remover(void){
    Usuario primeiro;
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
    printf("Informe o email: ");
    scanf("%[@_.a-z0-9]",primeiro.email);
    getchar();
    printf("\n               Removido com sucesso!                                       \n");        
    printf("\n///////////////////////////////////////////////////////////////////////////////\n");
    getchar();

}
////listar usuario_4///
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
    exibe_lista();
    printf("\n///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    system("pause");
}
//exibindo usuarios
void exibe_usuario(Usuario* al) {
  char situacao[20];
  if ((al == NULL) || (al->status == 'x')) {
    printf("\n---Usuario Inexistente---\n");
  } else {
    printf("Nome do Usuario: %s\n", al->nome);
    printf("Email: %s\n", al->email);
    printf("Data: %s\n", al->data);
    printf("Telefone: %s\n", al->numero);
    if (al->status == 'C') {
      strcpy(situacao, "Cadastrado\n");
    } else if (al->status == 't') {
      strcpy(situacao, "Trancado\n");
    } else {
      strcpy(situacao, "Não informada\n");
    }
    printf("Situação do Usuario: %s\n\n\n", situacao);
  }
}
/// Exibe lista de usuários//
void exibe_lista(){
  FILE* fp;
  Usuario* aln;
  aln = (Usuario*) malloc(sizeof(Usuario));
  fp = fopen("user.dat", "rb");
  if (fp == NULL) {
    printf("\nOps! Ocorreu um erro na abertura do arquivo!\n");
    printf("Tivemos que encerrar o programa...\n");
    exit(1);
  }
  while(fread(aln, sizeof(Usuario), 1, fp)) {
    if (aln->status != 'x') {
      exibe_usuario(aln);
    }
  }
  fclose(fp);
  free(aln);
}

////procurar usuario_5///
void mod_us_procurar(void){
    Usuario* primeiro;
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
    primeiro = (Usuario*) malloc(sizeof(Usuario));
    printf("Informe o email: ");
    scanf("%[@_.a-z0-9]",primeiro->email);
    getchar();
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    getchar();
}