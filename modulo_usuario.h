#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include "modulo_validacao.h"

typedef struct usuario Usuario;

struct usuario {
  char nome[31];
  char data[21];
  char email[41];
  char numero[21];
};
//mod usuário
void mod_usuario(void);
void mod_us_cadastrar(void);
void mod_us_atualizar(void);
void mod_us_remover(void);
void mod_us_listar();
void mod_us_procurar(void);
void exibe_lista(Usuario*);



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
    Usuario* primeiro;
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
    primeiro = (Usuario*) malloc(sizeof(Usuario));
    printf("Informe seu nome: ");
    scanf ("%30[^\n]",primeiro->nome);
    getchar();
    printf("Sua data de nascimento (dd/mm/aa): ");
    scanf ("%20[^\n]",primeiro->data);
    getchar();
    printf("Email: ");
    scanf("%40[^\n]",primeiro->email);
    getchar();
    printf("Telefone (99) 99999-9999: ");
    scanf ("%20[^\n]",primeiro->numero);
    getchar();
    free(primeiro);
    printf("\n               Cadastrado com sucesso!                                       \n");
    printf("\n///////////////////////////////////////////////////////////////////////////////\n");
    getchar();
}
////atualizar usuario_2///
void mod_us_atualizar(void){
    Usuario* primeiro;
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
    primeiro = (Usuario*) malloc(sizeof(Usuario)); 
    printf("Informe o email: ");
    scanf("%[@_.a-z0-9]",primeiro->email);
    getchar();
    printf("Informe seu nome: ");
    scanf ("%[A-Z a-z]",primeiro->nome);
    getchar();
    printf("Sua data de nascimento (dd/mm/aa): ");
    scanf ("%[0-9/]",primeiro->data);
    getchar();
    printf("Telefone (99) 99999-9999: ");
    scanf ("%[() 0-9]",primeiro->numero);
    getchar();
    free(primeiro);
    printf("\n               Atualizado com sucesso!                                       \n");    
    printf("\n///////////////////////////////////////////////////////////////////////////////\n");
    getchar();

}
////remover usuario_3///
void mod_us_remover(void){
    Usuario primeiro;
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
    scanf("%[@_.a-z0-9]",primeiro.email);
    getchar();
    printf("\n               Removido com sucesso!                                       \n");        
    printf("\n///////////////////////////////////////////////////////////////////////////////\n");
    getchar();

}
////listar usuario_4///
void mod_us_listar(){
    Usuario* primeiro;
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
    primeiro = (Usuario*) malloc(sizeof(Usuario));
    printf("\nUsuario Cadastrado:\n");
    exibe_lista(primeiro);
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    system("pause");
    free(primeiro);
}
/// Exibe lista de usuários//
void exibe_lista(Usuario* primeiro){
    printf("Nome: %s\n", primeiro->nome);
    printf("Email: %s\n", primeiro->email);
    printf("Data de nascimento: %s\n", primeiro->data);
    printf("Telefone: %s\n", primeiro->numero);
}
////procurar usuario_5///
void mod_us_procurar(void){
    Usuario* primeiro;
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
    primeiro = (Usuario*) malloc(sizeof(Usuario));
    printf("Informe o email: ");
    scanf("%[@_.a-z0-9]",primeiro->email);
    getchar();
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    getchar();
}