#include<stdio.h>
int main(){
    int arr[2][2]={{1,2},{3,4}};
    int i,j,row,col;
    for(i=0;i<2;i++){
        row=0;
        col=0;
    
        for(j=0;j<2;j++){
            row+=arr[i][j];
            col+=arr[j][i];
        }
        printf("%d ",row);
        printf("%d ",col);
        
    }
    return 0;

}