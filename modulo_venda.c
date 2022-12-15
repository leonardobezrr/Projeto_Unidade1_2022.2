#include <stdlib.h>
#include <locale.h>
#include <stdio.h>
#include <string.h>
#include <time.h> 
#include "modulo_venda.h"
#include "modulo_estoque.h"
#include "modulo_usuario.h"
//
////  MENU VENDA
//
Venda* mod_venda(void){
    Usuario* user;
    Venda* primeiro;
    Estoque* prod;
    FILE* fp;
    FILE* fp_us;
    int achou;
    int achou_us;
    char pesquisa[21];
    char pergunta;
    system("cls||clear");
    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n"); 
    printf("///                               Menu Venda                                ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    fp_us = fopen("user.dat","rb");
    if (fp_us == NULL){
      printf("Infelizmente o arquivo apresentou algum erro...\n");
      printf("\n\nTente novamente!\n");
    }else{
      printf("Informe o CPF do cliente (cadastrar caso seja preciso): ");
      scanf("%20[^\n]",pesquisa);
      getchar();
      user = (Usuario*) malloc(sizeof(Usuario));

      achou_us = 0;
      while ((!achou_us)&&(fread(user,sizeof(Usuario),1,fp_us))){
        if ((strcmp(user->cpf,pesquisa) == 0)&& (user -> status == 'C')){
          achou_us = 1;
        }
      }
      if (achou_us){
        printf("\nUsuario encontrado: %s!\n",user->nome);
        primeiro = (Venda*) malloc(sizeof(Venda));
        printf("Informe o codigo do produto: ");
        scanf("%20[^\n]",pesquisa);
        getchar();
        //Procurando produto no estoque
          fp = fopen("produto.dat","rb");
        if (fp == NULL){
          printf("Infelizmente o arquivo apresentou algum erro...\n");
        }else{
          ////////////////////////////////
          prod = (Estoque*) malloc(sizeof(Estoque));                  ////////////////////////////////
          achou = 0;                                          ////////////////////////////////
          while ((!achou)&&(fread(prod,sizeof(Estoque),1,fp))){                       ////////////////////////////////
            if ((strcmp(prod->cod,pesquisa) == 0)&& (prod -> status == 'C')){       ////////////////////////////////
              achou = 1;                                          ////////////////////////////////
            }                                                           ////////////////////////////////////////////////
          }                                                               ////////////////////////////////////////////////
          //
          if (achou){
            exibe_estoque_venda(prod);
            printf("\nEste produto que deseja (s/n) ? ");
            scanf ("%c",&pergunta);
            if (pergunta == 's' || pergunta == 'S'){
              printf("Informe a quantidade: ");
              scanf ("%f[^\n]",&primeiro->qnt);
              getchar();
              primeiro->preco_v = (primeiro->qnt)*(prod->preco_v);
              printf("\n\n\n       Venda feita com sucesso!\n");
            }else{
              printf("\nCerto, entao tente novamente...\n");
            }
          }else{
            printf("\nProduto inacessivel...\nTente novamente!\n");
          }
        }
        primeiro->status = 'C';
        grava_venda(primeiro);
        free(primeiro);
        free(prod);
        fclose(fp);
        free(user);
      }else{
          printf("\nUsuario inacessivel...\n");
      }
      fclose(fp_us);
    }
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    getchar();
    return primeiro;
}
//
//GRAVAR DADO NO ARQUIVO 
//
void grava_venda(Venda* primeiro){
    FILE* fp;
    fp = fopen("venda.dat","ab");
    if (fp == NULL){
        printf("Ops!Ocorreu um erro na abertura do arquivo!\n");
        printf("Nao foi possivel continuar este programa...\n ");
    }
    fwrite(primeiro,sizeof(Venda),1,fp);
    fclose(fp);
}
//
//LISTA VENDA
//
void listar_venda(void){
  FILE* fp;
  Venda* aln;
  int achou;
  achou = 0;
  aln = (Venda*) malloc(sizeof(Venda));
  fp = fopen("venda.dat", "rb");
  if (fp == NULL) {
    printf("\nOps! Ocorreu um erro na abertura do arquivo!\n");
    printf("Tivemos que encerrar o programa...\n");
  }else{
    while(fread(aln, sizeof(Venda), 1, fp)) {
      if (aln->status != 'x') {
        achou += 1;
        printf ("\n  - Venda %d - \n",achou);
        exibe_venda(aln);
      }
    }
  }
  fclose(fp);
  free(aln);
}
//
//EXIBE VENDA
//
void exibe_venda(Venda* primeiro) {
  char situacao[20];
  if ((primeiro == NULL) || (primeiro->status == 'x')) {
    printf("\n---Venda Inexistente---\n");
  } else {
    printf("\nCodigo do produto: 123\n");
    printf("Quantidade: %.f\n", primeiro->qnt);
    printf("Valor: %.2f\n", primeiro->preco_v);
    if (primeiro->status == 'C') {
      strcpy(situacao, "Cadastrado\n");
    } else {
      strcpy(situacao, "Deletado\n");
    }
    printf("Status da venda: %s\n", situacao);
  }
}
//
//GERAR COD - baseada na função de Dayanne Xavier
//
char* gerar_cod(void) {

    char* date = (char*) malloc(20 * sizeof(char));

    time_t temp = time(NULL);

    struct tm* t = localtime(&temp);

    strftime(date, 50, "%d%m%y%H%M%S", t);

    // dia, mes, ano, horas, minutos, segundo

    return date;

}

