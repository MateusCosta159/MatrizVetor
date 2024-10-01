#include <stdio.h>

#define MAX 10

int main() {
    int X[MAX], Y[MAX], R[20];
    int i;

    printf("Digite elementos do vetor X:\n");
    for (i = 0; i < MAX; i++) {
        scanf("%d", &X[i]);
    }
    
    printf("Digite elementos do vetor Y:\n");
    for (i = 0; i < MAX; i++) {
        scanf("%d", &Y[i]);
    }

    for (i = 0; i < MAX; i++) {
        if (i % 2 == 0) {
            R[i] = X[i]; 
        } else {
            R[i] = Y[i]; 
        }
    }

    printf("O vetor R modificado:\n");
    for (i = 0; i < MAX; i++) {
        printf("%d\n", R[i]); 
    }

    return 0;
}
