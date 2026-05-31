#include <stdio.h>

int main()
{
    int num;
    printf("Insira um número inteiro qualquer: ");
    scanf("%d", &num);
    if(num%2 ==0){
        printf("Os 10 próximos números pares serão:\n");
        for(int i =1;i<=10;i++){
            num+=2;
            printf("%d, ",num);
        }
    }else{
        printf("Não é um número par");
    }
    
    return 0;
}
