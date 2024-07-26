// floyds and warshell'

#include<stdio.h>
#include<stdlib.h>

#define INF 999999
#define V 4

void printsolution(int admatrix[][V]);

void floydwarshall(int admatrix[][V]){
    
    for(int k =0;k<V;k++){
        for(int i =0;i<V;i++){
            for(int j =0;j<V;j++){
                if(admatrix[i][k]+admatrix[k][j]<admatrix[i][j]){
                    admatrix[i][j]=admatrix[i][k]+admatrix[k][j];
                }
            }
        }
    }
    printsolution(admatrix);
}

void printsolution(int admatrix[][V]){
    printf("The following matrix shows the shortest path between every node");

    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            if(admatrix[i][j]==INF)
            printf("%s","INF");

    else{
        printf("%d",admatrix[i][j]);
    }
    
}
printf("\n");
}
}

int main(){
    int admatrix[V][V] = {
        {0, INF, 3,INF},
        {2,0,INF,6},
        {INF,7,0,1},
        {6,INF,INF,6}
    };
    floydwarshall(admatrix);
    return 0;
} 