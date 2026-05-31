#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, " ");
    double soma =0, media, notas[2];
    for(int i = 0; i<3; i++){
        system("clear");
        printf("Digite a idade da %dª pessoa: ",i+1);
        scanf("%lf",&notas[i]);
        soma += notas[i];
    }
    media = soma /3;
    printf("A média da idade das três pessoas é: %.2lf",media);
    return 0;
}
