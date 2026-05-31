#include <stdio.h>
#include <locale.h>


int main()
{
    float c, f;
    setlocale(LC_ALL, " ");
    
    printf("Digite a temperatura em Farenheit: ");
    scanf("%f", &f);
    c = 5.0/9.0*(f-32);

   
    printf("A conversão de F° para C° é: %.2f",c);
    return 0;
}
    
    
    