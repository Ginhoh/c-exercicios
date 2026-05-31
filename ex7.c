#include <stdio.h>
#include <math.h>


int main()
{
    double num, pot;
    printf("Insira um numero qualquer: ");
    scanf("%lf", &num);
    pot= num*num;
    printf("O quadrado do numero inserido eh: %.2lf", pot);
    
    return 0;
}
