#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    // Variáveis para identificar cada peça do jogo e determinar quantas casas cada uma deve se mover.
    int casasTorre = 5, torre;
    int casasBispo = 5, bispo = 1;
    int casasRainha = 8, rainha = 1;


    printf("**** Desafio movimentação de peças de xadrez ****\n");
    printf("\n");

    
    printf("Movimentação da peça torre, cinco casas para a direita.\n");

    // Movimento da peça torre, cinco casas para a direita utilizando a estrutura de repetição for.
    for (torre = 1; torre <= casasTorre; torre++)
    {
        printf("Direita.\n");
    }


    printf("\nMovimentação da peça bispo, cinco casas na diagonal.\n");

    // Movimento da peça bispo, cinco casas na diagonal utilizando a estrutura de repetição while.
    while (bispo <= casasBispo)
    {
        printf("Cima, Direita.\n");
        bispo++;
    }


    printf("\nMovimentação da peça rainha, oito casas para a esquerda.\n");

    // Movimento da peça rainha, oito casas para a esquerda utilizando a estrutura de repetição do while.
    do
    {
        printf("Esquerda.\n");
        ++rainha;
    } while (rainha <= casasRainha);
    

    return 0;
}
