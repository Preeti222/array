// Write a Program to find the position of an element in a 2d array or Matrix
#include<stdio.h>
int main(){
    int row,col;
    printf("enter the value of row");
    scanf("%d",&row);
    printf("enter the value of col");
    scanf("%d",&col);
    int mat[row][col];
    for (int i=0; i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&mat[row][col]);
        }
    }
    int find;
    printf("enter the value what you want to find from the matrix");
    scanf("%d",&find);
    int k=0;
    for (int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(mat[i][j]==find){
                k=1;
                row=i+1;
                col=j+1;
            }
        }
    }
    if(k==1){
        printf("Position of Search Element %d is (%d, %d)",find,row,col);
    }else{
        printf("element not found");
    }
    return 0;
}