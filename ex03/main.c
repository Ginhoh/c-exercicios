#include <stdio.h>

int main()
{
    int n1, n2, soma;
    printf("Programa para soma de 2 números\n\n");
    
    printf("Digite o primeiro número: ");
    scanf("%d",&n1);
    
    printf("Digite o segundo número: ");
    scanf("%d",&n2);
    
    soma = n1+n2;
    printf("A soma de %d + %d = %d",n1,n2,soma);
    return 0;
}
