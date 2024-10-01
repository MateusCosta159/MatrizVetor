#include <stdio.h>

int main(){

   int tabuada[10][10];
   int lin;
   int col;

   for ( lin = 0; lin < 10; lin++)
   {
     for ( col = 0; col < 10; col++)
     {
        tabuada[lin][col] = (lin+1)*(col+1);
     }
   }

   for ( lin = 0; lin < 10; lin++)
   {
    printf("[%2i]", lin+1);
     for ( col = 0; col < 10; col++)
     {
        printf("%4i", tabuada[lin][col]);
     }
     printf("\n");
   }
   
   
   
    return 0;
}