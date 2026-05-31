#include <stdio.h>
#include <stdlib.h>

int main()
{
    double notas[4], soma =0, media;
    for(int i = 0; i<5; i++){
        system("clear");
        printf("Digite a %dª nota: ",i+1);
        scanf("%lf",&notas[i]);
        soma += notas[i];
    }
    media = soma /5;
    printf("A média das 5 notas é: %.2lf",media);
    return 0;
}
