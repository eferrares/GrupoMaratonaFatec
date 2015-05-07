#include<iostream>
#include<cstdio>
#include<cstring>
#define MAX 5
using namespace std;

int matriz[MAX][MAX];
int linha[MAX];
int coluna[MAX];

int main(){
    int caso;
    while(cin >> caso){
        memset(matriz, 0, sizeof matriz);
        memset(linha, 0, sizeof linha);
        memset(coluna, 0, sizeof coluna);
        int correto = 1, i, j;
        for(i = 0; i < 4; i++){
            for(j = 0; j < 4; j++){
                cin >> matriz[i][j];
                linha[i] += matriz[i][j];
                coluna[j] += matriz[i][j];
            }
        }
        int x_inicio, y_inicio, x_fim, y_fim;
        for(i = 0; i < 4; i++){
            for(j = 0; j < 4; j++){
                if(linha[i] == 3 && coluna[j] == 3){
                    x_inicio = i+1; y_inicio = j+1;
                    correto = 0;
                }if(linha[i] == 1 && coluna[j] == 1){
                    x_fim = i+1; y_fim= j+1;
                    correto = 0;
                }
            }
        }


        if(!correto)
            printf("Caso %d: MOVER CANGURU DE (%d,%d) PARA (%d,%d)\n", caso, x_inicio, y_inicio, x_fim, y_fim);
        else
            printf("CORRETO\n");
    }

    return 0;
}

