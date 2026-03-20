#include <stdio.h>
#include <math.h>


int main()
{
    int n1, n2, pot1, pot2;
    printf("Insira um número inteiro qualquer: ");
    scanf("%d", &n1);
    printf("Insira um outro número inteiro qualquer: ");
    scanf("%d", &n2);
    pot1 = pow(n1, n2);
    printf("O número %d elevado pelo número %d é igual a %d", n1, n2, pot1);
    pot2 = pow(n2, n1);
    printf("\nAgora, invertendo a ordem, o número %d elevado pelo número %d é igual a %d", n2, n1, pot2);
    
    return 0;
}
