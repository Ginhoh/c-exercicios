#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>


void insert(int v[], int *pos, int value, int max){
    if(*pos>max){
        printf("\nLISTA CHEIA\n");
    }else{
        v[*pos] = value;
        (*pos)++;
        printf("\nENTENDIDO!\n");
    }
}
float calcular_porcent(float nom, float den){
    float percent = nom/den*100.0;
    return percent;
    
}
void main(){
    setlocale(LC_ALL, " ");
    int frequencia[100], idg = 0, vezes, pouco=0, razoavel = 0, muito=0;
    do{
    printf("Quantas vezes o aluno %d frequentou o restaurante [negativo para sair]: ", idg+1);
    scanf("%d",&vezes);
    
    if(vezes > -1){
        insert(frequencia, &idg, vezes, 100);
        if(vezes< 10){
            pouco++;
        }
        else if(vezes<16){
            razoavel++;
        }
        else{
            muito++;
        }
    }
        
    }while(vezes > -1);
    
    printf("\n\nTOTAL: %.2d\n",idg);
    printf("Utilizaram o restaurante menos de 10 vezes: %.2f%\n",calcular_porcent(pouco, idg));
    printf("Utilizaram o restaurante de 10 a 15 vezes: %.2f%\n",calcular_porcent(razoavel, idg));
    printf("Utilizaram o restaurante menos de 10 vezes: %.2f%\n",calcular_porcent(muito, idg));
}
