 #include <stdio.h>

int main(){

    float matriz[10][10], soma;
    int traco;
    int i, j;
   

   for (i = 0; i < 10; i++)
   {
    for (j = 0; j < 10; j++)
    {
        printf("Digite o valor da posição: %i x %i", i,j);
        scanf("%f", &matriz[i][j]);
    }
   }
   system("cls");

   soma = 0;
   for ( i = 0; i < 10; i++)
   {
    for (j = 0; j < 10; j++)
    {
        if(i==j){
         soma += matriz[i][j];
        }
    }
   }
   
   printf("O valor do traco é de %f\n", matriz[i][j]);
   
   
    return 0;
}