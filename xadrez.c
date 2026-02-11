#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int torre = 0; //Moverá 5 casas para a direita
    int bispo = 0; //Moverá 5 casas para a cima e direita
    int rainha = 0; //Moverá 5 casas para a esquerda
    int cavalo = 0; //Moverá 4 casa para baixo e uma casa para a esquerda

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Simulação de Peças de Xadrez:\n\nTorre move 5 casas para a direita!\n");

    for (torre = 0; torre <= 5; torre++) {
        printf("Direita\n");
    } printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("Bispo move 5 casas para cima e a direita!\n");

    while (bispo <= 5) {
        printf("Cima, Direira\n");
        bispo++;
    } printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("Torre move 8 casas para a esquerda!\n");

    do {
      printf("Esquerda");
      rainha++;
    } while (rainha <= 8);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("Cavalo move duas casas para baixo e uma para a esquerda!\n");
    for (cavalo = 1; cavalo <=2; cavalo++) {
    while (cavalo <=2) {
        printf("Baixo\n");
        cavalo++;
    }
    printf("Esquerda\n");
   }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
