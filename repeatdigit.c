#include<stdio.h>
int main(){
    int arr[10]={0};
    int n;
    scanf("%d",&n);
    int rem;
    while(n>0){
        rem=n%10;
        if(arr[rem]==1){
            break;
        }
        arr[rem]=1;
        n=n/10;
    }
    if(n>0){
        printf("yes");
    }
    else{
        printf("No");
    }
    return 0;
}