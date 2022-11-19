#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//struct
typedef struct estoque Estoque;

struct estoque
{
    char nome[21];
    char qnt[11];
    char cod[21];
    char preco[21];
    char status;
};
//mod estoque 
void mod_estoque(void);
Estoque* mod_es_cadastrar(void);
void mod_es_atualizar(void);
void mod_es_remover(void);
void mod_es_listar(void);
void mod_es_procurar(void);
void grava_prod(Estoque*);
void exibe_lista_es();
void exibe_estoque(Estoque*);
//
//MODULO ESTOQUE
//
void mod_estoque(void){
    system("cls||clear");
    Estoque* prod;
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
        prod = mod_es_cadastrar();
        grava_prod(prod);
        free(prod);
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


// cadastrar produto 
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
    scanf ("%10[^\n]",prod->qnt);
    getchar();
    printf("Codigo do produto: ");
    scanf("%20[^\n]",prod->cod);
    getchar();
    printf("Valor: ");
    scanf ("%20[^\n]",prod->preco);
    getchar();
    prod->status = 'C';
    printf("\n               Cadastrado com sucesso!                                       \n");
    printf("\n///////////////////////////////////////////////////////////////////////////////\n");
    getchar();
    return prod;
}
//gravar produto
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
    char cod[20];
    char nome[20];
    char cod_novo[20];
    char qnt[10];
    char preco[20];
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
    printf("Informe o codigo: ");
    scanf("%[0-9]",cod);
    getchar();
    printf("Informe o novo nome (ou o mesmo): ");
    scanf("%[a-z A-Z]",nome);
    getchar();
    printf("Informe o novo codigo (ou o mesmo): ");
    scanf("%[0-9]",cod_novo);
    getchar();
    printf("Informe a quatidade: ");
    scanf("%[0-9]",qnt);
    getchar();
    printf("Informe o valor: ");
    scanf("%[$,.rR 0-9]",preco);
    getchar();
    printf("\n               Atualizado com sucesso!                                       \n");    
    printf("\n///////////////////////////////////////////////////////////////////////////////\n");
    getchar();
}
//
//remover produtos
//
void mod_es_remover(void){
    char cod[20];
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
    printf("Informe o codigo: ");
    scanf("%[0-9]",cod);
    getchar();
    printf("\n               Removido com sucesso!                                       \n");    
    printf("\n///////////////////////////////////////////////////////////////////////////////\n");
    getchar();
}
//
//procurar produtos
//
void mod_es_procurar(void){
    char cod[20];
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
    printf("Informe o codigo: ");
    scanf("%[0-9]",cod);
    getchar();
    printf("\n///////////////////////////////////////////////////////////////////////////////\n");
    getchar();

}
//
//exibe produtos
//
void exibe_estoque(Estoque* al) {
  char situacao[20];
  if ((al == NULL) || (al->status == 'x')) {
    printf("\n---Prodto Inexistente---\n");
  } else {
    printf("\nNome do Produto: %s\n", al->nome);
    printf("Quantidade: %s\n", al->qnt);
    printf("Codigo do Produto: %s\n", al->cod);
    printf("Valor: %s\n", al->preco);
    if (al->status == 'C') {
      strcpy(situacao, "Cadastrado\n");
    } else if (al->status == 't') {
      strcpy(situacao, "Trancado\n");
    } else {
      strcpy(situacao, "Sem dados\n");
    }
    printf("Status do Produto: %s\n", situacao);
  }
}
//exibir lista
void exibe_lista_es(){
  FILE* fp;
  Estoque* aln;
  aln = (Estoque*) malloc(sizeof(Estoque));
  fp = fopen("produto.dat", "rb");
  if (fp == NULL) {
    printf("\nOps! Ocorreu um erro na abertura do arquivo!\n");
    printf("Tivemos que encerrar o programa...\n");
    exit(1);
  }
  while(fread(aln, sizeof(Estoque), 1, fp)) {
    if (aln->status != 'x') {
      exibe_estoque(aln);
    }
  }
  fclose(fp);
  free(aln);
}

//listar produtos do estoque 
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
