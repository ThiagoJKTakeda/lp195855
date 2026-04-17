#include <stdio.h>

int main()
{
    int x[100], t, maior = 0, tdomaior=0;
    scanf("%d", &x[0]);
    maior = x[0];
    
    for(t=1; t<100;++t){
        scanf("%d", &x[t]);
        if(x[t]>=x[tdomaior]){
            maior = x[t];
            tdomaior = t;
        }
        
    }
    printf("%d\n", maior);
    printf("%d\n", tdomaior + 1);
    
    return 0;
}
