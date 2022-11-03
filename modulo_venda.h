#include <stdlib.h>
#include <locale.h>
#include <stdio.h>
#include <string.h>
typedef struct venda Venda;
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
    printf("    Informe o codigo do produto: ");
    scanf("%20[^\n]",primeiro->cod);
    getchar();
    printf("    Informe a quantidade: ");
    scanf ("%10[^\n]",primeiro->qnt);
    getchar();
    printf("    Informe o valor: ");
    scanf("%20[^\n]",primeiro->preco);
    getchar();
    printf("\n\n\n       Venda feita com sucesso!");
    getchar();

}