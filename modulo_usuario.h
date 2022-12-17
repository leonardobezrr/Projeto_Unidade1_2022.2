typedef struct usuario Usuario;

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct usuario {
  char nome[31];
  char data[21];
  char email[41];
  char numero[21];
  char cpf[21];
  char status;
};

//mod usuário
int validarCPF(char *cpf);
void mod_usuario(void);
Usuario* mod_us_cadastrar(void);
void mod_us_atualizar(void);
void atualiza_user(void);
void mod_us_remover(void);
void mod_us_listar();
void mod_us_procurar(void);
void listar_user(void);
void grava_user(Usuario*);
void exibe_usuario(Usuario*);
void remove_usuario(void);
Usuario* achar_user(char *cpf);




