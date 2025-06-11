#include <stdio.h>

int main() {
    int escolha, casas, i;

    printf("=== Simulador de Movimentos de Peças de Xadrez ===\n");
    printf("Escolha a peça para simular o movimento:\n");
    printf("1 - Torre (movimento em linha reta)\n");
    printf("2 - Bispo (movimento na diagonal)\n");
    printf("3 - Rainha (movimento em qualquer direção)\n");
    printf("Digite sua escolha: ");
    scanf_s("%d", &escolha);  

    printf("Digite o número de casas que deseja mover a peça: ");
    scanf_s("%d", &casas);  

    switch (escolha) {
    case 1: // Torre com for
        printf("\nMovimento da Torre:\n");
        for (i = 1; i <= casas; i++) {
            printf("Casa %d: Direita\n", i);
        }
        break;

    case 2: // Bispo com while
        printf("\nMovimento do Bispo:\n");
        i = 1;
        while (i <= casas) {
            printf("Casa %d: Cima, Direita\n", i);
            i++;
        }
        break;

    case 3: // Rainha com do-while
        printf("\nMovimento da Rainha:\n");
        i = 1;
        do {
            printf("Casa %d: Esquerda\n", i);
            i++;
        } while (i <= casas);
        break;

    default:
        printf("Opção inválida!\n");
    }

    return 0;
}
