//1-a
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Ingrese un numero por teclado:\n");
    scanf("%d",&a);
    if(a>=100){
     a=a*1.5;
     printf("El resultado es %d", a);
    }
    else{
        exit;
    }
    return 0;
}