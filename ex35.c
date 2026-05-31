#include <stdio.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, " ");
    float raio, volume, h;
    
    
    printf("Digite o raio do círculo: ");
    scanf("%f",&raio);
    printf("Digite a altura do círculo: ");
    scanf("%f",&h);
    
    volume = 3.14*(raio*raio)*h;
    
    
    printf("O volume do cilindro é de aproximadamente %.2f",volume);
    return 0;
}
