#include <stdlib.h>
#include <locale.h>
#include <stdio.h>
#include <string.h>
#include "modulo_venda.h"
#include "modulo_estoque.h"

//
////  MENU VENDA
//
Venda* mod_venda(void){
    Venda* primeiro;
    system("cls||clear");
    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n"); 
    printf("///                               Menu Venda                                ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    primeiro = (Venda*) malloc(sizeof(Venda));
    printf("\nInforme o codigo do produto: ");
    scanf("%20[^\n]",primeiro->cod);
    getchar();
    printf("Informe a quantidade: ");
    scanf ("%ld[^\n]",&primeiro->qnt);
    getchar();
    printf("Informe o valor: ");
    scanf("%f[^\n]",&primeiro->preco);
    getchar();
    primeiro->status = 'C';
    grava_venda(primeiro);
    printf("\n\n\n       Venda feita com sucesso!\n");
    free(primeiro);
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
    exit(1);
  }
  while(fread(aln, sizeof(Venda), 1, fp)) {
    if (aln->status != 'x') {
      achou += 1;
      printf ("\n  - Venda %d - \n",achou);
      exibe_venda(aln);
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
    printf("\nCodigo do produto: %s\n", primeiro->cod);
    printf("Quantidade: %ld\n", primeiro->qnt);
    printf("Valor: %.2f\n", primeiro->preco);
    if (primeiro->status == 'C') {
      strcpy(situacao, "Cadastrado\n");
    } else {
      strcpy(situacao, "Deletado\n");
    }
    printf("Status da venda: %s\n", situacao);
  }
}


