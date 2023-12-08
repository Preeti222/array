#include<stdio.h>
int main(){
    int arr[2][2]={{1,2},{3,4}};
    int sum=0 ,sum2=0;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            sum+=arr[i][j];
            // sum2+=arr[j][i];
        }
        printf("%d \n",sum);
        sum=0;

    } 
    // printf("%d \n",sum);
    // printf("%d \n",sum2);
    return 0;
}