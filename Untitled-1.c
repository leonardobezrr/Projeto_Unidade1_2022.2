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

#include <stdio.h>
#include <locale.h>
////////
// Assinatura das funções
void tela_principal(void);
void tela_sobre(void);
void tela_equipe(void);

/////
// Programa principal
int main(void) {
    tela_principal();
    tela_sobre();
    tela_equipe();
    system("pause");
    return 0;
}


/////
// Funções
//Primeira tela do programa
void tela_principal(void) {
    setlocale(LC_ALL,"");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///             Universidade Federal do Rio Grande do Norte                 ///\n");
    printf("///                 Centro de Ensino Superior do Seridó                     ///\n");
    printf("///               Departamento de Computação e Tecnologia                   ///\n");
    printf("///                  Disciplina DCT1106 -- Programação                      ///\n");
    printf("///                  Projeto Sistema de Gestão Farmaceutica                 ///\n");
    printf("///             Developed by @leonardobezrr_ -- since August, 2022          ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            = = = = = Sistema de Gestão Farmaceutica = = = = =           ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Módulo Usuários                                           ///\n");
    printf("///            2. Módulo Estoque                                            ///\n");
    printf("///            3. Módulo Funcionários                                       ///\n");
    printf("///            4. Módulo Relatórios                                         ///\n");
    printf("///            0. Sair                                                      ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
}
// Módulo Usuário
void mod1(void){

    setlocale(LC_ALL,"");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                              Menu Usuários                              ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Cadastrar Usuário                                         ///\n");
    printf("///            2. Atualizar Usuário                                         ///\n");
    printf("///            3. Remover Usuário                                           ///\n");
    printf("///            4. Listar Usuários                                           ///\n");
    printf("///            5. Procurar Usuário                                          ///\n");
    printf("///            0. Sair                                                      ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");

}
//Módulo Estoque
void mod2(void){

    setlocale(LC_ALL,"");
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
//Módulo Funcionários
void mod3(void){

    setlocale(LC_ALL,"");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                            Menu Funcionário                             ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Cadastrar Funcionário                                     ///\n");
    printf("///            2. Atualizar Funcionário                                     ///\n");
    printf("///            3. Remover Funcionário                                       ///\n");
    printf("///            4. Procurar Funcionário                                      ///\n");
    printf("///            5. Listar Funcionários                                       ///\n");
    printf("///            0. Sair                                                      ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");

}
//Módulo Relatórios
void mod4(void){

    setlocale(LC_ALL,"");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                            Menu Relatório                               ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Listar Relatório de vendas                                ///\n");
    printf("///            2. Listar Gastos                                             ///\n");
    printf("///            3. Listar Lucros                                             ///\n");
    printf("///            0. Sair                                                      ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");

}
// Tela sobre o projeto
void tela_sobre(void) {
    setlocale(LC_ALL,"");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///             Universidade Federal do Rio Grande do Norte                 ///\n");
    printf("///                 Centro de Ensino Superior do Seridó                     ///\n");
    printf("///               Departamento de Computação e Tecnologia                   ///\n");
    printf("///                  Disciplina DCT1106 -- Programação                      ///\n");
    printf("///                  Projeto Sistema de Gestão Farmaceutica                 ///\n");
    printf("///             Developed by @leonardobezrr_ -- since August, 2022          ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            = = = = = Sistema de Gestão Farmaceutica = = = = =           ///\n");
    printf("///                                                                         ///\n");
    printf("///  Programa exemplo utilizado na disciplina DCT1106 - Programação, para   ///\n");
    printf("///  fins didáticos de ilustração. O programa contém os principais módulos  ///\n");
    printf("///  e funcionalidades que serão exigidos na avaliação dos projetos a serem ///\n");
    printf("///  desenvolvidos pelos alunos ao longo da disciplina. Serve como um guia  ///\n");
    printf("///  de consulta e referência para o desenvolvidos dos demais projetos.     ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
}

// Tela Equipe responsável pelo projeto
void tela_equipe(void) {
    setlocale(LC_ALL,"");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///             Universidade Federal do Rio Grande do Norte                 ///\n");
    printf("///                 Centro de Ensino Superior do Seridó                     ///\n");
    printf("///               Departamento de Computação e Tecnologia                   ///\n");
    printf("///                  Disciplina DCT1106 -- Programação                      ///\n");
    printf("///                  Projeto Sistema de Gestão Farmaceutica                 ///\n");
    printf("///             Developed by @leonardobezrr_ -- since August, 2022          ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            = = = = = Sistema de Gestão Farmaceutica = = = = =           ///\n");
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
