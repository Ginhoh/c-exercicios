#include <stdio.h>
#include <locale.h>


#define MAX 100

typedef struct {
    char sexo;
    float altura;
} cadastro;

int main()
{
    setlocale(LC_ALL, " ");
    cadastro pessoa[MAX];
    float maior, soma=0, mediam=0,f=0, percen=0;
    int cont = 0, m =0, b=0;
    
    
    do {
    printf("---***%dª Pessoa***---\n", cont+1);

    printf("\nDigite o sexo [m/f]: ");
    scanf(" %c", &pessoa[cont].sexo);

    printf("Digite a altura (0 para parar): ");
    scanf("%f", &pessoa[cont].altura);

    cont++;
} while (pessoa[cont-1].altura != 0);

    int tamanho = sizeof(pessoa) / sizeof(pessoa[0]);
    maior = pessoa[0].altura;
    for(int i = 0; i<=tamanho;i++){
        if(pessoa[i].altura>maior){
            maior = pessoa[i].altura;
        }
        if(pessoa[i].sexo == 'm'){
            m++;
        }
        if(pessoa[i].sexo == 'f'){
        soma+=pessoa[i].altura;
        f++;
        if(pessoa[i].altura<1.67){
            b++;
        }
        }

    }
    mediam = soma/f;
    percen = (b*100)/f;
    printf("\nMaior: %.2f\nHomens: %d\nMédia de altura de mulheres: %.2f\nPercentual de mulheres abaixo de 1,68m: %.0f%",maior, m,mediam,percen);
return 0;
}







