#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numero_azar(){
	int na;
	na = (rand() %30)+1;
	return na;
}
void imprimir (int A, int B, int m[A][B]){

    for(int i=0;i<A;i++){
        for(int j=0;j<B;j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}
void rellenar(int A, int B, int m[A][B]){
    int x;
    for (int i=0;i<A;i++){
        for (int j=0; j<B;j++){
        x= numero_azar();
        m[i][j]=x;
    }
}
}
 void suma (int A, int B, int m[A][B]){
  int suma=0;
    for  (int i=0;i<A;i++){
        for (int j=0;j<B;j++){
            suma+= m[i][j];
        }
        printf ("la fila %d su suma es de :%d\n",i+1,suma);
        suma=0;
        }
    }


int main(){
int A=4;
int B=5;
int m[A][B];
srand(time(NULL));


rellenar(A,B, m);
printf("\n");
imprimir (A,B,m);
suma (A,B,m);

return 0;
}
