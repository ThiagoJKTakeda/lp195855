/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Thiago Jun Kimura Takeda
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1015
Data        : 14/05/2026
Objetivo    : Calcular a distancia entre dois ppontos 
Aprendizado : Aprender a usar funções.
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <math.h>

double distancia(double X1, double X2, double Y1, double Y2){
   double subx = X2 - X1;
   double suby = Y2 - Y1;
    
   double quadx = subx*subx;
   double quady = suby*suby;
    
   return quadx + quady;
    
}

int main(){
    double X1, X2, Y1, Y2;
    scanf("%lf%lf%lf%lf", &X1, &Y1, &X2, &Y2);
    
    double resultado = distancia(X1,X2, Y1, Y2);
    double dist = sqrt(resultado);
    printf("%.4lf\n", dist);
    
    return 0;
}
