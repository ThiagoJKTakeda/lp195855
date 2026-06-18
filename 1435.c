#include <stdio.h>

int main(){
    int N;
    while(scanf("%d", &N) && N!=0){
        int m[N][N];
        for(int i = 0; i<N; i++){
            for(int j = 0; j<N; j++){
                int menor = i;
                if(menor> j){
                    menor = j;
                }
                if(menor>(N-1)-i){
                    menor = (N-1)-i;
                }
                if(menor>(N-1)-j){
                    menor = (N-1)-j;
                }
                
                m[i][j] = menor+1;
                
            }
        }
        for(int i=0; i<N; i++){
            for(int j = 0; j<N; j++){
                if(j == 0){
                    printf("%3d", m[i][j]);
                }
                else{
                    printf(" %3d", m[i][j]);
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
