#include <stdio.h>


int main(){

    int matriz[5][5], vetorSoma[5];
    int i, j;

     for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {  
            printf("Digite um numero para Posição %i x %i: ", i, j);
            scanf("%d", &matriz[i][j]);  
        }
    }
     for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {  
            vetorSoma[i] += matriz[i][j]; 
        }
        printf("A soma da linha %d foi de: %d \n", i, vetorSoma[i]);
    }
    
    
    

    return 0;
}