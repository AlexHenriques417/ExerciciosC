#include <stdio.h>

typedef struct {
    float valor;
} Vendas;

float TotalVendas(Vendas vendas[], int tamanho) {
    float total = 0;

    for (int i = 0; i < tamanho; i++) {
        total += vendas[i].valor;
    }

    return total;
}

int main() {
    Vendas vendas[3];

    for (int i = 0; i < 3; i++) {
        printf("Digite o valor da venda %d: ", i + 1);
        scanf("%f", &vendas[i].valor);
    }

    float total = TotalVendas(vendas, 3);

    printf("O total de vendas: %.2f\n", total);

    return 0;
}