#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    int num[5],pos =0, neg=0, zero= 0;
    for(int i=0;i<=4;i++){
        system("clear");
      printf("Insira um número inteiro qualquer: ");
    scanf("%d", &num[i]);  
    if(num[i]==0){
        zero++;
    }
    else if(num[i]>0){
        pos++;
    }
    else{
        neg++;
    }
    }
   printf("Os números lidos foram: %d, %d, %d, %d, %d.\n",num[0],num[1],num[2],num[3],num[4]);
   printf("Total de números positivos: %d\n",pos);
   printf("Total de números negativos: %d\n",neg);
   printf("Total de número zero: %d\n",zero);
    
    return 0;
}
