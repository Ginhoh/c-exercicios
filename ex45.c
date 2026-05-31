#include <stdio.h>
#include <locale.h>


int main()
{

     int r, primeiro, ultimo, soma =0;
    setlocale(LC_ALL, " ");
    
    printf("Qual é a razão da PA? ");
    scanf("%d",&r);
    
    printf("Qual é o primeiro termo? ");
    scanf("%d",&primeiro);
    
    printf("Qual é o último termo? ");
    scanf("%d",&ultimo);
    int aux = primeiro;
    for (int i = primeiro; i<=ultimo; i+= r){
        printf("%d ",i);
        soma += i;

    }
    printf("\nSoma da PA: %d", soma);
    
    return 0;
}
    
    
    