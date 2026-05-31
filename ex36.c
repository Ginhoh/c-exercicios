#include <stdio.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, " ");
    float area, larg, comp;
    int lampada;
    
    
    printf("Potência da lâmpada em watts: ");
    scanf("%d",&lampada);
    
    printf("largura do espaço a ser iluminado em metros: ");
    scanf("%f",&larg);
    
    printf("Comprimento do espaço a ser iluminado em metros:");
    scanf("%f",&comp);
    
    area = larg*comp;
    float total = (area*18)/lampada;
    
    
    
    printf("Você irá precisar de %.0f lampadas",total);
    return 0;
}
