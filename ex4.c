#include <stdio.h>

int main()
{
    int n1, n2, multi;
    printf("Programa que calcula multiplicação de dois números\n\n");
    
    printf("Digite o primeiro número: ");
    scanf("%d",&n1);
    
    printf("Digite o primeiro número: ");
    scanf("%d",&n2);
    
    multi = n1*n2;;
    
    printf("A multiplicação de %d e %d é %d",n1,n2,multi);
    return 0;
}
