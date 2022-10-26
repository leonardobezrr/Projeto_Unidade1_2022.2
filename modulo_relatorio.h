

#include <stdlib.h>
#include <locale.h>
#include <stdio.h>
#include <string.h>

//mod relatorio
void mod_relatorio(void);
void mod_rt_listar_vendas(void);
void mod_rt_listar_lucros(void);
void mod_rt_listar_gastos(void);
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
        mod_rt_listar_vendas();
    }else if(perg == '2'){
        mod_rt_listar_gastos();
    }else if (perg=='3'){
        mod_rt_listar_lucros();
    }else{

    }
    
}
//listar relatorio de venda
void mod_rt_listar_vendas(void){
    setlocale(LC_ALL,"portuguese");
    printf("\n");
    system("cls||clear");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                           Menu Relatorio                                ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                         Listar Relatorio                                ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("Relatorio de vendas:\n\n");
    printf("Codigo do produto: 25485\n");
    printf("Nome do produto: Rivotril\n");
    printf("Quantidade de produtos: 12\n");
    printf("Valor Unitario do produto: 25\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    getchar();
}
//listar gastos
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
    printf("///                         Listar Lucros                                   ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("Relatorio de lucros:\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    getchar();
}