/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Thiago Jun Kimura Takeda
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1234
Data        : 25/04/2026
Objetivo    : Alternar entre maiúsculo e minusculo as letras de uma frase
Aprendizado : Aprender comandos de string
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char nome[51];
    int i=1;
    while (fgets(nome, sizeof(nome), stdin)) {
        int contador = 0;
        
        for(i = 0; nome[i]!='\0'; i++){
            if(nome[i]>='A'&&nome[i]<='Z'||nome[i]>='a'&&nome[i]<='z'){
                contador++;
                if(contador%2!=0){
                    nome[i]=toupper(nome[i]);
                }
                else{
                    nome[i]=tolower(nome[i]);
                }
            }
        }
     nome[i]='\0';
     printf("%s", nome);
     }
  

    return 0;
}
