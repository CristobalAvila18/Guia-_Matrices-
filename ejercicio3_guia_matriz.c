#include <stdio.h>
#include <stdlib.h>

int main (){
int matriz[50][50],aux, n,i,j,stotal=0, sfilas=0;
    printf("escriba un numero, el cual sera el tamaño de su matriz \n");
    scanf("%d", &n);
printf ("\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        printf("ingrese el valor para la posicion: [%d][%d] \n",i,j);
        scanf ("%d",& matriz[i][j]);
        }
    }
    printf("\n");

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
       printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf ("\n");
    for (i=0;i<n;i++){
        sfilas= matriz[i][0];
        for (j=1;j<n;j++){
            sfilas= sfilas + matriz[i][j];
            }
    stotal= sfilas + stotal;
printf("la suma de la fila: %d es de %d\n",i+1, sfilas  );
    }


 printf("la suma total de la matriz es de : %d \n", stotal);
return 0;

}
