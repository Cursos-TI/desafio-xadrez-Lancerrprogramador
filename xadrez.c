#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// teste Jonny Lima


int main() {
    // Nível Novato - Movimentação das Peças
    

    // Implementação de Movimentação do Bispo
    
    int b = 1;
    while (b <= 6) {
        printf("Bispo\n");
        printf("Esquerda,cima\n");
        b++;     
    }

    // Implementação de Movimentação da Torre
    printf("\n");
    for(int i = 0;i < 5; i++){
        printf("torre\n");
        printf("Direita\n"); //Imprime a direção do movimento 
    }
   printf("\n");
    // Implementação de Movimentação da Rainha
   
    int i = 1;
    do{
        printf("%d\n", i);
        printf("Rainha, Esquerda\n"); // imprime a direção da rainha.
        i++;
    } while (i <= 8); 
    printf("\n");
    //incrementando o cavalo
    int movimentocavalo =1; //flag para o movimento em L
   printf("cavalo\n");
    while (movimentocavalo--){
        for(int i = 0; i<=1;i++){
            printf("cima\n");//impreme cima duas vezes
        }
        printf("direita\n");//impreme direita uma vez
    }
  
    


    return 0;
}
