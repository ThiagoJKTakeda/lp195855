#include <stdio.h>

int main()
{
    int X, Y, SI = 0, N, temp;
    scanf("%d%d", &X, &Y);
   
    if(X<Y){
        N = X + 1;
        while(N<Y){
            if(N%2!=0){
                SI = SI + N;
            }
            N++;
            
        }
       
    }
    else if(X>Y){
        temp = X;
        X = Y;
        Y = temp;
        N = X + 1;
        while(N<Y){
            if(N%2!=0){
                SI = SI + N;
            }
            N++;
        }
        
        
    }
    printf("%d\n", SI);
   
   
    return 0;
}
