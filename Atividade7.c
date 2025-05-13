#include <stdio.h>
#include <stdlib.h>

// Estrutura auto-referenciada
typedef struct Lista {
    int info;            // Valor armazenado no nó
    struct Lista* prox;  // Ponteiro para o próximo nó
} Lista;

// Função para inserir um nó no começo da lista
void inserir_no_inicio(Lista** head, int valor) {
    Lista* novo = (Lista*)malloc(sizeof(Lista));  // Aloca memória para o novo nó
    novo->info = valor;                          // Atribui o valor ao nó
    novo->prox = *head;                          // O próximo do novo nó aponta para o antigo primeiro nó
    *head = novo;                                // A cabeça agora aponta para o novo nó
}

// Função para imprimir a lista de forma iterativa
void imprimir_lista(Lista* head) {
    Lista* atual = head;
    while (atual != NULL) {
        printf("%d ", atual->info);  // Imprime o valor
        atual = atual->prox;        // Vai para o próximo nó
    }
    printf("\n");
}

// Função principal
int main() {
    Lista* head = NULL;  // A cabeça da lista começa como NULL
    int opcao, valor;
    
    do {
        // Exibe o menu para o usuário
        printf("Menu:\n");
        printf("1. Inserir um no no comeco\n");
        printf("2. Imprimir lista\n");
        printf("3. Encerrar\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        
        switch(opcao) {
            case 1:
                printf("Digite o valor para o nó: ");
                scanf("%d", &valor);
                inserir_no_inicio(&head, valor);
                break;
            case 2:
                printf("Lista: ");
                imprimir_lista(head);
                break;
            case 3:
                printf("Programa encerrado.\n");
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }
    } while (opcao != 3);
    
    // Libera a memória da lista ao final
    Lista* atual = head;
    while (atual != NULL) {
        Lista* temp = atual;
        atual = atual->prox;
        free(temp);  // Libera o nó
    }

    return 0;
}

// Função recursiva para imprimir a lista
    void imprimir_lista_recursivo(Lista* head) {
    if (head == NULL) {
        printf("\n");
        return;
    }
    printf("%d ", head->info);  // Imprime o valor
    imprimir_lista_recursivo(head->prox);  // Chama recursivamente para o próximo nó
}
