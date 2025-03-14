#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

   //movimento da Torre cinco casas para a direita
    printf("Movimentação do Torre!!\n");
   
    for(int torre = 0; torre < 5; torre++)
   
    {
   printf("Movendo-se para a direita...\n");
    }
 
//movimento do Bispo cinco casas na diagonal 

   int bispo = 0;
   printf("\n Movimentação do Bispo!!\n");
  
   do
   {
    
    printf("Movendo-se para cima e para direita...\n");
    bispo++;
   } while (bispo < 5);

   // movimento da rainha oito casas para a esquerda
   int rainha = 0;
   printf("\n Movimento da Rainha!!\n");
   
   while (rainha < 8)
   {
    printf("Movendo-se para a esquerda...\n");
    rainha++;
   }
   
   







    return 0;
}