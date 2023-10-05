typedef struct {
    char nome[30];
    int codigo;
    float preco;
} Produto;

typedef struct no {
    struct no* prox;
    Produto produto;
} No;

typedef struct {
    Produto produto;
    No* prim;
} Lista;

Lista criarLista(); // 
void verificarLista(Lista lista); //
void inserirInicio(Lista* lista, Produto produto); //
void inserirFinal(Lista* lista, Produto produto); //
void inserirPosicao(Lista* lista, Produto produto, int position); //

void removerInicio(Lista* lista);//
void removeFinal(Lista* lista);//
void imprimirLista(Lista Lista); //
void removerPosicao(Lista* lista, int position);//

void tamanhoLista(Lista lista); //
void inverterLista(Lista* lista);

void listaImpar(Lista* lista);//