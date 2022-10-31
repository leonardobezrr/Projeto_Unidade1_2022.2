///////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte                 ///
///                 Centro de Ensino Superior do Seridó                     ///
///               Departamento de Computação e Tecnologia                   ///
///                  Disciplina DCT1106 -- Programação                      ///
///                  Projeto Sistema de Gestão Farmaceutica                 ///
///             Developed by @leonardobezrr_ -- since August, 2022          ///
///////////////////////////////////////////////////////////////////////////////
///                                Semana 1                                 ///
///////////////////////////////////////////////////////////////////////////////
//utilizar getchar();    depois do scanf, para tirar o Enter
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "modulo_usuario.h"
#include "modulo_estoque.h"
#include "modulo_venda.h"
#include "modulo_compra.h"
#include "modulo_relatorio.h"
#include "modulo_validacao.h"
////////
// Assinatura das funções
////////
char tela_principal();
void tela_sobre(void);
void tela_equipe(void);
/////
// Programa principal
////
int main(void) {
    setlocale(LC_ALL,"portuguese");
    char opcao;
        do {
            opcao = tela_principal();
            switch (opcao)
            {
            case '1': 
                mod_usuario();
                break;
            case '2': 
                mod_estoque();
                break;
            case '3': 
                mod_compra();
                break;
            case '4': 
                mod_relatorio();
                break;
            case '5': 
                mod_venda();
                break;
            case '6':
                tela_equipe();
                tela_sobre();
                break;
            case '0':
                printf("\n\n   Voce optou por encerrar o programa!\n   Ate a proxima!");
                break;
            default:
                printf("\n   Digite um numero valido!");
                getchar();
                break;
            }
        }while (opcao!='0');   
    return 0;
}
/////
// Funções
//Primeira tela do programa
/////
char tela_principal() {
    system("cls||clear");
    char perg;
    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///             Universidade Federal do Rio Grande do Norte                 ///\n");
    printf("///                 Centro de Ensino Superior do Serido                     ///\n");
    printf("///               Departamento de Computacao e Tecnologia                   ///\n");
    printf("///                  Disciplina DCT1106 -- Programacao                      ///\n");
    printf("///                  Projeto Sistema de Gestao Farmaceutica                 ///\n");
    printf("///             Developed by @leonardobezrr_ -- since August, 2022          ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            = = = = = Sistema de Gestao Farmaceutica = = = = =           ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Modulo Usuarios                                           ///\n");
    printf("///            2. Modulo Estoque                                            ///\n");
    printf("///            3. Modulo Compra                                             ///\n");
    printf("///            4. Modulo Relatorios                                         ///\n");
    printf("///            5. Modulo Vendas                                             ///\n");
    printf("///            6. Equipe e sobre                                            ///\n");
    printf("///            0. Sair                                                      ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n             O que deseja? ");
    scanf("%c",&perg);
    getchar();
    return perg;
    }
//
// Tela sobre o projeto
//
void tela_sobre(void) {
    system("cls||clear");
    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///             Universidade Federal do Rio Grande do Norte                 ///\n");
    printf("///                 Centro de Ensino Superior do Serido                     ///\n");
    printf("///               Departamento de Computacao e Tecnologia                   ///\n");
    printf("///                  Disciplina DCT1106 -- Programacao                      ///\n");
    printf("///                  Projeto Sistema de Gestao Farmaceutica                 ///\n");
    printf("///             Developed by @leonardobezrr_ -- since August, 2022          ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            = = = = = Sistema de Gestao Farmaceutica = = = = =           ///\n");
    printf("///                                                                         ///\n");
    printf("///  Programa exemplo utilizado na disciplina DCT1106 - Programacao, para   ///\n");
    printf("///  fins didaticos de ilustracao. O programa contem os principais modulos  ///\n");
    printf("///  e funcionalidades que serao exigidos na avaliacao dos projetos a serem ///\n");
    printf("///  desenvolvidos pelos alunos ao longo da disciplina. Serve como um guia  ///\n");
    printf("///  de consulta e referencia para o desenvolvidos dos demais projetos.     ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    //system("pause");
    printf("\n\n\n\nCLique para continuar...");
    getchar();
}
// Tela Equipe responsável pelo projeto
void tela_equipe(void) {
    system("cls||clear");
    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            Universidade Federal do Rio Grande do Norte                  ///\n");
    printf("///                Centro de Ensino Superior do Serido                      ///\n");
    printf("///              Departamento de Computacao e Tecnologia                    ///\n");
    printf("///                 Disciplina DCT1106 -- Programacao                       ///\n");
    printf("///                 Projeto Sistema de Gestao Farmaceutica                  ///\n");
    printf("///            Developed by @leonardobezrr_ -- since August, 2022           ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///           = = = = = Sistema de Gestao Farmaceutica = = = = =            ///\n");
    printf("///                                                                         ///\n");
    printf("///           Este projeto foi desenvolvido por:                            ///\n");
    printf("///                                                                         ///\n");
    printf("///           Leonardo Alves, aluno UFRN                                    ///\n");
    printf("///           E-mail: leonardo.bezerra.110@ufrn.edu.br                      ///\n");
    printf("///           Redes sociais: @leonardobezrr_                                ///\n");
    printf("///           Git: https://github.com/leonardobezrr/Projeto_Unidade1_2022.2 ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    //system("pause");
    printf("\n\n\n\nCLique para continuar...");
    getchar();
}