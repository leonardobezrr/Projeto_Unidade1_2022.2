
//struct
typedef struct estoque Estoque;

struct estoque
{
    char nome[21];
    char qnt[11];
    char cod[21];
    char preco[21];
    char status;
};
//mod estoque 
void mod_estoque(void);
Estoque* mod_es_cadastrar(void);
void mod_es_atualizar(void);
void atualiza_es(void);
void mod_es_remover(void);
void remove_prod(void);
void mod_es_listar(void);
void mod_es_procurar(void);
void grava_prod(Estoque*);
void exibe_lista_es();
void exibe_estoque(Estoque*);
