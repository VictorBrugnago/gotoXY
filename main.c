#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int i, linha, coluna,posX, posY, num;
int main()
{
    gotoxy(0, 0);

    printf("Entre com a posicao X desejada: ");
    scanf("%d", &posX);
    printf("Entre com a posicao Y desejada: ");
    scanf("%d", &posY);
    printf("Entre com um numero: ");
    scanf("%d", &num);

    linha = posY;
    coluna = posX;

    movimentoXpos(num, 0, posX);
    movimentoYpos(num, 0, posY);
}

void gotoxy (int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void movimentoXpos (int num, int atual, int x)
{
    int numero, posicaoX, posicaoAtual, coluna, lin;

    lin = linha;
    numero = num;
    posicaoX = x;
    posicaoAtual = atual;
    printf("%d", lin);

    for (coluna = posicaoAtual; coluna <= posicaoX; coluna++)
    {
        for (i=0; i<=100000000.20; i++);
        gotoxy(coluna,lin);
        printf("%d", numero);
        gotoxy(coluna-1,lin);
        putchar(000);
    }
    coluna = posicaoX;
}

void movimentoYpos (int num, int atual, int y)
{
    int numero, posicaoY, posicaoAtual, linha, col;
    col = coluna;
    numero = num;
    posicaoY = y;
    posicaoAtual = atual;
    printf("%d", col);


    for (linha = posicaoAtual; linha <= posicaoY; linha++)
    {
        for (i=0; i<=100000000.20; i++);
        gotoxy(col,linha);
        printf("%d", numero);
        gotoxy(col,linha-1);
        putchar(000);
    }
    linha = posicaoY;
}
