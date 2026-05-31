#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

void main(){
    setlocale(LC_ALL, " ");
    
    float h, r, soma=0, nh;
    int ns;
    
    printf("Digite a altura de lançamento (em metros): ");
    scanf("%f",&h);
    
    do{
    printf("Digite o coeficiente de lançameto: ");
    scanf("%f",&r);
    if(r < 0 || r > 1){
      printf("ATENÇÃO!\nO COEFICIENTE DE LANÇAMENTO DEVE SER MAIOR QUE 0 E MENOR QUE 1!\n\n "); 
    }
    }while(r < 0 || r > 1);
    printf("Dejesa obter informações em até qual salto? ");
    scanf("%d",&ns);
    for (int i =0; i<ns; i++){
        h = h*r;
        soma+=h;
        printf("h%d %.2f\n",i+1,h);
    }
    printf("\n\nDistância percorrida: %.2fm", soma);
    printf("\n\nAltura do nº salto: %.2fm", h);
    
}