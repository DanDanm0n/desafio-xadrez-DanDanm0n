#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Recursividade da Torre
void movimentacaotorre(int n) {
for (n = 0; n <= 5; n++) {
        printf("Direita\n");
    }
}

// Recursividade do Bispo
void movimentacaobispo(int n) {
    if (n < 5) {
        // Movimento Vertical do Bispo
        for (int bispo = 0; bispo < 1; bispo++) {
            printf("Cima");
            
            // Movimento Horizontal do Bispo
            for (int bispo = 0; bispo < 1; bispo++) {
                printf(", Direita\n");
            }
        } 
        movimentacaobispo(n + 1); // Chamada para retornar ao movimento vertical do bispo
    } 
} 

// Recursividade da Rainha
void movimentaçãorainha(int n) {
    do {
      printf("Esquerda\n");
      n++;
    } while (n <= 8);
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int torre; //Moverá 5 casas para a direita
    int bispo; //Moverá 5 casas para a cima e direita
    int rainha; //Moverá 5 casas para a esquerda
    int cavalo; //Moverá 4 casa para baixo e uma casa para a esquerda

    // Implementação de Movimentação do Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Simulação de Peças de Xadrez:\n\nTorre move 5 casas para a direita!\n");

    movimentacaotorre(torre);
    printf("\n");

    // Implementação de Movimentação da Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("Bispo move 5 casas para cima e a direita!\n");

    movimentacaobispo(bispo);
    printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("Rainha move 8 casas para a esquerda!\n");

    movimentaçãorainha(rainha);
    printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("Cavalo move duas casas para cima e uma para a direita!\n");
    for (int cavalovert = 2, cavalohori = 1, i = 0; i < cavalovert + cavalohori; i++) {
        if (i < cavalovert) {
            printf("Cima!\n");
            continue;
        }
        if (i == cavalovert) {
            printf("Direita!\n");
            break;
        }
    }
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
