#include <stdio.h>

int main ()
{
    
    int i; //Variável i para se usar nas repetições

    printf("Primeira peça: Rainha\n");
    //Movimentos da Rainha, 8 casas para a esquerda de acordo com o desafio ní­vel novato
    for (i = 0; i < 8; i++)
    {
        printf("Movimento Rainha = Esquerda\n");
    }

    printf("\nSegunda peça: Torre\n");
    //Movimentos Torre, 5 casas para a direita.

    i = 1;
    while (i <= 5)
    {
        printf("Movimento Torre = Direita\n");
        i++;
    }
    
    printf("\nTerceira peça: Bispo\n");
    //Movimentos Bispo, 5 casas para a diagonal direita

    i = 1;
    do
    {
        printf("Movimento Bispo = Cima, Direita\n");
        i++;
    } while (i <= 5);

    printf("\n-----------------------------------------------\n");
    printf("\nQuarta peça: Cavalo\n");
    //Movimentos Cavalo, 2 casas para baixo e 1 para esquerda

    int movimentoCavalo = 1;

    while (movimentoCavalo--)// decrementar a variável e se tornar 0 e parar o while
    {
        for (i = 0; i < 2; i++)
        {
            printf("Movimento Cavalo = Baixo\n");
        }
        
        printf("Movimento Cavalo = Esquerda\n");
    }
    
    
    return 0;
}