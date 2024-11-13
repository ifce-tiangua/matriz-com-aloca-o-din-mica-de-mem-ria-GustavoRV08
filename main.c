#include <stdio.h>
#include <stdlib.h>

int main(){
    int linhas, colunas;
    int** matriz;
    scanf("%d %d", &linhas, &colunas);
    matriz = (int**) malloc (linhas*sizeof(int));
    if(linhas==0 || colunas==0){
        printf("[matriz vazia]");
        return 0;
    }
    for(int i=0; i<linhas; i++){
        matriz[i]=(int*) malloc(colunas*sizeof(int));
    }
    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    for(int i=linhas; i>0; i--){
        free(matriz[i]);
    }
    free(matriz);
    return 0;
}