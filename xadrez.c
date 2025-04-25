#include <stdio.h>

// Desafio de Xadrez - MateCheck
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// Nível Novato - Movimentação das Peças

int main ()
{

    int i; //Variável i para se usar nas repetições

    printf("Primeira peça: Rainha\n");
    //Movimentos da Rainha, 8 casas para a esquerda de acordo com o desafio ní­vel novato
    for (i = 1; i <= 8; i++)
    {
        printf("%d° - Movimento Rainha = Esquerda\n", i);
    }

    printf("\nSegunda peça: Torre\n");
    //Movimentos Torre, 5 casas para a direita.

    i = 1;
    while (i <= 5)
    {
        printf("%d° - Movimento Torre = Direita\n", i);
        i++;
    }
    
    printf("\nTerceira peça: Bispo\n");
    //Movimentos Bispo, 5 casas para a diagonal direita

    i = 1;
    do
    {
        printf("%d° - Movimento Bispo = Cima, Direita\n", i);
        i++;
    } while (i <= 5);
    
    return 0;
}
