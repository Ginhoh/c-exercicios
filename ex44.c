#include <stdio.h>
#include <locale.h>


float converter(float c){
    float f;
    f = (c * 9.0/5.0) + 32;
    return f;
   
}
int main()
{

    setlocale(LC_ALL, " ");
    
    for (float i = 0; i<=50; i+=10){

       printf("°C: %.2f | °F %.2f\n\n", i, converter(i));
    }
    
    return 0;
}
    
    
    