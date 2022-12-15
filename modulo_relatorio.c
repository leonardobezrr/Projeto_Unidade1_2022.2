#include <stdlib.h>
#include <locale.h>
#include <stdio.h>
#include <string.h>
#include "modulo_relatorio.h"
#include "modulo_venda.h"






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
    printf("///            2. Listar Usuarios                                           ///\n");
    printf("///            0. Sair                                                      ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n             O que deseja? ");
    scanf("%c",&perg);
    getchar();

 
    if (perg=='1'){
        mod_venda_listar();
    }else if(perg == '2'){
        mod_usuario_relatorio();
    }else{

    }
    
}
//
//LISTAR VENDA
//
void mod_venda_listar(){
    char perg;
    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    system("cls||clear");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                             Menu Relatorio                              ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            1. Listar Relatorio de vendas                                ///\n");
    printf("///            2. Listar gastos                                             ///\n");
    printf("///            3. Listar lucros                                             ///\n");
    printf("///            0. Sair                                                      ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n             O que deseja? ");
    scanf("%c",&perg);
    getchar();    
    if(perg == '1'){
        listar_venda();
    }else if (perg=='2'){
        mod_rt_listar_gastos();
    }else if (perg=='3'){
        mod_rt_listar_lucros();
    }else{

    }
    
}
//
//LISTAR USUARIOS
//
void mod_usuario_relatorio(void){
    printf("\nEm andamento...");
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
    printf("\n\nRelatorio de gastos:\n");
    printf("Codigo do produto: 123\n");
    printf("Nome do produto: Rivotril\n");
    printf("Quantidade de produtos: 100\n");
    printf("Valor Unitario do produto: 49,90\n");
    printf("Valor total: 4990,00\n\n");
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
