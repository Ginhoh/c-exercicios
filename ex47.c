#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

struct Funcionario {
  float sal_bruto;
  int produtos;
  float comissao;
  float salario;
};
#define NUM 1200
int main()
{
    struct Funcionario f[NUM];
    float soma=0, media;
    srand(time(NULL));
    printf("OBS: OS VALORES SÃO DEFINIDOS POR SORTEIO\n");
    
    for(int i = 0; i<NUM; i++){

        f[i].sal_bruto = (rand() % (2000 - 1000 + 1)) + 1000;
        f[i].produtos = (rand() % 100) + 1;

        if(f[i].produtos<=5){
            f[i].comissao = 1.5;
        }
        else if(f[i].produtos<=50){
            f[i].comissao = 2.0;
        }
        else{
            f[i].comissao = 2.5;
        }
        f[i].salario = f[i].sal_bruto + (f[i].produtos*f[i].comissao);
        
        soma += f[i].salario;
    }
    float maior = f[0].sal_bruto;
    for(int i = 0; i<NUM; i++){
        
        printf("\nO salário do funcionário  %d é igual a R$%.2f\n", i+1, f[i].salario);
        if(f[i].sal_bruto > maior){
            maior = f[i].sal_bruto;
        }
    }
    media = soma/NUM;
    printf("\nO média salárial paga pela empresa é igual a R$%.2f\n", media);
    printf("O maior salário fixo é igual a R$%.2f\n", maior);
    return 0;
}