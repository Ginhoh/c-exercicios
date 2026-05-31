#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, " ");
    int numero = (rand() % 10) +1;
    int tentativas = 1, jogada;
    
    do{
        printf("Qual o número você acha que é? ");
        scanf("%d", &jogada);
        if(tentativas>4){
            printf("Tentativas esgotadas, você perdeu!\n");
            break;
        }
        else if(jogada == numero){
            printf("ACERTOU!\nTentativa: %d",tentativas);
            break;
        }
        else{
            printf("Errou!\n -1 tentativa\n\n",tentativas);
            tentativas++;
        }
        
    }while(tentativas<5);
    return 0;
}