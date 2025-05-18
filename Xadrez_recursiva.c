#include <stdio.h>
// Recursividade TORRE
void movertorre(int casas){

  if (casas > 0){
        printf("Direita. \n"); 
        movertorre(casas - 1);
    }
}
// Recursividade Rainha
void moverrainha(int casas){

    if(casas > 0){
        printf("Esquerda.\n");
        moverrainha(casas - 1);

    }
}
int main(){

    printf("movimento da Torre:\n");
    movertorre(5);
    printf("_______________\n\n");

    printf("movimento da Rainha:\n");
    moverrainha(8);
    printf("_______________\n\n");

// Movimentação do Bispo
    printf("Movimento do Bispo:\n");
 for (int i = 0; i < 5; i++){

        for (int j = 0; j < 1; j++){
            printf("Cima,");
        }
        printf("Direita.\n");
 }
    printf("___________________\n\n");

// Movimento do cavalo
printf("Movimento do Cavalo:\n");

 int a = 1, b = 1;
    while (a <= 2){
        printf("cima\n");
        a++;
    }

        if (b <= 1){
         printf("Direita.\n\n");
         b++;
            

        }
    
    return 0;
}