#include <stdio.h>
#include <stdlib.h>

#define MAX 20
int main()
{
    int n= 0, soma = 0, termo = 0;
    do{
    printf("\nDigite um número: ");
    scanf("%d",&n);
    for(int i = 1;; i+=2){
        if(soma == n){
            break;
        }
        soma += i;
        termo++;
        printf("%d + ",i);
    }
    printf("= %d\n",n);
    printf("A raiz quadrada desse número é: %d.",termo);
        
    }while(n > 0 || n < 0);
return 0;
}







