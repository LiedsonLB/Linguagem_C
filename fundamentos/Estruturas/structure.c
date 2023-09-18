#include <stdio.h>
#include <string.h>

#define MAX_PRODUTOS 100

typedef struct {
    char nome[50];
    char categoria[50];
    char descricao[100];
    float preco;
} Produto;

/*
struct Produto {
    char nome[50];
    char categoria[50];
    char descricao[100];
    float preco;
};
*/

void adicionarProduto(Produto produtos[], int *quantidade) {
    if (*quantidade >= MAX_PRODUTOS) {
        printf("Limite de produtos atingido.\n");
        return;
    }
    Produto novoProduto;
    printf("Digite o nome do produto: ");
    fgets(novoProduto.nome, 50, stdin);
    novoProduto.nome[strcspn(novoProduto.nome, "\n")] = '\0';
    
    printf("Digite a categoria do produto: ");
    fgets(novoProduto.categoria, 50, stdin);
    novoProduto.categoria[strcspn(novoProduto.categoria, "\n")] = '\0';
    
    printf("Digite a descricao do produto: ");
    fgets(novoProduto.descricao, 100, stdin);
    novoProduto.descricao[strcspn(novoProduto.descricao, "\n")] = '\0';
    
    printf("Digite o preco do produto: ");
    scanf("%f", &novoProduto.preco);
    getchar(); 
    
    produtos[*quantidade] = novoProduto;
    (*quantidade)++;
    
    printf("Produto adicionado com sucesso!\n");
}

void exibirProdutos(Produto produtos[], int quantidade) {
    if (quantidade == 0) {
        printf("Nenhum produto adicionado.\n");
        return;
    }
    
    printf("Produtos adicionados:\n");
    printf("\n");
    for (int i = 0; i < quantidade; i++) {
        printf("Nome: %s\n", produtos[i].nome);
        printf("Categoria: %s\n", produtos[i].categoria);
        printf("Descricao: %s\n", produtos[i].descricao);
        printf("Preco: %.2f\n", produtos[i].preco);
        printf("\n");
    }
}

int main() {
    Produto produtos[MAX_PRODUTOS];
    int quantidade = 0;
    int opcao;
    
    do {
        printf("Escolha uma opcao:\n");
        printf("1 - Adicionar produto\n");
        printf("2 - Ver produtos adicionados\n");
        printf("0 - Sair\n");
        scanf("%d", &opcao);
        getchar();
        
        switch (opcao) {
            case 1:
                adicionarProduto(produtos, &quantidade);
                break;
            case 2:
                exibirProdutos(produtos, quantidade);
                break;
            case 0:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opcao invalida!!.\n");
                break;
        }
        
        printf("\n");
    } while (opcao != 0);
    
    return 0;
}