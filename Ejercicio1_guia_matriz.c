#include <stdio.h>
#include <stdlib.h>

int main (){

int matriz[100][100], n,i,j;
    printf("escriba un numero, el cual sera el tamaño de su matriz \n");
    scanf("%d", &n);


    for (i=0;i<n;i++){
        for(j=0;j<n;j++){
            matriz[i][j] = 0;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ", matriz[i][j]);
        }
      printf("\n");
    }


return 0;
}
