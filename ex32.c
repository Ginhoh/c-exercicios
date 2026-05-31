#include <stdio.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, " ");
    float raio, comprimento;
    
    
    printf("Digite o raio do círculo: ");
    scanf("%f",&raio);
    comprimento = raio *2*3.14;
    
    
    printf("O comprimento do círculo é de %.2f",comprimento);
    return 0;
}
