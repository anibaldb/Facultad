
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void cargaMatrizManual(int fil, int col, int matrix[fil][col]);
void cargaMatrizAuto(int fil, int col, int matrix[fil][col]);
void mostrarMatriz(int fil, int col, int matrix[fil][col]);
int cargaMatrizAutoMasSuma(int fil, int col, int matrix[fil][col]);
float promMatriz(int fil, int col, int matrix[fil][col]);
int buscarElmenMatriz(int fil, int col, int matrix[fil][col], int dato);

#define DIM 3

int main()

{

    srand(time(NULL));

    int matriz[DIM][DIM];

    system("cls");

    //cargaMatrizManual(DIM, DIM, matriz); // ej 1


    
    // mostrarMatriz(DIM, DIM, matriz); // ej 2



    // cargaMatrizAuto(DIM, DIM, matriz); // ej 3



    // ej 4

    // int suma = cargaMatrizAutoMasSuma(DIM, DIM, matriz);
    // printf("La suma de sus numeros es %d", suma);

    // ej 5

    // float prom = promMatriz(DIM, DIM, matriz);
    // printf("\nEl promedio de sus numeros es %.2f", prom);


    //ej 6

    // int dato;

    // cargaMatrizManual(DIM, DIM, matriz);

    // mostrarMatriz(DIM, DIM, matriz);

    // printf("\nIngrese el dato a buscar: ");
    // scanf("%d",&dato);

    // //buscarElmenMatriz(DIM, DIM, matriz, dato);

    // if (buscarElmenMatriz(DIM, DIM, matriz, dato) == 0){

    //     printf("\nEl dato Noo se encuentra en la Matriz\n");

    // }else{

    //     printf("\nEUREKA, lo encontraste!\n");

    // }


    



    return 0;
}

void cargaMatrizManual(int fil, int col, int matrix[fil][col]){

    for (fil = 0; fil < DIM; fil++)
    {

        for (col = 0; col < DIM; col++)
        {

            printf("\nIngresa un numero en la matriz [%d][%d]: ", fil, col);
            scanf("%d", &matrix[fil][col]);
        }
    }
}
void mostrarMatriz(int fil, int col, int matrix[fil][col]){

    printf("\n");

    for (fil = 0; fil < DIM; fil++)
    {

        for (col = 0; col < DIM; col++)
        {
            printf("%d\t", matrix[fil][col]);
        }

        printf("\n\n");
    }
}
void cargaMatrizAuto(int fil, int col, int matrix[fil][col]){

    for (fil = 0; fil < DIM; fil++)
    {

        for (col = 0; col < DIM; col++)
        {

            matrix[fil][col] = rand() % 10 + 1;
        }
    }
}
int cargaMatrizAutoMasSuma(int fil, int col, int matrix[fil][col]){

    int suma = 0;

    for (fil = 0; fil < DIM; fil++)
    {

        for (col = 0; col < DIM; col++)
        {

            matrix[fil][col] = rand() % 10 + 1;
            suma = suma + matrix[fil][col];
        }
    }

    return suma;
}
float promMatriz(int fil, int col, int matrix[fil][col]){

    float resultado = 0;

    float suma = 0;

    suma = cargaMatrizAutoMasSuma(fil, col, matrix);

    mostrarMatriz(DIM, DIM, matrix);

    float cantidad = fil * col;

    resultado = (float) suma / (float) cantidad;

    return (float) resultado;
}
int buscarElmenMatriz(int fil, int col, int matrix[fil][col], int dato){

    int flag = 0;

    for (fil = 0; fil < DIM; fil++)
    {
        for (col = 0; col < DIM; col++)
        {
            if (matrix[fil][col] == dato){

                flag = 1;

            }
        }
    }

    return flag;
}


