#include <stdio.h>
#include <locale.h>
#include <string.h>

struct Vendedor{
  char nome[50];
  int codigo;
  int tot_vendas;
  float valor_vendas;
  float sal_fixo;
  float comissao;
  float salario;
};
int main()
{
    setlocale(LC_ALL, " ");
    struct Vendedor v;
    printf("Digite o nome: ");
    fgets(v.nome, 50, stdin);
    v.nome[strcspn(v.nome, "\n")] = '\0';
    
    printf("Digite o id do funcionário: ");
    scanf("%d",&v.codigo);
    
    printf("Total de vendas: ");
    scanf("%d",&v.tot_vendas);
    
    printf("Valor total de vendas: ");
    scanf("%f",&v.valor_vendas);
    v.salario += v.valor_vendas*5/100;
    printf("Salário fixo: ");
    scanf("%f",&v.sal_fixo);
    
    v.salario += v.sal_fixo;
    
    printf("Comissão por venda: ");
    scanf("%f",&v.comissao);
    v.salario += v.tot_vendas*v.comissao;
    

   
    printf("O salário mensal de %s [%d] é R$%.2f.",v.nome, v.codigo, v.salario);
    return 0;
    
    
}
    
    
    