#include <stdio.h>

int main()
{
    int m[100][100];
    int N, M;
    
    while(scanf("%d%d", &N, &M) != EOF){
        for(int i = 0; i<N; i++){
            for(int j = 0; j<M; j++){
                scanf("%d", &m[i][j]);
            }
        }
        for(int i = 0; i<N; i++){
            for(int j = 0; j<M; j++){
                
                if(m[i][j] == 1){
                    printf("9");
                }
                else{
                    int contagem = 0;
                    if(i>0 && m[i-1][j]==1){
                        contagem++;
                    }
                    if(i+1<N && m[i+1][j]==1){
                        contagem++;
                    }
                    if(j>0 && m[i][j-1]==1){
                        contagem++;
                    }
                    if(j+1<M && m[i][j+1]==1){
                        contagem++;
                    }
                    printf("%d", contagem);
                }
               
            }
            printf("\n");
           
        }
    }
    return 0;
}
