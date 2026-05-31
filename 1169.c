#include <stdio.h>

unsigned long long potencia(int elevado){
    if(elevado == 0){
        return 1;
    }
    return 2*potencia(elevado-1);
}
unsigned long long graos(int x){
    if(x==0){
        return 0;
    }
    return potencia(x-1) + graos(x-1);
}

int main(){
    int n, x;
    if (scanf("%d", &n) != 1) return 0;
    
    while(n--){
        if (scanf("%d", &x) != 1) break;
        unsigned long long total_graos = graos(x);
        unsigned long long kg = (total_graos / 12000);
        printf("%llu kg\n", kg);
    }
    return 0;
}
