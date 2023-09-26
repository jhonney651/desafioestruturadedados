#include <stdio.h>

int main() {
    
    float precosProdutos[3][2] = {
        {15.00, 12.50},
        {13.00, 7.50},
        {100.00, 97.00}
    };
    float mediasPorProduto[3];

    for (int i = 0; i < 3; i++) {
        mediasPorProduto[i] = (precosProdutos[i][0] + precosProdutos[i][1]) / 2.0;
    }

    printf("Média de preços por cada produto:\n");
    for (int i = 0; i < 3; i++) {
        printf("%.2f\t", mediasPorProduto[i]);
    }
    printf("\n");
    printf("Pressione qualquer tecla para sair...");
    getchar();
    return 0;
}
