#include <stdio.h>
#include <stdlib.h>

void imprimir (int A, int B, int m[A][B]){

    for(int i=0;i<A;i++){
        for(int j=0;j<B;j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}
void rellenar(int A, int B, int m[A][B]){
    for (int i=0;i<A;i++){
        for (int j=0; j<B;j++){
        printf("ingresar numero para la posicion %d  %d \n", i, j);
        scanf("%d", &m[i][j]);
    }
    printf("\n");
}
}
void imprimir1 (int A, int B, int m[A][B]){

    for(int i=0;i<A;i++){
        for(int j=0;j<B;j++){
            printf("%d", m[A-1-i][j]);
        }
        printf("\n");
    }
}

int main(){
int A, B;

    printf("valor de la fila de matriz \n");
    scanf("%d", & A);
    printf("valor de las columnas de la matriz \n");
    scanf("%d", & B);
    printf("\n");

int m[A][B];

rellenar(A,B, m);
printf("\n");
imprimir (A,B,m);
printf("\n");
imprimir1 (A,B,m);
return 0;
}

