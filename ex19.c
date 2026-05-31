#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, " ");
    int nums[4], p=0;
    for(int i =0; i<=4; i++){
        printf("Digite o %dº número: ",i+1);
        scanf("%d",&nums[i]);
        
        if(nums[i] >= 0){
            p++;
        }
    }
    printf("Total de %d números positivos",p);
    return 0;
}
