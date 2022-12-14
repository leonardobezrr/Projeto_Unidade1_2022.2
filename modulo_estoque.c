#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include "modulo_estoque.h"

//
//MODULO ESTOQUE
//
void mod_estoque(void){
    system("cls||clear");
    char perg_es;
    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                              Menu Estoque                               ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Cadastrar Produto                                         ///\n");
    printf("///            2. Atualizar Produto                                         ///\n");
    printf("///            3. Remover Produto                                           ///\n");
    printf("///            4. Procurar Produto                                          ///\n");
    printf("///            5. Listar Produtos                                           ///\n");
    printf("///            0. Sair                                                      ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n             O que deseja? ");
    scanf("%c",&perg_es);
    getchar();
    if (perg_es=='1'){
        mod_es_cadastrar();
    }else if (perg_es == '2'){
        mod_es_atualizar();
    }else if (perg_es == '3'){
        mod_es_remover();
    }else if (perg_es == '4'){
        mod_es_procurar();
    }else if (perg_es == '5'){
        mod_es_listar();
    }else{
        
    }

}

//
// cadastrar produto 
//
Estoque* mod_es_cadastrar(void){
    Estoque* prod;
    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    system("cls||clear");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                             Menu Estoque                                ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                           Cadastrar produto                             ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");   
    prod = (Estoque*) malloc(sizeof(Estoque));
    printf("Informe o nome do produto: ");
    scanf ("%20[^\n]",prod->nome);
    getchar();
    printf("Quantidade: ");
    scanf ("%ld[^\n]",&prod->qnt);
    getchar();
    printf("Codigo do produto: ");
    scanf("%20[^\n]",prod->cod);
    getchar();
    printf("Valor de venda: ");
    scanf ("%f[^\n]",&prod->preco_v);
    getchar();
    printf("Valor de compra: ");
    scanf ("%f[^\n]",&prod->preco_c);
    getchar();
    prod->status = 'C';
    grava_prod(prod);
    free(prod);
    printf("\n               Cadastrado com sucesso!                                       \n");
    printf("\n///////////////////////////////////////////////////////////////////////////////\n");
    getchar();
    return prod;
}
//
//gravar produto
//
void grava_prod(Estoque* prod){
    FILE* fp;
    fp = fopen("produto.dat","ab");
    if (fp == NULL){
        printf("Ops!Ocorreu um erro na abertura do arquivo!\n");
        printf("Nao foi possivel continuar este programa...\n ");
    }
    fwrite(prod,sizeof(Estoque),1,fp);
    fclose(fp);
}
//
//atualizar produto 
//
void mod_es_atualizar(void){
    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    system("cls||clear");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                             Menu Estoque                                ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                            Atualizar Produto                            ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");   
    atualiza_es();    
    printf("\n///////////////////////////////////////////////////////////////////////////////\n");
    getchar();
}
//
//ATUALIZANDO ESTOQUE
//
void atualiza_es(void){
    FILE* fp;
    Estoque* prod;
    int achou;
    char resp;
    char pesquisa[21];
    fp = fopen("produto.dat","r+b");
    if (fp == NULL){
      printf("Infelizmente o arquivo apresentou algum erro...\n");
    }else{
      printf("\nInforme o codigo do produto: ");
      scanf("%20[^\n]",pesquisa);
      prod = (Estoque*) malloc(sizeof(Estoque));
      achou = 0;
      while ((!achou)&&(fread(prod,sizeof(Estoque),1,fp))){
        if ((strcmp(prod->cod,pesquisa) == 0)&& (prod -> status == 'C')){
          achou = 1;
        }
      }
      if (achou){
        exibe_estoque(prod);
        getchar();
        printf("Deseja realmente alterar esse usuario (s/n)? ");
        scanf("%c",&resp);
        getchar();
        if (resp == 's'||resp == 'S'){
          printf("Informe o nome do produto: ");
          scanf ("%20[^\n]",prod->nome);
          getchar();
          printf("Quantidade: ");
          scanf ("%ld[^\n]",&prod->qnt);
          getchar();
          printf("Codigo do produto: ");
          scanf("%20[^\n]",prod->cod);
          getchar();
          printf("Valor de venda: ");
          scanf ("%f[^\n]",&prod->preco_v);
          getchar();
          printf("Valor de compra: ");
          scanf ("%f[^\n]",&prod->preco_c);
          getchar();
          prod->status = 'C';
          fseek(fp,(-1)*sizeof(Estoque),SEEK_CUR);
          fwrite(prod,sizeof(Estoque),1,fp);
          printf("\nAtualizado com sucesso!                                       \n");
        }else{
          printf("\nCerto, o produto permanece intacto...\n");
        }
      }else{
        printf("\nO produto %s nao foi encontrado...\n",pesquisa);
      }
    }
    free(prod);
    fclose(fp);
}
//
//remover produtos
//
void mod_es_remover(void){
    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    system("cls||clear");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                             Menu Estoque                                ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                            Remover Produto                              ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");   
    remove_prod();
    printf("\n///////////////////////////////////////////////////////////////////////////////\n");
    getchar();
}
//
//REMOVE PRODUTO
//
void remove_prod(void){
  FILE* fp;
  Estoque* prod;
  int achou;
  char resposta;
  char pesquisa[21];
  fp = fopen("produto.dat","r+b");
  if (fp==NULL){
    printf("\nOps!Ocorreu um erro ao tentar abrir o arquivo!\nTente rodar o programa novamente...\n");
  }else{
    printf("\nInforme o codigo do produto: ");
    scanf("%20[^\n]",pesquisa);
    prod = (Estoque*) malloc(sizeof(Estoque));
    achou = 0;
    while ((!achou)&&(fread(prod,sizeof(Estoque),1,fp))){
      if((strcmp(prod->cod,pesquisa)==0)&&(prod->status=='C')){
        achou = 1;
      }
    }
    if (achou){
      exibe_estoque(prod);
      getchar();
      printf("Quer realmente deletar esse produto (s/n)? ");
      scanf("%c",&resposta);
      getchar();
      if(resposta == 's' || resposta == 'S'){
        prod -> status = 'D';
        fseek(fp,(-1)*sizeof(Estoque),SEEK_CUR);
        fwrite(prod,sizeof(Estoque),1,fp);
        printf("\nUsuario deletado com sucesso!\n");
      }else{
        printf("\nCerto, o produto permanece cadastrado\n");
      }
    }else{
      printf("\nO produto %s encontra-se inexistente...",pesquisa);
    }
    free(prod);
  }
  fclose(fp);

}
//
//procurar produtos
//
void mod_es_procurar(void){
    Estoque* prod;
    FILE* fp;
    int achou;
    char pesquisa[21];
    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    system("cls||clear");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                              Menu Estoque                               ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                            Procurar produto                             ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");   
    fp = fopen("produto.dat","rb");
    if (fp == NULL){
      printf("Infelizmente o arquivo apresentou algum erro...\n");
    }else{
      printf("Informe o codigo do produto: ");
      scanf("%20[^\n]",pesquisa);
      prod = (Estoque*) malloc(sizeof(Estoque));
      achou = 0;
      while ((!achou)&&(fread(prod,sizeof(Estoque),1,fp))){
        if ((strcmp(prod->cod,pesquisa) == 0)&& (prod -> status == 'C')){
          achou = 1;
        }
      }
      if (achou){
        exibe_estoque(prod);
      }else{
        printf("\nProduto inacessivel...\n");
      }
      free(prod);
    }
    fclose(fp);
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    getchar();
}
//
//exibe produtos
//
void exibe_estoque(Estoque* al) {
  char situacao[20];
  if ((al == NULL) || (al->status == 'x')) {
    printf("\n---Produto Inexistente---\n");
  } else {
    printf("\n\nNome do Produto: %s\n", al->nome);
    printf("Quantidade: %ld\n", al->qnt);
    printf("Codigo do Produto: %s\n", al->cod);
    printf("Valor de venda: %.2f\n", al->preco_v);
    printf("Valor de compra: %.2f\n", al->preco_c);
    if (al->status == 'C') {
      strcpy(situacao, "Cadastrado\n");
    } else if (al->status == 'T') {
      strcpy(situacao, "Trancado\n");
    } else {
      strcpy(situacao, "Deletado\n");
    }
    printf("Status do Produto: %s\n", situacao);
  }
}

//
//Exibe estoque venda confirma????o
//
void exibe_estoque_venda_v() {
  FILE* fp;
  Estoque* al;
  al = (Estoque*) malloc(sizeof(Estoque));
  fp = fopen("produto.dat", "rb");
  if (fp == NULL) {
    printf("\nOps! Ocorreu um erro na abertura do arquivo!\n");
    printf("Tivemos que encerrar o programa...\n");
  }else{
    while(fread(al, sizeof(Estoque), 1, fp)) {
      if (al->status != 'x') {
        exibe_estoque_venda(al);
      }
    }
  }
  fclose(fp);
  free(al);
}
//
//Exibe estoque venda listagem no relat??rio
//
void exibe_estoque_venda_re() {
  FILE* fp;
  Estoque* al;
  al = (Estoque*) malloc(sizeof(Estoque));
  fp = fopen("produto.dat", "rb");
  if (fp == NULL) {
    printf("\nOps! Ocorreu um erro na abertura do arquivo!\n");
    printf("Tivemos que encerrar o programa...\n");
  }else{
    while(fread(al, sizeof(Estoque), 1, fp)) {
      if (al->status != 'x') {
        exibe_venda_re(al);
      }
    }
  }
  fclose(fp);
  free(al);
}
//
//Exibe estoque venda relatorio
//
void exibe_venda_re(Estoque* al) {
  if ((al == NULL) || (al->status == 'x')) {
    printf("\n---Produto Inexistente---\n");
  } else {
    printf("\nCodigo do Produto: %s\n", al->cod);

  }
}
//
//Exibe estoque venda confirma????o
//
void exibe_estoque_venda(Estoque* al) {
  if ((al == NULL) || (al->status == 'x')) {
    printf("\n---Produto Inexistente---\n");
  } else {
    printf("\n\nNome do Produto: %s\n", al->nome);
    printf("Quantidade: %ld\n", al->qnt);
    printf("Valor: %.2f\n", al->preco_v);
  }
}
//
//exibir lista
//
void exibe_lista_es(){
  FILE* fp;
  Estoque* aln;
  aln = (Estoque*) malloc(sizeof(Estoque));
  fp = fopen("produto.dat", "rb");
  if (fp == NULL) {
    printf("\nOps! Ocorreu um erro na abertura do arquivo!\n");
    printf("Tivemos que encerrar o programa...\n");
  }else{
    while(fread(aln, sizeof(Estoque), 1, fp)) {
      if (aln->status != 'x') {
        exibe_estoque(aln);
      }
    }
  }
  fclose(fp);
  free(aln);
}
//
//listar produtos do estoque 
//
void mod_es_listar(void){
    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    system("cls||clear");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                              Menu Estoque                               ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                             Listar produtos                             ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("Produtos cadastrados:");
    exibe_lista_es();
    printf("\n///////////////////////////////////////////////////////////////////////////////\n");
    getchar();
}
