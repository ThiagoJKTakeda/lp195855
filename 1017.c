/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Thiago Jun Kimura Takeda
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1017
Data        : 20/05/2026
Objetivo    :Calcular quantos litros um carro consome.
Aprendizado : A trabalhar com vetores.
-------------------------------------------------------------------------- */
#include <stdio.h>

float calcularlitros(int tempo, int velocidade){
    float distancia = tempo * velocidade;
    return distancia/12;
}

int main(){
    int tempo, velocidade;
    scanf("%d%d", &tempo, &velocidade);
    float litros = calcularlitros(tempo, velocidade);
    printf("%.3f\n", litros);
    return 0;
}
