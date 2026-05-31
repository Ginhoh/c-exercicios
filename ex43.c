#include <stdio.h>
#include <locale.h>


int main()
{
    float c, f;
    setlocale(LC_ALL, " ");
    
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &c);
    f = (c * 9.0/5.0) + 32;

   
    printf("A conversão de C° para F° é: %.2f",f);
    return 0;
}
    
    
    