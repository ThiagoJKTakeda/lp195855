/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Thiago Jun Kimura Takeda
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1080
Data        : 16/04/2026
Objetivo    : Imprimir o maior de 100 números
Aprendizado : Como trabalhar com vetores
-------------------------------------------------------------------------- */
#include <stdio.h>

int main()
{
    int x[100], t, maior = 0, tdomaior=0;
    scanf("%d", &x[0]);
    maior = x[0];
    
    for(t=1; t<100;++t){
        scanf("%d", &x[t]);
        if(x[t]>=x[tdomaior]){
            maior = x[t];
            tdomaior = t;
        }
        
    }
    printf("%d\n", maior);
    printf("%d\n", tdomaior + 1);
    
    return 0;
}
