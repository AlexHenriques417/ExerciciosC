#include <stdio.h>

typedef struct {
    int numero;
    float notas[3];
} Aluno;

void lerNotasAlunos(Aluno alunos[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o numero do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].numero);

        for (int j = 0; j < 3; j++) {
            printf("Digite a nota %d do aluno %d: ", j + 1, alunos[i].numero);
            scanf("%f", &alunos[i].notas[j]);
        }
    }
}

float calcularMedia(float notas[], int tamanho) {
    float soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += notas[i];
    }
    return soma / tamanho;
}

int main() {
    Aluno alunos[4];

    lerNotasAlunos(alunos, 4);

    for (int i = 0; i < 4; i++) {
        printf("\nAluno %d:\n", alunos[i].numero);
        for (int j = 0; j < 3; j++) {
            printf("Nota %d: %.2f\n", j + 1, alunos[i].notas[j]);
        }
        float media = calcularMedia(alunos[i].notas, 3);
        printf("Media: %.2f\n", media);
    }

    return 0;
}