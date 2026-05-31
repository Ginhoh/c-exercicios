#include <stdio.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, " ");
    float kmi, kmf, gas=6.0, cons, litros, rodagem, gastos;
    int lampada;
    printf("Quando você iniciou a viagem, quanto estava marcando o odômetro? ");
    scanf("%f",&kmi);
    
    printf("Quando você finalizou a viagem, quanto estava marcando o odômetro? ");
    scanf("%f",&kmf);
    
    printf("Quantos litros de combustível foram gastos? ");
    scanf("%f",&cons);
    
    rodagem = kmf-kmi;
    printf("Você dirigiu %f kms´\n",rodagem);
    
    litros = (rodagem)/cons;
    printf("O seu carro faz %f km por litro\n",litros);
    
    gastos = gas*cons;
    printf("Com a gasolina custando R$%.2f, você gastou R$%.2f",gas, gastos);
 
    
    return 0;
}
