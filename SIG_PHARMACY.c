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
char tela_principal();
void tela_sobre(void);
void tela_equipe(void);
//mod usuário
char mod_usuario();
void mod_us_cadastrar(void);
void mod_us_atualizar(void);
void mod_us_remover(void);
void mod_us_listar(void);
void mod_us_procurar(void);
//mod estoque 
char mod_estoque();
void mod_es_cadastrar(void);
void mod_es_atualizar(void);
void mod_es_remover(void);
void mod_es_listar(void);
//mod funcionario
char mod_funcionario();
void mod_fun_cadastrar(void);
void mod_fun_atualizar(void);
void mod_fun_remover(void);
void mod_fun_listar(void);
//mod relatorio
char mod_relatorio();
void mod_rt_listar_vendas(void);
void mod_rt_listar_lucros(void);
void mod_rt_listar_gastos(void);

/////
// Programa principal
int main(void) {
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
            mod_funcionario();
            break;
            case '4': 
            mod_relatorio();
            break;
            case '5': 
            tela_equipe();
            tela_sobre();
            break;
            }
        }while (opcao!='0');
        
        //USUARIO
        //mod_usuario();   // modulo usuario
        //mod_us_cadastrar(); // cadastrar usuario
        //mod_us_atualizar();  // atualizar usuario
        //mod_us_remover();  // remover usuario
        //mod_us_listar();  // listar usuario
        //mod_us_procurar();  // procurar usuario
        //ESTOQUE 
        //mod_estoque();  //modulo estoque
        //mod_es_cadastrar(); // cadastrar produto
        //mod_es_atualizar();
        //mod_es_remover();
        //mod_es_listar();
        //FUNCIONARIO
        //mod_funcionario();  // modulo funcionarios
        //mod_fun_cadastrar(); // cadastrar funcionario
        //mod_fun_atualizar(); // atualizar funcionario
        //mod_fun_remover(); // remover funcionario
        //mod_fun_listar(); // listar funcionario
        //RELATORIO
        //mod_relatorio();  // modulo relatorios
        //mod_rt_listar_vendas(); 
        //mod_rt_listar_gastos();
        //mod_rt_listar_lucros();
        //tela_sobre();
        //tela_equipe();
        
        
    return 0;
}
/////
// Funções
//Primeira tela do programa
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
    printf("///            3. Modulo Funcionarios                                       ///\n");
    printf("///            4. Modulo Relatorios                                         ///\n");
    printf("///            5. Equipe e sobre                                            ///\n");
    printf("///            0. Sair                                                      ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n             O que deseja? ");
    scanf("%c",&perg);
    getchar();
    return perg;
    }
// Módulo USUARIO
char mod_usuario(){
    char perg_us;
    system("cls||clear");
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
    printf("\n             O que deseja? ");
    scanf("%c",&perg_us);
    getchar();
    return perg_us;
}
////cadastrar usuário_1//
void mod_us_cadastrar(void){
    char nome[20];
    char data[11];
    char email[40];
    char numero[20];
    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                             Menu Usuarios                               ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                           Cadastrar Usuario                             ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");   
    printf("Informe seu nome: ");
    scanf ("%[A-Z a-z]",nome);
    getchar();
    printf("Sua data de nascimento (dd/mm/aa): ");
    scanf ("%[0-9/]",data);
    getchar();
    printf("Email: ");
    scanf("%[@_.a-z0-9]",email);
    getchar();
    printf("Telefone (99) 99999-9999: ");
    scanf ("%[() 0-9]",numero);
    getchar();
    printf("\n               Cadastrado com sucesso!                                       \n");
    printf("\n///////////////////////////////////////////////////////////////////////////////\n");
    
    system("pause");
    printf("\n");
}
////atualizar usuario_2///
void mod_us_atualizar(void){
    char nome[20];
    char data[11];
    char email[40];
    char numero[20];
    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                             Menu Usuarios                               ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                            Atualizar Usuario                            ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");   
    printf("Informe o email: ");
    scanf("%[@_.a-z0-9]",email);
    getchar();
    printf("Informe seu nome: ");
    scanf ("%[A-Z a-z]",nome);
    getchar();
    printf("Sua data de nascimento (dd/mm/aa): ");
    scanf ("%[0-9/]",data);
    getchar();
    printf("Telefone (99) 99999-9999: ");
    scanf ("%[() 0-9]",numero);
    getchar();
    printf("\n               Atualizado com sucesso!                                       \n");    
    printf("\n///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
}
////remover usuario_3///
void mod_us_remover(void){
    char email[40];
    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                              Menu Usuarios                              ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                            Remover Usuario                              ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");   
    printf("Informe o email: ");
    scanf("%[@_.a-z0-9]",email);
    getchar();
    printf("\n///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");

}
////listar usuario_4///
void mod_us_listar(void){
    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                              Menu Usuarios                              ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                             Listar Usuarios                             ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("Usuarios cadastrados:\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    system("pause");
}
////procurar usuario_5///
void mod_us_procurar(void){
    char email[40];
    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                              Menu Usuarios                              ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                             Procurar Usuario                            ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("Informe o email: ");
    scanf("%[@_.a-z0-9]",email);
    getchar();
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");

}
//MODULO ESTOQUE
char mod_estoque(){
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
    return perg_es;

}
// cadastrar produto 
void mod_es_cadastrar(void){
    
    char nome[20];
    char qnt[9];
    char cod[20];
    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                             Menu Estoque                                ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                           Cadastrar Produto                             ///\n");
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
    printf("\n               Cadastrado com sucesso!                                       \n");
    printf("\n///////////////////////////////////////////////////////////////////////////////\n");
    
    system("pause");
    printf("\n");

}
//atualizar produto 
void mod_es_atualizar(void){
    char cod[20];
    char nome[20];
    char cod_novo[20];
    char qnt[10];

    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                             Menu Esqoque                                ///\n");
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
    printf("\n               Cadastrado com sucesso!                                       \n");    
    printf("\n///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
}
//remover produto
void mod_es_remover(void){
    char cod[20];
    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                              Menu Usuarios                              ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                            Remover Usuario                              ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");   
    printf("Informe o codigo: ");
    scanf("%[0-9]",cod);
    getchar();
    printf("\n               Removido com sucesso!                                       \n");        
    printf("\n///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");

}
//listar produtos do estoque 
void mod_es_listar(void){
    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                              Menu Estoque                               ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                             Listar produtos                             ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("Produtos cadastrados:");
    printf("\n///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    system("pause");
}
//MODULO FUNCIONARIO
char mod_funcionario(){
    char perg;
    system("cls||clear");
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
    printf("\n             O que deseja? ");
    scanf("%c",&perg);
    getchar();
    perg;
}
//Cadastrar funcionario
void mod_fun_cadastrar(void){
    char nome[20];
    char data[9];
    char email[40];
    char numero[20];
    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                           Menu Funcionario                              ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                         Cadastrar Funcionario                           ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");   
    printf("Informe seu nome: ");
    scanf ("%[A-Z a-z]",nome);
    getchar();
    printf("Sua data de nascimento (dd/mm/aa): ");
    scanf ("%[0-9/]",data);
    getchar();
    printf("Email: ");
    scanf("%[@_.a-z0-9]",email);
    getchar();
    printf("Telefone (99) 99999-9999: ");
    scanf ("%[() 0-9]",numero);
    getchar();
    printf("\n               Cadastrado com sucesso!                                       \n");
    printf("\n///////////////////////////////////////////////////////////////////////////////\n");
    
    system("pause");
    printf("\n");
}
//Atualiazar funcionario 
void mod_fun_atualizar(void){
    char nome[20];
    char data[9];
    char email[40];
    char numero[20];
    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                            Menu Funcionario                             ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                         Atualizar Funcionario                           ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");   
    printf("Informe o email: ");
    scanf("%[@_.a-z0-9]",email);
    getchar();
    printf("Informe seu nome: ");
    scanf ("%[A-Z a-z]",nome);
    getchar();
    printf("Sua data de nascimento (dd/mm/aa): ");
    scanf ("%[0-9/]",data);
    getchar();
    printf("Telefone (99) 99999-9999: ");
    scanf ("%[() 0-9]",numero);
    getchar();
    printf("\n               Atualizado com sucesso!                                       \n");    
    printf("\n///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
}
//Remover funcionario
void mod_fun_remover(void){
    char email[40];
    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                              Menu Usuarios                              ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                            Remover Usuario                              ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");   
    printf("Informe o email: ");
    scanf("%[@_.a-z0-9]",email);
    getchar();
    printf("\n               Removido com sucesso!                                       \n");    
    printf("\n///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");

}
//Listar funcionario
void mod_fun_listar(void){
    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                             Menu Funcionario                            ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                           Listar Funionario                             ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("Funcionarios cadastrados:\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");

}
//MODULO RELATORIO
char mod_relatorio()
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
    return perg;
}
//listar relatorio de venda
void mod_rt_listar_vendas(void){
    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                           Menu Relatorio                                ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                         Listar Relatorio                                ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("Relatorio de vendas:\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    system("pause");
}
//listar gastos
void mod_rt_listar_gastos(void){
    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                           Menu Relatorio                                ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                         Listar Gastos                                   ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("Relatorio de gastos:\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    system("pause");
}
//listar lucros
void mod_rt_listar_lucros(void){
    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                           Menu Relatorio                                ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                         Listar Lucros                                   ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("Relatorio de lucros:\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    system("pause");
}
// Tela sobre o projeto
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
    printf("\n");
    system("pause");
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
    printf("\n");
    system("pause");
}