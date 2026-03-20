#include <stdio.h>
#include <math.h>


int main()
{
    int n1, n2, dividir;
    printf("Insira um número inteiro qualquer: ");
    scanf("%d", &n1);
    printf("Insira um outro número inteiro qualquer: ");
    scanf("%d", &n2);
    dividir = n1 % n2;
    printf("O resto da divisão entre %d e %d foi %d", n1, n2, dividir);
    return 0;
}
