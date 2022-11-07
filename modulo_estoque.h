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
void mod_es_cadastrar(void);
void mod_es_atualizar(void);
void mod_es_remover(void);
void mod_es_listar(void);
void mod_es_procurar(void);
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


// cadastrar produto 
void mod_es_cadastrar(void){

    Estoque* primeiro;
    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    system("cls||clear");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                             Menu Estoques                               ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                           Cadastrar produto                             ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");   
    primeiro = (Estoque*) malloc(sizeof(Estoque));
    printf("Informe o nome do produto: ");
    scanf ("%20[^\n]",primeiro->nome);
    getchar();
    printf("Quantidade: ");
    scanf ("%10[^\n]",primeiro->qnt);
    getchar();
    printf("Codigo do produto: ");
    scanf("%20[^\n]",primeiro->cod);
    getchar();
    printf("Valor: ");
    scanf ("%20[^\n]",primeiro->preco);
    getchar();
    primeiro->status = 'C';
    free(primeiro);
    printf("\n               Cadastrado com sucesso!                                       \n");
    printf("\n///////////////////////////////////////////////////////////////////////////////\n");
    getchar();

}
//atualizar produto 
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
//remover produtos
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
//procurar produtos
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
    printf("\n///////////////////////////////////////////////////////////////////////////////\n");
    getchar();
}