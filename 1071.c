/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Thiago Jun Kimura Takeda
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1071
Data        : 15/04/2026
Objetivo    : Ler dois valores inteiros e mostrar a soma dos ímpares entre eles
Aprendizado : Funcionamento do comando while
-------------------------------------------------------------------------- */
#include <stdio.h>

int main()
{
    int X, Y, SI = 0, N, temp;
    scanf("%d%d", &X, &Y);
   
    if(X<Y){
        N = X + 1;
        while(N<Y){
            if(N%2!=0){
                SI = SI + N;
            }
            N++;
            
        }
       
    }
    else if(X>Y){
        temp = X;
        X = Y;
        Y = temp;
        N = X + 1;
        while(N<Y){
            if(N%2!=0){
                SI = SI + N;
            }
            N++;
        }
        
        
    }
    printf("%d\n", SI);
   
   
    return 0;
}
