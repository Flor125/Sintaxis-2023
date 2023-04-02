#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void triangulo();


int main()
{
    triangulo();
    return 0;
}

void triangulo(){
    char letra;
    int filas;
    printf("Ingrese una letra :\n");
    scanf("%c",&letra);
    printf("ingrese un numero del 1-9:\n");
    scanf("%d",&filas);
    for(int num=1;num<=filas;num++){
        for(int n=filas;n>=num;n--){
        printf("%c",letra);
        }

    printf("\n");
    }
}