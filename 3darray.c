#include<stdio.h>
int main(){
    int l[2][2][3]={
                   {{1,2,3},{4,5,6}},
                   {{9,0,2},{7,8,9}}
                   };
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            for(int k=0; k<3; k++){
                printf("%d \n",l[i][j][k]);
            }
        }
    }
}