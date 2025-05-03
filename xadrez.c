#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

//RECURSIVIDADE: Torre: A Torre se moverá 5 casas para a direita
void Torre (int i){
    if (i < 5)
    {
      printf("Direita  \n");
      Torre(i + 1);
    }
}
//RECURSIVIDADE: Bispo: O Bispo se moverá 5 casas para cima e 1 para a direita
void Bispo(int i) {
    if (i > 0) {
        for (int j = 0; j < 1; j++) 
        {
            printf("Cima ");
            
        }
        printf("Direita\n");
        Bispo(i - 1);
    }
}
//RECURSIVIDADE: Rainha: A Rainha se moverá 8 casas para a esquerda
void Rainha(int i){
    if (i <= 8)
    {
      printf("Esquerda  \n");
      Rainha(i + 1);
    }
}

int main () {
    
    printf("\n\n ==== Bem-vindo ao Super Xadrez! ====\n"); 
    printf("Powered by Drix\n\n");

    // Título 
    printf("**Desafio Xadrez - Mestre**\n");

/*-------------------------------------------------------------------*/
   
    // Movimento da Torre

    int Peca1 = 0; // A Torre se moverá 5 casas para a direita

    printf("\nMovimento da Torre:\n");
    Torre(Peca1);
    
/*-------------------------------------------------------------------*/

    // Movimento do Bispo.

    printf("\n");

    int Peca2 = 5;
    printf("\nMovimento do Bispo:\n"); // O Bispo se moverá 5 casas para cima e 1 para a direita
    Bispo(Peca2);

    
/*-------------------------------------------------------------------*/

    // Movimento da Rainha.

    printf("\n");

        int Peca3 = 1;
        printf("\nMovimento da Rainha:\n"); // A Rainha se moverá 8 casas para a esquerda
        Rainha(Peca3);


/*-------------------------------------------------------------------*/        

    // Movimento do Cavalo.

        printf("\n");
        printf("\nMovimento do Cavalo:\n");

        for (int j = 1; j > 0; j--)
        {

        for(int k = 0; k < 2; k++)
        {
            printf("Cima \n");

        }
        
        printf("Direita  \n");
        printf("\n");

/*-------------------------------------------------------------------*/        
    }



    printf("\n\nSaindo do Super Xadrez!");

    printf("\n\n=================================\n");
    printf("\n Obrigado por usar o programa!\n");
    printf("    Powered by Drix\n\n");
    printf("=================================\n\n");



    return 0;
}