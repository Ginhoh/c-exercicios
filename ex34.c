#include <stdio.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, " ");
    float raio, volume;
    
    
    printf("Digite o raio do círculo: ");
    scanf("%f",&raio);
    volume = (4.0/3.0)*3.14*(raio*raio*raio);
    
    
    printf("O volume da esfera é de aproximadamente %.2f",volume);
    return 0;
}
