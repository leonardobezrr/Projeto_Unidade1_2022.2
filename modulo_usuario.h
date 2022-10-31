#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include "modulo_validacao.h"
//mod usuário
void mod_usuario(void);
void mod_us_cadastrar(void);
void mod_us_atualizar(void);
void mod_us_remover(void);
void mod_us_listar(void);
void mod_us_procurar(void);

struct usuario {
  char nome[31];
  char data[21];
  char email[41];
  char numero[21];
};

//
// Módulo USUARIO
//

void mod_usuario(void){
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
    if (perg_us=='1'){
        mod_us_cadastrar();
    }else if (perg_us == '2'){
        mod_us_atualizar();
    }else if (perg_us == '3'){
        mod_us_remover();
    }else if (perg_us == '4'){
        mod_us_listar();
    }else if (perg_us == '5'){
        mod_us_procurar();
    }else{

    }
}
////cadastrar usuário_1//
void mod_us_cadastrar(void){
    struct usuario primeiro;
    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    system("cls||clear");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                             Menu Usuarios                               ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                           Cadastrar Usuario                             ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");   
    printf("Informe seu nome: ");
    scanf ("%30[A-Z a-z]",primeiro.nome);
    getchar();
    printf("Sua data de nascimento (dd/mm/aa): ");
    scanf ("%20[0-9/]",primeiro.data);
    getchar();
    printf("Email: ");
    scanf("%40[@_.a-z0-9]",primeiro.email);
    getchar();
    printf("Telefone (99) 99999-9999: ");
    scanf ("%20[() 0-9]",primeiro.numero);
    getchar();
    printf("\n               Cadastrado com sucesso!                                       \n");
    printf("\n///////////////////////////////////////////////////////////////////////////////\n");
    getchar();
}
////atualizar usuario_2///
void mod_us_atualizar(void){
    char nome[20];
    char data[11];
    char email[40];
    char numero[20];
    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    system("cls||clear");
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
    getchar();

}
////remover usuario_3///
void mod_us_remover(void){
    char email[40];
    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    system("cls||clear");
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
    getchar();

}
////listar usuario_4///
void mod_us_listar(void){
    struct usuario primeiro;
    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    system("cls||clear");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                              Menu Usuarios                              ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                             Listar Usuarios                             ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\nUsuario Cadastrado:\n");
    printf("Nome: %c\n", primeiro.nome);
    printf("Email: %c\n", primeiro.email);
    printf("Data de nascimento: %c\n", primeiro.data);
    printf("Telefone: %c\n", primeiro.numero);
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    system("pause");
}
////procurar usuario_5///
void mod_us_procurar(void){
    char email[40];
    setlocale(LC_ALL,"Portuguese");
    printf("\n");
    system("cls||clear");
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
    getchar();
}