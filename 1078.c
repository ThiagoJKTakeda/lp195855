/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Thiago Jun Kimura Takeda
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1078
Data        : 28/04/2026
Objetivo    : Escrever a tabuada de um número N
Aprendizado : Aprender a usar o for
-------------------------------------------------------------------------- */

#include <stdio.h>

int main()
{
    int N, i;
    scanf("%d", &N);
    for(i=1;i<11;i++){
        printf("%d x %d = %d\n",i,N,N*i);
        
    }
   

    return 0;
}
