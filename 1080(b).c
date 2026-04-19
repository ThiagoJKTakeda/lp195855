#include <stdio.h>
 
int main() {
    int x=0, y=0, maior=0, pm=0;
    while(y<100){
        scanf("%d", &x);
        if(x>maior){
            maior=x;
            pm=y+1;
        }
        y++;
    }
    printf("%d\n", maior);
    printf("%d\n", pm);

    
    
 
   
 
    return 0;
}
