#include <stdio.h>
#include <stdlib.h>

int main (){
int matriz[50][50], n,i,j;
int aux= 1;
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
        printf("%d ",matriz[i][j]);
        if(i!=j){
            if(matriz[i][j]== matriz[j][i]){
                aux= 0;
        }

            }
        }
      printf("\n");
    }

if (aux==1){
    printf("La matriz no es simetrica\n");
}
else{
    printf("la matriz es simetrica\n");
}


 return 0;
}
