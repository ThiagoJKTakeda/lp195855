/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Thiago Jun Kimura Takeda
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1241
Data        : 03/05/2026
Objetivo    : Ver se um número B encaixa no final de um número A
Aprendizado : Aprender a trbalhar com strings
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <string.h>

int main()
{
    int N=0, i, t, tamanhoA=0,tamanhoB=0, fa=0, o=0, fb=0, g=0, c=0;
    char A[1001];
    char B[1001];
    char C[1001];
    scanf("%d ", &N);
    for(i=0;i<N;i++){
        tamanhoA=0;
        tamanhoB=0;
        t=0;
        c=0;
        o=0;
        scanf("%s", A);
        fa = strlen(A);
        scanf("%s", B);
        fb = strlen(B);
        if(fa<fb){
            printf("nao encaixa\n");
        }
        else if(fa>=fb){
            g = fa-fb;
            while(g<fa){
                
                C[c]= A[g];
                c=c+1;
                g=g+1;
            }
            C[c]='\0';
            if(strcmp(C,B)==0){
                printf("encaixa\n");
            }
            else{
                printf("nao encaixa\n");
            }
            
        }
    }

    return 0;
}
