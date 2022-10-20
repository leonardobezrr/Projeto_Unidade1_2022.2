#include <stdlib.h>
#include <locale.h>
#include <stdio.h>
//mod venda
void mod_venda(void);
//
//MODULO VENDA
//
void mod_venda(void){
    char qnt[9];
    char cod[20];
    char preco[20];
    system("cls||clear");
    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n"); 
    printf("///                               Menu Venda                                ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("    Informe o codigo do produto: ");
    scanf("%[0-9]",cod);
    getchar();
    printf("    Informe a quantidade: ");
    scanf ("%[0-9]",qnt);
    getchar();
    printf("    Informe o valor: ");
    scanf("%[$,.rR 0-9]",preco);
    getchar();
    printf("\n\n\n       Venda feita com sucesso!");
    getchar();

}