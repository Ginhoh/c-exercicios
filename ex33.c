#include <stdio.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, " ");
    float raio, area;
    
    
    printf("Digite o raio do círculo: ");
    scanf("%f",&raio);
    area = raio *raio*3.14;
    
    
    printf("a área do círculo é de %.2f",area);
    return 0;
}
