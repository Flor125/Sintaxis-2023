#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grado = 2, alumnos = 5;
    int matriz[2][5];
    int i, j, mayor = 0;
    float suma = 0, promedio[4];

    //1. ingreso de las notas de cada alumno, del grado correspondiente
    printf("Ingreso de notas de cada alumno, del grado correspondiente.\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 5; j++){
            printf("Digite el alumno numero : [%d] del grado : [%d] : ", j+1, i+1);
            scanf("%d", &matriz[i][j]);
            suma = suma + matriz[i][j];
            if(mayor < matriz[i][j]){
                mayor = matriz[i][j];
            }
        }
        promedio[i] = suma / 15;
        suma = 0;
        printf("\n\n");
    }

    printf("Alumnos que han aprobado o desaprobado \n\n");
    for(i = 0; i < grado; i++){
        for(j = 0; j < alumnos; j++){
            if(matriz[i][j] > 7){
                printf("alumno : %d grado : %d aprobado : %d\n", j+1, i+1, matriz[i][j]);
            } else {
                printf("alumno : %d grado : %d reprobado : %d\n", j+1, i+1, matriz[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n\n");
    for(i = 0; i < grado; i++){
        printf("el promedio del grado %d es : %.1f\n", i+1, promedio[i]);
    }

    printf("la nota mayor es : %d\n", mayor);

    return 0;
}