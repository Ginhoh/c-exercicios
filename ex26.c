#include <stdio.h>
#include <stdlib.h>

#define MAX 20
int main()
{
    int n;
    printf("Digite um número: ");
    scanf("%d",&n);
    for(int i = 1; i<=n; i++){
        for(int c = 1; c<=i; c++){
        printf("%d ", i);
    }
        printf("\n");
    
    }
return 0;
}







