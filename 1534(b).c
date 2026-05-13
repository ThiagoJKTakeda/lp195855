#include <stdio.h>

int main()
{
   int matriz[70][70];
   int N, i=0, j=0;
   while(scanf("%d", &N)!= EOF){
       for(i=0 ;i<N; i++){
           int *p=matriz[i];
           for(j=0; j<N; j++){
               if(i+j==N-1){
                   *(p+j)=2;
               }
               else if(i==j){
                   *(p+j)=1;
               }
               else{
                   *(p+j)=3;
               }
               printf("%d", *(p+j));
           }
           printf("\n");
       }
   }
    return 0;
}
