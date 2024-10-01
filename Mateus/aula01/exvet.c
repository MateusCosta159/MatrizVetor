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
        R[2 * i] = X[i];      
        R[2 * i + 1] = Y[i]; 
    }

    printf("O vetor R modificado:\n");
    for (i = 0; i < 20; i++) {
        printf("%d\n", R[i]); 
    }

    return 0;
}
