#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, " ");
    int n1,n2;
    printf("Digite o 1º número: ");
    scanf("%d",&n1);
    printf("Digite o 2º número: ");
    scanf("%d",&n2);
    
    printf("%d + ",n1);
    for(int i =1; i<=n2-2; i++){
        printf("%d + ",n1);
    }
    printf("%d = %d",n1,n1*n2);
    
    printf(" ou %d + ",n2);
    for(int i =1; i<=n1-2; i++){
        printf("%d + ",n2);
    }
    printf("%d = %d",n2,n1*n2);
    
    
    return 0;
}
