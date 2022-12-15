typedef struct venda Venda;
//mod venda

struct venda {
  char cod[21];
  float qnt;
  float preco;
  char status;
};

Venda* mod_venda(void);
void grava_venda(Venda*);
void listar_venda();
void exibe_venda(Venda*);
void mod_venda_listar(void);
char* gerar_cod(void);