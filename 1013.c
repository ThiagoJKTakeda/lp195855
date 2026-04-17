/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Thiago Jun Kimura Takeda
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1071
Data        : ??/04/2026
Objetivo    : Imprimir o maior de três números
Aprendizado : Utilização do comando if
-------------------------------------------------------------------------- */

#include <stdio.h>
 
int main() {
    
    int N1, N2, N3, maior;
    scanf("%d""%d""%d", &N1,&N2,&N3);
    if (N1>N2 && N1>N3){
       maior=N1;
    }
    else if (N2>N3){
       maior=N2;
    }
    else{
       maior=N3;
    }
    printf("%d eh o maior\n",maior);
 
    
 
    return 0;
}
