#include <stdlib.h>
#include <locale.h>
#include <stdio.h>
//mod compra
void mod_compra(void);
void mod_cp_cadastrar(void);
void mod_cp_atualizar(void);
void mod_cp_remover(void);
void mod_cp_listar(void);
void mod_cp_procurar(void);
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
    printf("///            1. Efetuar compra de produto                                 ///\n");
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
    char nome[20];
    char qnt[9];
    char cod[20];
    char preco[20];
    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    system("cls||clear");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                             Menu Compra                                 ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                            Painel compra                                ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");   
    printf("Informe o nome do produto: ");
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
    printf("\n               Compra feita com sucesso!                                       \n");
    printf("\n///////////////////////////////////////////////////////////////////////////////\n");
    
    getchar();
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
    printf("Informe o nome do produto: ");
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