#include <stdio.h>

int main()
{
    int num;
    printf("Insira um número inteiro qualquer: ");
    scanf("%d", &num);
    printf("Os 5 primeiros sucessores são:\n");
        for(int i =1;i<=5;i++){
            num++;
            printf("%d, ",num);
        }
  
    return 0;
}
