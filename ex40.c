#include <stdio.h>
#include <locale.h>

/* Ler três números positivos e inteiros (A, B, C) e calcular a expressão D = (R + S) 
/ 2, 
onde R = (A + B) ² e S = (B + C)²
*/
int main()
{
    int a, b, c, d, r, s;
    setlocale(LC_ALL, " ");
    printf("Digite o primero valor: ");
    scanf("%d",&a);
    
    printf("Digite o segundo valor: ");
    scanf("%d",&b);
    
    printf("Digite o terceiro valor: ");
    scanf("%d",&c);
    
    r = (a+b)*(a+b);
    s = (c+b)*(c+b);
    d = (r+s)/2;
    printf("O valor final da operação é %d.",d);
    return 0;
}
