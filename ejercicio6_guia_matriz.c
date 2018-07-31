#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numero_azar(){
	int na;
	na = (rand() %39)+1;
	return na;
}
void imprimir (int A, int B, int m[A][B]){

    for(int i=0;i<A;i++){
        for(int j=0;j<B;j++){
            printf("%dC  ", m[i][j]);
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
void pro_tem_dia (int A, int B, int m[A][B]){
float suma=0;
    for  (int i=0;i<A;i++){
        for (int j=0;j<B;j++){
            suma+= m[i][j];
        }
        printf ("El promedio de temperaturas del dia %d es:%.2f C\n",i+1,suma/24 );
        suma=0;
        }
}
void pro_tem_sem (int A, int B, int m[A][B]){
    for(int i=0;i<A;i++){
        for(int j=0;j<A;j++){

        }
    }
}

int main(){
int A=7;
int B=24;
int m[A][B];
srand(time(NULL));


rellenar(A,B, m);
printf("la temperatura por dia en intervalos de una hora: \n");
printf("\n");
imprimir (A,B,m);
printf("\n");
pro_tem_dia (A,B,m);
printf("\n");
//pro_tem_sem (A,B,m);

return 0;
}
