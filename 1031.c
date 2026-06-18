#include <stdio.h>

int corte(int N, int m){
    
    int ultima = 0;
    
    for(int i = 1; i < N; i++){
        ultima = (ultima + m)%i;
    }
    return ultima + 1;
}

int main(){
    int N, nc, ultima = 0;
    while(scanf("%d", &N) && N!=0){
       int m = 1;    
       while(corte(N, m)!=12){
           m++;
       }
       printf("%d\n", m);
    }
    
    return 0;
}
