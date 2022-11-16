#include <stdlib.h>
#include <locale.h>
#include <stdio.h>
#include <string.h>
typedef struct venda Venda;
//mod venda
void mod_venda(void);
void grava_venda(Venda*);

//
//MODULO VENDA
//
struct venda {
  char cod[21];
  char qnt[11];
  char preco[21];
};

//
////  MENU VENDA
//
void mod_venda(void){
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
    scanf ("%10[^\n]",primeiro->qnt);
    getchar();
    printf("Informe o valor: ");
    scanf("%20[^\n]",primeiro->preco);
    getchar();
    grava_venda(primeiro);
    free(primeiro);
    printf("\n\n\n       Venda feita com sucesso!\n");
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
    fwrite(primeiro,sizeof(Usuario),1,fp);
    fclose(fp);
}