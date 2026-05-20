#include <stdio.h>

int main()
{
   int impar[5], par[5];
   int i, j, numero, quantpar = 0, quantimpar = 0;
   for(i=0;i<15;i++){
       scanf("%d", &numero);
       if(numero%2==0){
           par[quantpar]=numero;
           quantpar++;
           if(quantpar==5){
               for(j=0;j<quantpar;j++){
                   printf("par[%d] = %d\n", j, par[j]);
               }
               quantpar = 0;
           }
       }
       else{
           impar[quantimpar]=numero;
           quantimpar++;
           if(quantimpar==5){
               for(j=0;j<quantimpar;j++){
                   printf("impar[%d] = %d\n", j, impar[j]);
               }
               quantimpar = 0;
           }
       }
      
   }
   for(j=0; j<quantpar; j++){
       printf("par[%d] = %d\n", j, par[j]);
   }
   for(j=0; j<quantimpar; j++){
       printf("imapr[%d] = %d\n", j, impar[j]);
   }
    return 0;
}
