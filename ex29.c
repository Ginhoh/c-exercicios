#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define MAX 50
struct cadastro{
    char nome[50]; 
    int dias;
    float valor;
};

float desconto(int dias, int idc);
int main()
{
    setlocale(LC_ALL," ");
    int op, longao = 0;
    float somav = 0, somad = 0, maior;
    struct cadastro hospede[MAX];
    printf("Quantos hóspedes deseja cadastrar?: ");
    scanf("%d",&op);
    
    for (int i =0; i<op;i++){
        system("clear");
        printf("Digite o nome do %dº hóspede: ",i+1);
        getchar();
        fgets(hospede[i].nome, MAX, stdin);
        
        printf("Total de Dias: ");
        scanf("%d",&hospede[i].dias);
        
        hospede[i].valor = desconto(hospede[i].dias, i);
    }
    maior = hospede[0].valor;
    for (int i =0; i<op;i++){
        if(hospede[i].dias>20){
            longao++;
        }
        if(hospede[i].valor> maior){
            maior = hospede[i].valor;
        }
        somav += hospede[i].valor;
        somad += hospede[i].dias;
        printf("O %d hóspede irá pagar R$%.2f\n",i+1,hospede[i].valor);
    }
    float mediav = somav/op, mediap = somad/op;
    
    printf("\n\nHospedes que ficaram mais de 20 dias: %d",longao);
    printf("\n\nMédia do valor das contas: R$%.2f",mediav);
    printf("\n\nMédia do valor de dias: %.1f",mediap);
    printf("\n\nMaior valor pago pelo hóspede: %.2f",maior);
    
    
    
return 0;
}


float desconto(int dias, int idc){
    float valor = 150;
    if(dias<=5){
        valor = valor - (valor * 0.05);
    }
    else if(dias<=10){
        valor = valor - (valor * 0.1);
    }
    else{
        valor = valor - (valor * 0.15);
    }
    return valor*dias;
}





