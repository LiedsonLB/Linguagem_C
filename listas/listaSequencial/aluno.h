#define MAX_ALUNOS 10

typedef struct {
    int matricula;
    char nome[50];
} Aluno;

typedef struct {
    Aluno alunos[MAX_ALUNOS];
    int tamanho;
} ListaAlunos;

ListaAlunos criarLista();
int inserirNoFim(ListaAlunos *lista, Aluno aluno);
int inserirNoInicio(ListaAlunos *lista, Aluno aluno);
int inserirNaPosicao(ListaAlunos *lista, Aluno aluno, int posicao);
int removerNaPosicao(ListaAlunos *lista, int posicao);
int removerPorMatricula(ListaAlunos *lista, int matricula);
Aluno buscarPorMatricula(ListaAlunos lista, int matricula);
