#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, " ");
    int linhas, colunas;
    do{
        printf("Digite o número de linhas [entre 1 e 20]: ");
        scanf("%d",&linhas);
        if(linhas >20 || linhas <0){
            printf("DIGITE UM NÚMERO VÁLIDO ENTRE 1 E 20!\n\n");
        }
    }while((linhas >20 || linhas <0));
    
    do{
        printf("Digite o número de colunas [entre 1 e 20]: ");
        scanf("%d",&colunas);
        if(colunas >20 || colunas <0){
            printf("DIGITE UM NÚMERO VÁLIDO ENTRE 1 E 20!\n\n");
        }
    }while((colunas >20 || colunas <0));
    
    for(int i = 0; i< linhas; i++){
        for(int c = 0; c<colunas;c++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}