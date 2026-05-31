#include <stdio.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, " ");
    float anos, preco;
    int qtd;
    
    printf("Você fuma a quantos anos? ");
    scanf("%f",&anos);
    printf("Quantos por dia? ");
    scanf("%d",&qtd);
    printf("Valor da caixa: R$ ");
    scanf("%f",&preco);
    
    float total = ((anos*365)*qtd)/20*preco;
    printf("Você já gastou R$%.2f com cigarro.\nUma carteira vem 20 cigarros",total);
    return 0;
}
