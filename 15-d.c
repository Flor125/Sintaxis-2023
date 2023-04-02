#include <stdio.h>

#define Ciudades 5

int rutaentreciudades[Ciudades][Ciudades] = {0};

void CargarRuta() {
    int ciudad1, ciudad2, distancia;
    printf("Ingrese las ciudades relacionadas (entre 0 y 4) y la distancia en Km:\n");
    printf("Primera Ciudad: \n"); scanf("%d", &ciudad1);
    printf("Segunda Ciudad: \n"); scanf("%d", &ciudad2);
    printf("Distancia: \n"); scanf("%d", &distancia);
    
    rutaentreciudades[ciudad1][ciudad2] = distancia;
    rutaentreciudades[ciudad2][ciudad1] = distancia;
}

void ModificarRuta() {
    int ciudad1, ciudad2, distancia;
    printf("Ingrese las ciudades relacionadas (entre 0 y 4) y la nueva distancia en Km:\n");
    printf("Primera Ciudad: \n"); scanf("%d", &ciudad1);
    printf("Segunda Ciudad: \n"); scanf("%d", &ciudad2);
    printf("Distancia: \n"); scanf("%d", &distancia);
    
    rutaentreciudades[ciudad1][ciudad2] = distancia;
    rutaentreciudades[ciudad2][ciudad1] = distancia;
}

void MostrarRelaciones() {
    printf("Informacion cargada:\n");
    for (int i = 0; i < Ciudades; i++) {
        for (int j = i+1; j < Ciudades; j++) {
            if (rutaentreciudades[i][j] != 0) {
                printf("Ciudad %d y Ciudad %d estan a %d km\n", i, j, rutaentreciudades[i][j]);
            }
        }
    }
}

void MostrarCant_ConRutas() {
    int ciudades_con_rutas = 0;
    for (int i = 0; i < Ciudades; i++) {
        for (int j = i+1; j < Ciudades; j++) {
            if (rutaentreciudades[i][j] != 0) {
                ciudades_con_rutas++;
            }
        }
    }
    printf("Cantidad de ciudades relacionadas por una ruta: %d\n", ciudades_con_rutas);
}

void MostrarCant_SinRutas() {
    int ciudades_sin_rutas = 0;
    for (int i = 0; i < Ciudades; i++) {
        int tiene_ruta = 0;
        for (int j = 0; j < Ciudades; j++) {
            if (rutaentreciudades[i][j] != 0) {
                tiene_ruta = 1;
                break;
            }
        }
        if (!tiene_ruta) {
            ciudades_sin_rutas++;
        }
    }
    printf("Cantidad de ciudades sin rutas que las relacione: %d\n", ciudades_sin_rutas);
}

void RetornarDistancia() {
    int ciudad1, ciudad2;
    printf("Ingrese las ciudades relacionadas (entre 0 y 4):\n");
    scanf("%d %d", &ciudad1, &ciudad2);
    if (rutaentreciudades[ciudad1][ciudad2] == 0) {
        printf("No hay ruta entre estas ciudades.\n");
    } else {
        printf("La distancia entre Ciudad %d y Ciudad %d es %d km.\n", ciudad1, ciudad2, rutaentreciudades[ciudad1][ciudad2]);
    }
}

int main() {
    int opcion;
    do {
        printf("Ingrese una opcion:\n");
        printf("1. Cargar ruta\n");
        printf("2. Modificar ruta\n");
        printf("3. Mostrar informacion cargada\n");
        printf("4. Mostrar cantidad de ciudades relacionadas por una ruta\n");
        printf("5. Mostrar cantidad de ciudades sin rutas que las relacione\n");
        printf("6. Retornar distancia entre ciudades\n");
        printf("7. Salir\n");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                CargarRuta();
                break;
            case 2:
                ModificarRuta();
                break;
            case 3:
                MostrarRelaciones();
                break;
            case 4:
                MostrarCant_ConRutas();
                break;
            case 5:
                MostrarCant_SinRutas();
                break;
            case 6:
                RetornarDistancia();
                break;
            case 7:
                printf("Se saldra del programa.\n");
                break;
            default:
                printf("Opcion invalida - intente nuevamente.\n");
        }
    } while (opcion != 7);
    return 0;
}