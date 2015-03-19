#include<stdio.h> // Biblioteca necessário para entrada e saída (scanf e printf)

int main(){ // Função principal, ponto de partida do programa
    int n;
    int resultado;
    scanf("%d", &n); // Leitura do valor pedido no problema

    resultado = n * n; // Eleva o número digitado ao quadrado

    printf("%d\n", resultado); // Apresenta o resultado para o usuário

    return 0;
}