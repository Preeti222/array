#include<stdio.h>
int main(){
    int row,col;
    printf("enter the value of row");
    scanf("%d",&row);
    printf("enter the value of col");
    scanf("%d",&col);
    int mat[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&mat[row][col]);
        }
    }
    for(int i=0;i<row;i++){
        row=0;
        col=0;
        for(int j=0;j<col;j++){
            row+=mat[i][j];
            col+=mat[j][i];
        }
        printf("%d ",row);
        printf("%d ",col);
    }
    return 0;

}