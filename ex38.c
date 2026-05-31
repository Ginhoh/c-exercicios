#include <stdio.h>
#include <locale.h>
#include <string.h>

struct Funcionario {
  char nome[50];
  int horas_trabalhadas;
  int dependentes;
};

int main()
{
    float salario, inss = 13.5, liquido, soma;
    setlocale(LC_ALL, " ");
    struct Funcionario f;
    printf("Qual o nome do funcionário? ");
    fgets(f.nome, 50, stdin);
    f.nome[strcspn(f.nome, "\n")] = '\0';
    
    printf("Quantas horas ele trabalha? ");
    scanf("%d",&f.horas_trabalhadas);
    
    printf("Dependentes: ");
    scanf("%d",&f.dependentes);
    
    soma = (f.dependentes*100)+(3*f.horas_trabalhadas);
    liquido = (soma-(soma*inss/100));
    
    printf("O salário líquido de %s é de R$%.2f.",f.nome, liquido);
    return 0;
}
