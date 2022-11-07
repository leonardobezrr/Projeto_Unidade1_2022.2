#include <stdlib.h>
#include <locale.h>
#include <stdio.h>
#include <string.h>
//struct
struct compra{
    char nome[21];
    char qnt[11];
    char cod[21];
    char preco[21];
};
//nomeando struct
typedef struct compra Compra;


//mod compra
void mod_compra(void);
void mod_cp_cadastrar(void);
void mod_cp_atualizar(void);
void mod_cp_remover(void);
void mod_cp_listar(void);
void mod_cp_procurar(void);
void grava_comp(Compra*);
//
//MODULO COMPRA
//
void mod_compra(void){
    char perg;
    system("cls||clear");
    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                            Menu Compra                                  ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Efetuar compra de computo                                 ///\n");
    printf("///            2. Corrigir compra                                           ///\n");
    printf("///            0. Sair                                                      ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n             O que deseja? ");
    scanf("%c",&perg);
    getchar();
    if (perg=='1'){
        mod_cp_cadastrar();
    }else if (perg == '2'){
        mod_cp_atualizar();
    }else{
        
    }
}
//Cadastrar compra
void mod_cp_cadastrar(void){
    Compra* comp;
    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    system("cls||clear");
    comp = (Compra*) malloc(sizeof(Compra));
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                             Menu Compra                                 ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                            Painel compra                                ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");   
    printf("Informe o nome do produto: ");
    scanf ("%20[^\n]",comp->nome);
    getchar();
    printf("Quantidade: ");
    scanf ("%10[^\n]",comp->qnt);
    getchar();
    printf("Codigo do computo: ");
    scanf("%20[^\n]",comp->cod);
    getchar();
    printf("Valor: ");
    scanf ("%20[^\n]",comp->preco);
    getchar();
    getchar();
    printf("\n               Compra feita com sucesso!                                       \n");
    printf("\n///////////////////////////////////////////////////////////////////////////////\n");
    
    getchar();
}

//grava compra
//gravar produto
void grava_comp(Compra* comp){
    FILE* fp;
    fp = fopen("compra.dat","ab");
    if (fp == NULL){
        printf("Ops!Ocorreu um erro na abertura do arquivo!\n");
        printf("Nao foi possivel continuar este programa...\n ");
    }
    fwrite(comp,sizeof(Compra),1,fp);
    fclose(fp);
}
//Atualiazar compra 
void mod_cp_atualizar(void){
    char nome[20];
    char qnt[9];
    char cod[20];
    char preco[20];
    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    system("cls||clear");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                            Menu Compra                                  ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                          Corrigir compra                                ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");   
    printf("Informe o nome do computo: ");
    scanf ("%[A-Z a-z]",nome);
    getchar();
    printf("Informe a quantidade: ");
    scanf ("%[0-9]",qnt);
    getchar();
    printf("Informe o codigo: ");
    scanf ("%[0-9]",cod);
    getchar();
    printf("Informe o valor: ");
    scanf("%[$,.rR 0-9]",preco);
    getchar();
    printf("\n               Compra atualizada com sucesso!                                  \n");
    printf("\n///////////////////////////////////////////////////////////////////////////////\n");
    getchar();
}