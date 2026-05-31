#include <stdio.h>
#include <locale.h>


int main()
{
    float n=50, d=1, soma=0;
for(int i = 50;i>0;i--){

    printf("%.0f / %.0f = %.3f\n",n,d,n/d);
    n--;
    d++;
    soma += n/d;
}
printf("\nO resultado da soma é: %.2f",soma);
return 0;
}







