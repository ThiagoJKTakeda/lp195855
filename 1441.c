/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Thiago Jun Kimura Takeda
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1441
Data        : 31/05/2026
Objetivo    : A partir de um número h, gerar uma sequêncoa até chegar em 1 e falar qual foi o maior número da sequência.
Aprendizado : A trabalhar com funções recursivas.
-------------------------------------------------------------------------- */

#include <stdio.h>
int maior = 0, n;
int gran(int h){
    if(h==1){
        return maior;
    }
    if(h>maior){
        maior = h;
    }
    if(h%2==0){
        n = h/2;
    }
    else{
        n = 3*h + 1;
    }
    return gran(n);
}

int main(){
    int h;
    while(scanf("%d", &h) && h != 0){
        maior = h;
        gran(h);
        printf("%d\n", maior);
    }
    return 0;
}
