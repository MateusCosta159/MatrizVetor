#include <stdio.h>

int main() {
    int vetorV[50], vetorA[50], vetorB[50];
    int i, positivo = 0, negativo = 0, nulo = 0;

    for (i = 0; i < 5; i++) {
        printf("Digite numeros inteiros negativos ou positivos da posição %d: ", i);
        scanf("%i", &vetorV[i]);
    }

    for (i = 0; i < 5; i++) {
        if (vetorV[i] == 0) {
            nulo++;
        } else if (vetorV[i] > 0) {
            vetorA[positivo] = vetorV[i]; 
            positivo++;
        } else {
            vetorB[negativo] = vetorV[i];
            negativo++;
        }
    }

    printf("\n\nO vetor A (negativos) é: ");
    for (i = 0; i < negativo; i++) {
        printf("%i | ", vetorB[i]);
    }

    printf("\nO vetor B (positivos) é: ");
    for (i = 0; i < positivo; i++) {
        printf("%i | ", vetorA[i]); 
    }
    printf("\nO vetor V ");
    for (i = 0; i < 5; i++) {
        printf("%i | ", vetorV[i]); 
    }

    printf("\nTotal de zeros: %d\n", nulo);
    return 0;
}
