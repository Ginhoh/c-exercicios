#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

struct Funcionario{
    int idade;
    float salario;
    int acidente;
};

void inserir(struct Funcionario f[], int *pos, int ida, float sal, int aci){
    f[*pos].idade = ida;
    f[*pos].acidente = aci;
    if(sal>1500){
        f[*pos].salario = sal-(sal*10.0/100.0);
    }else{
         f[*pos].salario = sal;
    }
    (*pos)++;

    printf("Funcionário adicionado!\n\n");
}

float media_idade_aci(struct Funcionario f[], int pos){
    float media, soma, cont =0;
    for(int i=0; i<pos; i++){
        if (f[i].acidente ==1){
            soma+= f[i].idade;
            cont++;
        }
    }
    media = soma/cont;
    return media;
}
float salarios(struct Funcionario f[], int pos){
    float soma=0;
    for(int i=0; i<pos; i++){
            soma+= f[i].salario;
    }
    return soma;
}

int main(){
    int linhas, colunas, idg = 0, ida, aci;
    float sal;
    struct Funcionario f[100];
    setlocale(LC_ALL, " ");
    do{
        printf("Funcionário %d\n\n",idg+1);
        printf("Digite a idade: ");
        scanf("%d",&ida);
        printf("Digite o salario bruto: ");
        scanf("%f",&sal);
        printf("Digite já sofreu acidente? [0-Não 1-Sim]: ");
        scanf("%d",&aci);
        
        if(sal>0){
            inserir(f, &idg, ida, sal, aci);
        }
        
    }while(sal>0);
    
    printf("\nMédia de idade de funcionários que já sofreram acidente: %.1f\n",media_idade_aci(f, idg));
    printf("Total de salários líquidos (em R$) pagos pela empresa: R$%.2f\n\n",salarios(f, idg));
    return 0;
}