#include <stdio.h>
#include <stdlib.h>
void rellenar(int filas, int columnas, int matriz[filas][columnas]){
for(int i=0;i<filas;i++){
    for(int j=0;j<columnas;j++){
        printf("ingrese el valor que tendra la casilla en la posicion %d %d \n", i,j);
        scanf("%d", &matriz[i][j]);
    }
    printf("\n");
        }
    }

void darvuelta(int filas, int columnas, int matriz[filas][columnas]){
printf("matriz traspuesta: \n");
    for(int i=0;i<columnas;i++){
    for(int j=0;j<filas;j++){
        printf("%d ",matriz[j][i]);
    }
    printf("\n");
        }
    }


void imprimir(int filas, int columnas, int matriz[filas][columnas]){
printf("matriz 1: \n");
    for(int i=0;i<filas;i++){
    for(int j=0;j<columnas;j++){
        printf("%d ",matriz[i][j]);
    }
    printf("\n");
        }
    }


int main(){
int filas, columnas;

 printf("Ingrese el numero de filas que tendra su matriz \n");
 scanf("%d",& filas);


 printf("ingrese el numero de columnas que tendra su matriz \n");
 scanf("%d",& columnas);


int matriz[filas][columnas];

rellenar (filas, columnas, matriz);
imprimir (filas, columnas, matriz);
darvuelta (filas, columnas, matriz);
return 0;
}
