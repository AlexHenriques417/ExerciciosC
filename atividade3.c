#include <stdio.h>

typedef struct {
    int horas;
    int minutos;
    int segundos;
} Horario;

int converterParaSegundos(Horario h) {
    return h.horas * 3600 + h.minutos * 60 + h.segundos;
}

void imprimirHorario(Horario h) {
    printf("%02d:%02d:%02d\n", h.horas, h.minutos, h.segundos);
}

int main() {
    Horario h1, h2;
    int totalSegundos1, totalSegundos2, diferenca;

    printf("Digite o primeiro horário (hh mm ss): ");
    scanf("%d %d %d", &h1.horas, &h1.minutos, &h1.segundos);

    printf("Digite o segundo horário (hh mm ss): ");
    scanf("%d %d %d", &h2.horas, &h2.minutos, &h2.segundos);

    totalSegundos1 = converterParaSegundos(h1);
    totalSegundos2 = converterParaSegundos(h2);

    if (totalSegundos2 < totalSegundos1) {
        Horario temp = h1;
        h1 = h2;
        h2 = temp;

        int tempSeg = totalSegundos1;
        totalSegundos1 = totalSegundos2;
        totalSegundos2 = tempSeg;
    }

    diferenca = totalSegundos2 - totalSegundos1;

    printf("\nHorário 1: ");
    imprimirHorario(h1);

    printf("Horário 2: ");
    imprimirHorario(h2);

    printf("Diferença em segundos: %d\n", diferenca);

    return 0;
}
