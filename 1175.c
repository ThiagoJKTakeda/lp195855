/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Thiago Jun Kimura Takeda
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1175
Data        : 18/06/2026
Objetivo    :Inverter os valores de um vetor.
Aprendizado : A trabalhar com vetores.
-------------------------------------------------------------------------- */
#include <stdio.h>

int main()
{
    int v1[20];
    int v2[20];
    for(int i=0; i<20; i++){
        scanf("%d", &v1[i]);
    }
    for(int i = 0; i<20; i++){
        v2[i] = v1[19-i];
    }
    for(int i = 0; i<20; i++){
         printf("N[%d] = %d\n", i, v2[i]);
    }

    return 0;
}
