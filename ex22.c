#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main()
{
    setlocale(LC_ALL, " ");
    int n;
    char r = 's';
    do{
    printf("\nDigite o um número: ");
    scanf("%d",&n);
        for(int i=1;i<=10;i++){
            printf("%d x %d = %d\n",n,i,n*i);
        
        }
    printf("Deseja continuar? [s/n]: ");
    scanf("%c",&r);
    }while(r != 'n');
    
    

}
