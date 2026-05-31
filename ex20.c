#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, " ");
    int nums[9], p=0,imp=0;
    for(int i =0; i<=9; i++){
        printf("Digite o %dº número: ",i+1);
        scanf("%d",&nums[i]);
        
        if(nums[i] % 2 == 0){
            p++;
        }
        else{
            imp++;
        }
    }
    printf("Total de %d números pares e %d números ímpares",p,imp);
    return 0;
}
