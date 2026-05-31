#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{

    
    float x1, x2, y1, y2, d;
    setlocale(LC_ALL, " ");
    
    printf("Calculo de distância euclidiana\n\n");

    printf("Digite o primeiro ponto de X: ");
    scanf("%f",&x1);
    
    printf("Digite o primeiro ponto de Y: ");
    scanf("%f",&y1);
    
    printf("Digite o segundo ponto de X: ");
    scanf("%f",&x2);
    
    
    printf("Digite o primeiro ponto de Y: ");
    scanf("%f",&y2);
    
    d = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    
   
    printf("\nResultado: %.2f", d);
    
    return 0;
}
    
    
    