#include <stdlib.h>
#include <locale.h>
#include <stdio.h>
#include <string.h>
//mod venda
void mod_venda(void);
//
//MODULO VENDA
//
struct venda {
  char cod[21];
  char qnt[11];
  char preco[21];
};


void mod_venda(void){
    struct venda primeiro;
    system("cls||clear");
    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n"); 
    printf("///                               Menu Venda                                ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("    Informe o codigo do produto: ");
    scanf("%[0-9]",primeiro.cod);
    getchar();
    printf("    Informe a quantidade: ");
    scanf ("%[0-9]",primeiro.qnt);
    getchar();
    printf("    Informe o valor: ");
    scanf("%[$,.rR 0-9]",primeiro.preco);
    getchar();
    printf("\n\n\n       Venda feita com sucesso!");
    getchar();

}