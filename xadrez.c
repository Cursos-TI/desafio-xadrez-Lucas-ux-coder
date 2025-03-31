#include <stdio.h>

void moverpecas(int casas){
    
    if (casas > 0)
{
    printf("Movendo-se para a direita...\n");
    moverpecas(casas - 1);
    }
}

void bispo(int pecas){
    if(pecas > 0){
        printf("Movendo-se para cima e para direita...\n");
        bispo(pecas - 1);
    }
}

void pecarainha(int rainhaa){
    if(rainhaa > 0){
        printf("Movendo-se para a esquerda...\n");
        pecarainha(rainhaa - 1);
    }
}

int main(){

   //movimento da Torre cinco casas para a direita
    printf("Movimentação da Torre!!\n");
   
    int casas = 5;
    moverpecas(casas);
    
 //movimento do Bispo cinco casas na diagonal 
    printf("\nMovimentação do Bispo!!\n");
    
    int pecabispo = 5;
    bispo(pecabispo);

   // movimento da rainha oito casas para a esquerda
    printf("\n Movimento da Rainha!!\n");
   int rainha = 8;
    pecarainha(rainha);
  
    // Movimentação do cavalo 

    printf("\n Movimentação do cavalo!!\n");
   int cavalo = 0;

while (cavalo == 0)
{
   for ( cavalo = 0; cavalo < 1; cavalo++)
   {
     printf("Movendo-se para baixo...\n");
   }
 printf("Mvendo-se para a esquerda...\n");  
}





    return 0;
}