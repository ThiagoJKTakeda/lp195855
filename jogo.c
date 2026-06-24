/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Thiago Jun Kimura Takeda
Linguagem   : C
Problema    : 
Data        : 24/06/2026
Objetivo    : Ler um arquivo de sudoku, uma pessoa resolver e dizer se está correto ou não.
Aprendizado : A trabalhar com matriz.
-------------------------------------------------------------------------- */
#include <stdio.h>

int valida_linhas(int sudoku[9][9]){
    for(int i = 0; i < 9; i++){
        int frequencia[10] = {0};
        for(int j = 0; j < 9; j++){
            int numero = sudoku[i][j];
            if(numero != 0){
                if(frequencia[numero] == 1){
                    return 0;
                }
                else{
                    frequencia[numero] = 1;
                }
            }
        }
    }
    return 1;
}

int valida_colunas(int sudoku[9][9]){
    for(int j = 0; j < 9; j++){
        int frequencia[10] = {0};
        for(int i = 0; i < 9; i++){
            int numero = sudoku[i][j];
            if(numero != 0){
                if(frequencia[numero] == 1){
                    return 0;
                }
                else{
                    frequencia[numero] = 1;
                }
            }
        }
    }
    return 1;
}

int valida_blocos(int sudoku[9][9]){
    for(int coluna_bloco = 0; coluna_bloco < 9; coluna_bloco += 3){
        for(int linha_bloco = 0; linha_bloco < 9; linha_bloco += 3){
            int frequencia[10] = {0};
            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    int numero = sudoku[linha_bloco + i][coluna_bloco + j];
                    if(numero != 0){
                        if(frequencia[numero] == 1){
                            return 0;
                        }
                        else{
                            frequencia[numero] = 1;
                        }
                    }
                }
            }
        }
    }
    return 1;
}
int finalizado(int sudoku[9][9]){
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            if(sudoku[i][j] == 0){
                return 0;
            }
        }
    }
    return 1;
}

int main(){

    int sudoku[9][9];
    FILE *arquivo = fopen("input2.txt", "r");
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            fscanf(arquivo, "%d", &sudoku[i][j]);
        }
    }
    fclose(arquivo);

    int jogando = 1;
    while(jogando){
        for(int i = 0; i < 9; i++){
            if(i > 0 && i % 3 == 0){
                printf("------------------------\n");
            }
            for(int j = 0; j < 9; j++){
                if(j > 0 && j % 3 == 0){
                    printf("| ");
                }
                printf("%d ", sudoku[i][j]);
            }
            printf("\n");
        }

        int l, c, num;

        printf("\nDigite a linha: ");
        scanf("%d", &l);
        printf("\nDigite a coluna: ");
        scanf("%d", &c);
        printf("\nDigite o número: ");
        scanf("%d", & num);

        if(l == -1){
            break;
        }

        l--;
        c--;

        if(sudoku[l][c] != 0){
            printf("Erro! Coordenada já preenchida.\n");
            continue;
        }

        if(l < 0|| 8 < l || c < 0 || 8 < c){
            printf("Coordenadas inválidas! Tente novamente.\n");
            continue;
        }
        if(num < 0 || 9 < num){
            printf("Número inválido! Tente novamente.\n");
            continue;
        }
        int numero_antigo = sudoku[l][c];
        sudoku[l][c] = num;

        int r_linha = valida_linhas(sudoku);
        int r_coluna = valida_colunas(sudoku);
        int r_bloco = valida_blocos(sudoku);

        if(r_linha == 0 || r_coluna == 0 || r_bloco == 0){
            printf("\nJOGADA INVÁLIDA!\n");
            sudoku[l][c] = numero_antigo;
        }
        else{
            printf("\nJOGADA ACEITA COM SUCESSO!\n");
        }
        
        int completo = finalizado(sudoku);

        if(completo == 0){
            continue;
        }
        else{
            printf("SUDOKU SOLUCIONADO COM SUCESSO!");
            jogando = 0;
        }
    }
    return 0;
}
