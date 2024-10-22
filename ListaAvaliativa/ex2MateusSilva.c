#include <stdio.h>

int main() {
    int matriz[10][10];
    int soma = 0, i, j;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {  
            printf("Digite um numero para Posição %i x %i: ", i, j);
            scanf("%d", &matriz[i][j]);  
        }
    }

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            if (i == j) {
                soma += matriz[i][j];
            }
        }
    }

    printf("O valor do traço da Matriz é: %d\n", soma);  // Adicionando \n para melhor formato

    return 0;
}
