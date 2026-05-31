#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, " ");
    int c1, c2, h;
    printf("Digite o valor do primeiro cateto: ");
    scanf("%d",&c1);
    printf("Digite o valor do segundo cateto: ");
    scanf("%d",&c2);
    
    h = sqrt((c1*c1)+(c2*c2));
    printf("A hipotenusa é %d.",h);
    return 0;
}
