 #include <stdio.h>

int main(){

    int matriz[3][3], soma, vet[3];
    int i, j;
   

   for (i = 0; i < 3; i++)
   {
    for (j = 0; j < 3; j++)
    {
        printf("Digite o valor da posição: %i x %i: ", i,j);
        scanf("%d", &matriz[i][j]);
    }
   }

   soma = 0;
   printf("O vetor soma é: ");
   for ( i = 0; i < 3; i++)
   {
    soma = 0;
    for (j = 0; j < 5; j++) {
       soma = soma + matriz[i][j]; 
    }
        vet[i] = soma;
        printf("%i\t",vet[i]);
    
   
 } 
   
   
    printf("%i\n", vet[i]);
   
   
    return 0;
}