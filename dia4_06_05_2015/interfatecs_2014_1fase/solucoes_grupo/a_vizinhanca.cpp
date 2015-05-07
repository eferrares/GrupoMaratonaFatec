#include<iostream>
#include<cstdio>
#include<cstring>
#define MAX 1005
using namespace std;

int l, c;
int matriz[MAX][MAX];

bool is_valid(int i, int j){
    return (i >= 0 && i < l && j >= 0 && j < c);
}

bool valid_v(int xv, int yv, int xa, int ya){
    if(matriz[xa][ya] == 'A'){
        return matriz[xv][yv] != 'D' && matriz[xv][yv] != 'B';
    } else if(matriz[xa][ya] == 'B'){
        return matriz[xv][yv] != 'C' && matriz[xv][yv] != 'A';
    } else if(matriz[xa][ya] == 'C'){
        return matriz[xv][yv] != 'B';
    } else if(matriz[xa][ya] == 'D'){
        return matriz[xv][yv] != 'A';
    }
    return true;
}

int main(){
    while((cin >> l >> c) && (l + c)){
        memset(matriz, 0, sizeof matriz);
        int ok = 1, i, j;
        for(i = 0; i < l; i++){
            for(j = 0; j < c; j++){
                cin >> matriz[i][j];
            }
        }

        for(i = 0; i < l; i++){
            for(j = 0; j < c; j++){
                if(is_valid(i - 1, j) && !valid_v(i-1, j, i , j))
                    ok = 0;
                if(is_valid(i + 1, j) && !valid_v(i+1, j, i , j))
                    ok = 0;
                if(is_valid(i, j - 1) && !valid_v(i, j-1, i , j))
                    ok = 0;
                if(is_valid(i, j + 1) && !valid_v(i, j+1, i , j))
                    ok = 0;
            }
            if(!ok)
                break;
        }

        if(ok)
            cout << "V\n";
        else
            cout << "F\n";
    }

    return 0;
}
