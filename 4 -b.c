#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Ingrese numeros enteros:\n");

    do
{
    scanf("%d",&num);
}
	while (num!=0);
    printf("\nFIN");

 return 0;
}