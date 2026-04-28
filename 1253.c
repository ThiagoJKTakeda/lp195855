#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char cifra[51];
    char descrip[51];
    
    int x=0,i,t,deslocamento=0, lv=0, CA=0;
    scanf(" %d", &x);
    getchar();
    for(i=0;i<x;i++){
        fgets(cifra, sizeof(cifra), stdin);
        cifra[strcspn(cifra, "\n")]='\0';
        scanf(" %d", &deslocamento);
        getchar();
        for(t=0;cifra[t]!='\0';t++){
           char letra = cifra[t];
           CA = (int)letra - deslocamento;
           if(CA<65){
               CA = CA + 26;
               lv = (char)CA;
               descrip[t]=lv;
           }
           else{      
               lv = (char)CA;
               descrip[t]=lv;
          }                
        }
     descrip[t] = '\0';
     printf("%s\n", descrip);
   }
    return 0;
}
