#include <stdio.h>

float calcularlitros(int tempo, int velocidade){
    float distancia = tempo * velocidade;
    return distancia/12;
}

int main(){
    int tempo, velocidade;
    scanf("%d%d", &tempo, &velocidade);
    float litros = calcularlitros(tempo, velocidade);
    printf("%.3f\n", litros);
    return 0;
}
