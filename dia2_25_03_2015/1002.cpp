#include <stdio.h>
 
int main(){
    double raio;
    double pi = 3.14159;
 
    scanf("%lf", &raio);
 
    double result = pi * (raio * raio);
 
    printf("A=%.4lf\n", result);
    return 0;
}