#include <stdio.h>
#include <stdlib.h>

#define MAX 50
struct dados{
    int sexo;
    float altura;
};
int main()
{
    int f = 0;
    float altf = 0,m = 0, altpop=0,  fem_baixas = 0;
    struct dados cidadao[MAX];
    
    for(int i = 0;i<=MAX;i++){
        system("clear");
        printf("Qual o sexo? [0: Masc 1: Fem]: ");
        scanf("%d",&cidadao[i].sexo);
        
        printf("Qual a altura em metros? ");
        scanf("%f",&cidadao[i].altura);
        if(cidadao[i].sexo == 1){
            f++;
            altf +=cidadao[i].altura;
            if(cidadao[i].altura < 1.65){
                fem_baixas++;
            }
        }else{
            m++;
        }
        altpop +=cidadao[i].altura;
    }
    printf("A média da altura das mulheres é: %.2f.\n",altf/f);
    printf("A média da altura da população é: %.2f.\n",altpop/MAX);
    printf("Percentual de homens: %.2f\n",(m*100)/MAX);
    printf("Quantidade de mulheres: %d\n",f);
    printf("Percentual de mulheres abaixo de 1,65m: %.2f",(fem_baixas*100)/f);
return 0;
}







