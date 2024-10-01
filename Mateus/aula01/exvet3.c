#include <stdio.h>

#define MAX 10

int main() {
    float U[MAX];
    int i, aux = MAX - 1, temp;

    printf("Digite elementos do vetor:\n");
    for (i = 0; i < MAX; i++) {
        scanf("%f", &U[i]);
    }
    
    // Invertendo o vetor
    for (i = 0; i < (MAX / 2); i++) {
        temp = U[i];
        U[i] = U[aux];
        U[aux] = temp;
        aux--;
    }
    
    printf("O vetor U modificado:\n");
    for (i = 0; i < MAX; i++) {
        printf("%.2f\n", U[i]); 
    }

    return 0;
}
