#include"deck.h"

typedef struct
{
    piece piecesJogador[6];
    int pontos;
    int qtdPieces;
    char nome[20];
}jogadores;

typedef jogadores * pontJogadores;

pontJogadores iniciarPiecesJog(pontDeque monte);

void trocarPiecesJog(pontDeque monte, pontJogadores jog, int pos);

void printarJog(pontJogadores jog);

void jogar(pont board, pontJogadores jog);

void leituraComandos(pont board, pontJogadores jog);

void fgetss(char str[], int n, char tipoComando[]);

void toLower(char str[]);

int verificaPeca(char formato, char cor);