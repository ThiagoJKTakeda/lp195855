#include <stdio.h>

int contador;

int fib(int x){
    contador++;
    if(x == 0){
        return 0;
    }
    if(x == 1){
        return 1;
    }
    return fib(x-1) + fib(x-2);
}
int main(){
    int n, x, i, resultado;
    scanf("%d", &n);
    for(i=0; i < n; i++){
        scanf("%d", &x);
        contador = 0;
        resultado = fib(x);
        printf("fib(%d) = %d calls = %d\n", x,contador -1, resultado);
    }
    return 0;
}
