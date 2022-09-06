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
////////
// Assinatura das funções
void tela_principal(void);
void tela_sobre(void);
void tela_equipe(void);
void mod1(void);
void mod1_1(void);
void mod1_2(void);
void mod1_3(void);
void mod1_4(void);
void mod1_5(void);
void mod2(void);
void mod3(void);
void mod4(void);

/////
// Programa principal
int main(void) {
    tela_principal();
    tela_sobre();
    tela_equipe();
    mod1();   // modulo usuario
    mod1_1(); // cadastrar usuario
    mod1_2();  // atualizar usuario
    mod1_3();  // remover usuario
    mod1_4();  // listar usuario
    mod1_5();  // procurar usuario
    mod2();  //modulo estoque
    mod3();  // modulo funcionarios
    mod4();  // modulo relatorios

    return 0;
}


/////
// Funções
//Primeira tela do programa
void tela_principal(void) {
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
    printf("///            3. Modulo Funcionarios                                       ///\n");
    printf("///            4. Modulo Relatorios                                         ///\n");
    printf("///            0. Sair                                                      ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
}
// Módulo Usuário
void mod1(void){

    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                              Menu Usuarios                              ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Cadastrar Usuario                                         ///\n");
    printf("///            2. Atualizar Usuario                                         ///\n");
    printf("///            3. Remover Usuario                                           ///\n");
    printf("///            4. Listar Usuario                                            ///\n");
    printf("///            5. Procurar Usuario                                          ///\n");
    printf("///            0. Sair                                                      ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");

}
////////////////////////
////cadastrar usuário_1//
////////////////////////
void mod1_1(void){

    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                              Menu Usuarios                              ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                            Cadastrar Usuario                            ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///            Informe seu nome:                                            ///\n");
    printf("///            Sua data de nascimento:                                      ///\n");
    printf("///            Email:                                                       ///\n");
    printf("///            Telefone:                                                    ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");

}
///////////////////////
////atualizar usuario_2///
///////////////////////
void mod1_2(void){

    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                              Menu Usuarios                              ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                            Atualizar Usuario                            ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///            Informe o email:                                             ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");

}
///////////////////////
////remover usuario_3///
///////////////////////
void mod1_3(void){

    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                              Menu Usuarios                              ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                             Remover Usuario                             ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///            Informe o email:                                             ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");

}
/////////////////   //////
////listar usuario_4///
///////////////////////
void mod1_4(void){

    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                              Menu Usuarios                              ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                             Listar Usuarios                             ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///            Usuarios cadastrados:                                        ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");

}
///////////////////////
////procurar usuario_5///
///////////////////////
void mod1_5(void){

    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                              Menu Usuarios                              ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                             Procurar Usuario                            ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///            Informe o email:                                             ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");

}
//Módulo Estoque
void mod2(void){

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
    printf("\n");

}
//Módulo Funcionarios
void mod3(void){

    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                            Menu Funcionario                             ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Cadastrar Funcionario                                     ///\n");
    printf("///            2. Atualizar Funcionario                                     ///\n");
    printf("///            3. Remover Funcionario                                       ///\n");
    printf("///            4. Procurar Funcionario                                      ///\n");
    printf("///            5. Listar Funcionarios                                       ///\n");
    printf("///            0. Sair                                                      ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");

}
//Módulo Relatórios
void mod4(void){

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
    printf("\n");

}
// Tela sobre o projeto
void tela_sobre(void) {
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
    printf("\n");
}

// Tela Equipe responsável pelo projeto
void tela_equipe(void) {
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
    printf("///            Este projeto foi desenvolvido por:                           ///\n");
    printf("///                                                                         ///\n");
    printf("///            Leonardo Alves, aluno UFRN                                   ///\n");
    printf("///            E-mail: leonardo.bezerra.110@ufrn.edu.br                     ///\n");
    printf("///            Redes sociais: @leonardobezrr_                               ///\n");
    printf("///            Git: https://github.com/leonardobezrr/Projeto_Unidade1_2022.2///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
}
