#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    printf("\n\n ==== Bem-vindo ao Super Xadrez! ====\n");
    printf("Powered by Drix\n\n");

    // Título 
    printf("**Desafio Xadrez - Novato**\n");

    // Movimento da Torre
   
    int movimentoTorre = 5;  // A Torre se moverá 5 casas para a direita

    printf("\nMovimento da Torre:\n");

    for (int i = 0; i < movimentoTorre; i++) {
        printf("Direita\n");  // Cada passo representa uma casa para a direita
    }

    
    // Movimento da Rainha

    int movimentoRainha = 8;  // A Rainha se moverá 8 casas para a esquerda
    int i = 0;                // Contador para o while

    printf("\nMovimento da Rainha:\n");

    while (i < movimentoRainha) {
        printf("Esquerda\n");
        i++;
    }


    // Movimento do Bispo

    int movimentoBispo = 5;

    i = 0; // Utilizando o contador

    printf("\nMovimento do Bispo:\n");

    do {
        printf("Cima Direita\n");
        i++;
    } while (i < movimentoBispo);



    printf("\n\nSaindo do Super Xadrez!");

    printf("\n\n=================================\n");
    printf("\n Obrigado por usar o programa!\n");
    printf("    Powered by Drix\n\n");
    printf("=================================\n\n");




    return 0;
}
