#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, " ");
    int n;
    
    printf("Digite um número entre 0 e 9: ");
    scanf("%d",&n);
    for(int i =1; i<=10; i++){
        printf("%d x %d = %d\n",n,i,n*i);
    }
    return 0;
}
