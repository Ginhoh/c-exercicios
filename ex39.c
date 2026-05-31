#include <stdio.h>
#include <locale.h>


int main()
{
    float fabrica, consumidor, lucro, imposto;
    setlocale(LC_ALL, " ");
    
    printf("Qual o preço de fábrica do carro? ");
    scanf("%f",&fabrica);
    
    lucro = fabrica * 28/100;
    imposto = fabrica * 45/100;
    consumidor = fabrica + lucro + imposto;
    printf("O valor final do carro é de R$%.2f.",consumidor);
    return 0;
}
