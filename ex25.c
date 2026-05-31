#include <stdio.h>
#include <stdlib.h>

#define MAX 20
int main()
{
    float comp, larg, soma = 0;
    int r = 1, cont = 0;
do{
    system("clear");
    printf("Digite o comprimento: ");
    scanf("%f",&comp);
    printf("Digite a largura: ");
    scanf("%f",&larg);
    soma += comp * larg;
    printf("Deseja adicionar mais? [0 = Não, 1 = Sim]: ");
    scanf("%d",&r);
}while(r!=0);
printf("Área total: %.2fm².",soma);
return 0;
}







