#include<stdio.h> // Biblioteca necessário para entrada e saída (scanf e printf)

int main(){ // Função principal, ponto de partida do programa
    int n; // Variável do problema - Pressão desejada digitada
    int m; // Variável do problema - Pressão do pneu lida
    int resultado; // Variável que vai guardar o resultado da operação que será mostrado para o usuário
    scanf("%d", &n); // Leitura do primeiro valor
    scanf("%d", &m); // Leitura do segundo valor

    resultado = n - m; // Operação pedida pelo problema

    printf("%d\n", resultado); // Apresenta o resultado para o usuário

    return 0; // Indica que o código executou corretamente até o seu término
}