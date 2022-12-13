

#include <stdlib.h>
#include <locale.h>
#include <stdio.h>
#include <string.h>

//mod relatorio
void mod_relatorio(void);
void mod_rt_listar_vendas(void);
void mod_rt_listar_lucros(void);
void mod_rt_listar_gastos(void);

typedef struct venda Venda;
//mod venda
struct venda {
  char cod[21];
  long int qnt;
  long int preco;
  char status;
};

Venda* mod_venda(void);
void grava_venda(Venda*);
void listar_venda(void);
void exibe_venda(Venda*);
void mod_venda_listar();
//
//MODULO VENDA
//


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
    scanf("%ld[^\n]",&primeiro->preco);
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
    printf("\nlistar");
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
    printf("Valor: %ld\n", primeiro->preco);
    if (primeiro->status == 'C') {
      strcpy(situacao, "Cadastrado\n");
    } else {
      strcpy(situacao, "Deletado\n");
    }
    printf("Status da venda: %s\n", situacao);
  }
}

//
//MODULO RELATORIO
//
void mod_relatorio(void)
{
    char perg;
    system("cls||clear");
    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                            Menu Relatorio                               ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Listar Relatorio de vendas                                ///\n");
    printf("///            2. Listar Gastos                                             ///\n");
    printf("///            3. Listar Lucros                                             ///\n");
    printf("///            0. Sair                                                      ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n             O que deseja? ");
    scanf("%c",&perg);
    getchar();
    if (perg=='1'){
        mod_venda_listar();
    }else if(perg == '2'){
        mod_rt_listar_gastos();
    }else if (perg=='3'){
        mod_rt_listar_lucros();
    }else{

    }
    
}
//////////////////////////////////////////////////////

//////////////    RELATORIO     ///////////////////////

//////////////////////////////////////////////////////

//
//LISTAR VENDA
//
void mod_venda_listar(){
    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    system("cls||clear");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                               Menu Venda                                ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                              Listar Vendas                              ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\nVendas efetuadas:\n");
    listar_venda();
    printf("\n///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    getchar();
}

//
//LISTAR GASTOS
//
void mod_rt_listar_gastos(void){
    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    system("cls||clear");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                           Menu Relatorio                                ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                         Listar Gastos                                   ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("Relatorio de gastos:\n");
    printf("Codigo do produto: 2145\n");
    printf("Nome do produto: Omeprasol\n");
    printf("Quantidade de produtos: 2\n");
    printf("Valor Unitario do produto: 30\n\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    getchar();
}

//listar lucros
void mod_rt_listar_lucros(void){
    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    system("cls||clear");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                           Menu Relatorio                                ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                           Listar Lucros                                 ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("Relatorio de lucros:\n");
    printf("\n - Lucro -\n");
    printf("\nR$20.000,00\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    getchar();
}