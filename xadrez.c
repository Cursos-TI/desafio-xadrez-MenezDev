#include <stdio.h>

// Funções recursivas: cada chamada representa um movimento da peça, chamando a si mesma até completar todas as casas

void moverRainha(int casas)
{
    if (casas > 0)
    {
        printf("Esquerda\n");
        moverRainha (casas - 1);
    }
}

void moverTorre (int casas)
{
    if (casas > 0)
    {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

void moverBispo (int casas)
{
    if (casas > 0)
    {
        for(int i = 0; i < 1; i++) //Loop externo para movimento vertical
        {
            printf("Cima,");
        }

        for(int j = 0; j < 1; j++) //Loop interno para movimento horizontal
        {
            printf(" Direita\n");
        }
        moverBispo(casas - 1);
    }
}

int main ()
{

    printf("Primeira peça: Rainha\n");
    //Movimentos da Rainha, 8 casas para a esquerda de acordo com o desafio 
    moverRainha(8);

    printf("\n-----------------------------------------------\n");
    printf("\nSegunda peça: Torre\n");
    //Movimentos Torre, 5 casas para a direita.
    moverTorre(5);
 
    printf("\n-----------------------------------------------\n");
    printf("\nTerceira peça: Bispo\n");
    //Movimentos Bispo, 5 casas para a diagonal direita
    moverBispo(5);


    printf("\n-----------------------------------------------\n");
    printf("\nQuarta peça: Cavalo\n");
    //Movimentos Cavalo, 2 casas para cima e 1 para a direita

    int moverCavalo = 3;

    for (int i = 0; i < moverCavalo; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (i < 2)
            {
                printf("Cima\n");
                break; //Evita que imprima duas vezes no mesmo i
            }

            if (i == 2)
            {
            if (j == 1)
            {
                continue; //Pula a segunda iteração do j (só imprime uma vez)
            }
                printf("Direita\n");
                break;
            }
        }
    }
    return 0;
}