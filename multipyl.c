#include<stdio.h>
#define MAX 50
int main(){
    int arr[MAX][MAX], arr2[MAX][MAX],product[MAX][MAX];
    int arow,acol,brow,bcol;
    int i,j,k;
    int sum=0;
    
    printf("enter the value of row and col");
    scanf("%d%d",&arow,&acol);
    for(i=0;i<arow;i++){
        for(j=0;j<acol;j++){
            scanf("%d",&arr[arow][acol]);
        }
    }
    printf("enter the value of b row and b col");
    scanf("%d%d",&brow,&bcol);
    for(i=0;i<brow;i++){
        for(j=0;j<bcol;j++){
            scanf("%d",&arr2[brow][bcol]);
        }
    }
    if (acol!=brow){
        printf("multiplication of two matrix is not possible");
    }
    else{
        for(i=0;i<arow;i++){
            for(j=0;j<bcol;j++){
                for(k=0;k<arow;k++){
                    sum+=arr[i][k]*arr2[k][j];
                }
                product[i][j]=sum;
                sum=0;
            }
        }
    }
    printf("resultant matrix /n");
    for( i=0;i<arow;i++){
        for(j=0;j<bcol;j++){
            printf("%d ",product[i][j]);
        }
        printf("/n");
    }
    return 0;
}