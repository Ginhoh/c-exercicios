#include <stdio.h>
#include <math.h>

int main()
{
    double num;
    printf("Insira um número inteiro qualquer: ");
    scanf("%lf", &num);
    
    double rad = sqrt(num);

    printf("A raiz quadrada do número %.2lf foi: %.2lf \n", num, rad);
    return 0;
}
