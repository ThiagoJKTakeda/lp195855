V/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Thiago Jun Kimura Takeda
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1169
Data        : 31/05/2026
Objetivo    :Calcular a massa grãos a partir das casas de um tabuleiro.
Aprendizado : A trabalhar com funções recursivas.
-------------------------------------------------------------------------- */

#include <stdio.h>

unsigned long long potencia(int elevado){
    if(elevado == 0){
        return 1;
    }
    return 2*potencia(elevado-1);
}
unsigned long long graos(int x){
    if(x==0){
        return 0;
    }
    return potencia(x-1) + graos(x-1);
}

int main(){
    int n, x;
    if (scanf("%d", &n) != 1) return 0;
    
    while(n--){
        if (scanf("%d", &x) != 1) break;
        unsigned long long total_graos = graos(x);
        unsigned long long kg = (total_graos / 12000);
        printf("%llu kg\n", kg);
    }
    return 0;
}
