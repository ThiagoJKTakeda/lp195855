#include <stdio.h>
int maior = 0, n;
int gran(int h){
    if(h==1){
        return maior;
    }
    if(h>maior){
        maior = h;
    }
    if(h%2==0){
        n = h/2;
    }
    else{
        n = 3*h + 1;
    }
    return gran(n);
}

int main(){
    int h;
    while(scanf("%d", &h) && h != 0){
        maior = h;
        gran(h);
        printf("%d\n", maior);
    }
    return 0;
}
