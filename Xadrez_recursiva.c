#include <stdio.h>
// Recursividade TORRE
void movertorre(int casas){

  if (casas > 0){
        printf("Direita. \n"); 
        movertorre(casas - 1);
    }
}
// Recursividade Bispo
void moverbispo(int casas){

    if (casas > 0){
         printf("cima, Direita. \n");
        moverbispo(casas - 1);
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

    printf("movimento do Bispo:\n");
    moverbispo(5);
    printf("_______________\n\n");

    printf("movimento da Rainha:\n");
    moverrainha(8);
    printf("_______________\n\n");
    return 0;
}