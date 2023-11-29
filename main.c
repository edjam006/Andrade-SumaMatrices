#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    srand (time(NULL));
    int a,b;
    printf("Ingrese el numero de filas de la matriz\n"); //Solicitud de numeros de filas 
    scanf("%d", &a);
    printf("Ingrese el numero de columnas de la matriz\n"); //Solicitud de numeros de columnas
    scanf("%d", &b);
    printf("Matriz 1\n");
    int matriz[a][b];
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            matriz[i][j] = rand() % 101; //Asignacion de numeros dentro de la matriz
            printf("%d\t", matriz[i][j]); 
        }
        printf("\n"); 
    }
    printf("Matriz 2\n");
    int matriz2[a][b];
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            matriz2[i][j] = rand() % 101; 
            printf("%d\t", matriz2[i][j]); //Se asigna e imprime la segunda matriz con los numeros asignados 
        }
        printf("\n"); 
    }
    printf("Suma de las matrices\n");
    int suma[a][b];
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            suma[i][j] = matriz[i][j] + matriz2[i][j];
            printf("%d\t", suma[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}