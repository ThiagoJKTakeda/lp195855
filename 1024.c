#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char m[1001];
    char cript1[1001];
    char cript2[1001];
    int i=0, t=0, N=0, tam=0, temp = 0;
    scanf("%d", &N);
    getchar();
    for(t=0;t<N;t++){
        fgets(m, sizeof(m), stdin);
        m[strcspn(m, "\n")] = '\0';

        tam = strlen(m);
        for(i=0;m[i]!='\0'; i++){
            if('a'<= m[i] && m[i] <= 'z' || 'A' <= m[i] && m[i]<='Z'){
                m[i]=m[i]+3;
            }
            
        }
        i=0;
        for(i=0;i<tam/2; i++){
           temp = m[i];
           m[i]=m[tam-1-i];
           m[tam-1-i]=temp;
        }
        i=0;
        for(i=(tam/2); i<tam; i++){
            m[i]=m[i]-1;
            
        }
        printf("%s\n",m);
    }
    

    return 0;
}
