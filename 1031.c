/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Thiago Jun Kimura Takeda
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1031
Data        : 17/06/2026
Objetivo    :Encontrar quantas unidades pular para que a região 13 seja sempre a última a ser desligada.
Aprendizado : A trabalhar com funções recursivas.
-------------------------------------------------------------------------- */
#include <stdio.h>

int corte(int N, int m){
    
    int ultima = 0;
    
    for(int i = 1; i < N; i++){
        ultima = (ultima + m)%i;
    }
    return ultima + 1;
}

int main(){
    int N, nc, ultima = 0;
    while(scanf("%d", &N) && N!=0){
       int m = 1;    
       while(corte(N, m)!=12){
           m++;
       }
       printf("%d\n", m);
    }
    
    return 0;
}
