
//struct
typedef struct estoque Estoque;

struct estoque
{
    char nome[21];
    long int qnt;
    char cod[21];
    float preco;
    char status;
};
//mod estoque 
void exibe_venda_re(Estoque*);
void exibe_estoque_venda_re(void);
void exibe_estoque_venda_v(void);
void exibe_estoque_venda(Estoque*);
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
