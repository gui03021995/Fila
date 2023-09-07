#define MAXX 250
#define FilaEstatica.c

struct frase{
    char conteudo[100];
};

typedef struct fila Fila;

Fila* cria_Fila();

void libera_Fila(Fila* fi);
