/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Thiago Jun Kimura Takeda
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1180
Data        : 18/06/2026
Objetivo    : Encontrar o menor valor de um vetor.
Aprendizado : A trabalhar com vetores.
-------------------------------------------------------------------------- */
#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int X[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &X[i]);
    }
    int menor = X[0], posicao = 0;
    for(int i = 1; i < N; i++){
        if(X[i] < menor){
            menor = X[i];
            posicao = i;
        }
    }
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);
    return 0;
}
