#include <stdio.h>
int main(){

// variáveis utilizadas
int i = 1;



while (i <= 5){
     printf("Direita.\n");//torre: 5 casas para direita
         i++;
    }
         i = 1;

do {
    printf("Cima,Direita.\n");//Bispo: 5 casas direita diagonal para cima
    i++;
    } while (i <= 5);


for (i = 0; i < 8; i++)
    {
    printf("Esquerda.\n");// Rainha: 8 casas a esquerda
    }
    printf("--------------------------------------\n");

   
for (i = 1; i <= 2; i++)
    {
        
        for(int j = 1; j <= 1; j++)
        {
            printf("Baixo.\n");
        }      
    }
        printf("Esquerda.\n");

    return 0;
}
