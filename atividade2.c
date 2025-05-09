#include <stdio.h>
#include <string.h>

typedef struct {
    char titulo[50];
    char autor[50];
    int anopubli;
} TipoLivro;

int main() {
    TipoLivro livros[3];

    for (int i = 0; i < 3; i++) {
        printf("Digite o titulo do livro %d: ", i + 1);
        fgets(livros[i].titulo, 50, stdin);
        livros[i].titulo[strcspn(livros[i].titulo, "\n")] = '\0';

        printf("Digite o autor do livro %d: ", i + 1);
        fgets(livros[i].autor, 50, stdin);
        livros[i].autor[strcspn(livros[i].autor, "\n")] = '\0';

        printf("Digite o ano da publicacao do livro %d: ", i + 1);
        scanf("%d", &livros[i].anopubli);
        getchar(); 
    }

    for (int i = 0; i < 3; i++) {
        printf("\nLivro %d:\n", i + 1);
        printf("Autor: %s\n", livros[i].autor);
        printf("Titulo: %s\n", livros[i].titulo);
        printf("Ano da publicacao: %d\n", livros[i].anopubli);
    }

    return 0;
}
