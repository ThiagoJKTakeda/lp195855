#include<stdio.h>
int josephus(int n, int k){
    int sobrevivente = 0;

    for(int i = 2; i <= n; i++){
        sobrevivente = (sobrevivente + k) % i;
    }
    return sobrevivente + 1;
}
int main(){
   int nc;
   int n, k;

   if(scanf("%d", &nc) != 1){
       return 1;
   }
   for(int caso = 1; caso <= nc; caso++){
       scanf("%d%d", &n, &k);
       int resposta = josephus(n, k);
       printf("Case %d: %d\n", caso, resposta);
   }
    return 0;
}
