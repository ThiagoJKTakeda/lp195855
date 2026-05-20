/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Thiago Jun Kimura Takeda
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1046
Data        : 20/05/2026
Objetivo    :Calcular a duração de um jogo.
Aprendizado : A trabalhar com vetores.
-------------------------------------------------------------------------- */
#include<stdio.h>
int calcularduracao(int inicio, int fim){
    if(inicio>fim){
        return (24 - inicio) + fim;
    }
    else if(fim == inicio){
        return 24;
    }
    else{
        return fim - inicio;
    }
}

int main(){
    int inicio, fim;
    scanf("%d%d", &inicio, &fim);
    int tempojogo = calcularduracao(inicio, fim);
    printf("O JOGO DUROU %d HORA(S)\n", tempojogo);
    return 0;
}
