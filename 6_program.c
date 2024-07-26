//knapsack problem using dyanmic programming

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int max(int a,int b){
    return (a>b)?a:b;

}

int knapsack(int wt[],int val[],int W,int n){
    int v[n+1][W+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=W;j++){
            if(i==0||j==0){
                v[i][j]=0;
            }else if(wt[i-1]<=j){
                
                v[i][j] = max(val[i-1]+v[i-1][j-wt[i-1]],v[i-1][j]);

            }else{
                v[i][j] = v[i-1][j];
            }
            }
            
}
return v[n][W];
}

int main(){
    int wt[] = {2,1,3,2};
    int val[] = {12,10,20,15};
    int n = 4;
    int m = 5;
    printf("The maximum profit is: %d\n",knapsack(wt,val,m,n));
    return 0;
}