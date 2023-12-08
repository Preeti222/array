#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    int a[n];
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    int search;
    printf("enter the value which you want to search");
    scanf("%d",&search);
    int flag=0,pos=0, k=0;
    for(int i=1;i<=n;i++){
        if(a[i]==search){
            flag=1;
            pos++;
            k=i;
        }
    }
    if(flag==1){
        printf("element found: %d%d",pos,k);
    }else{
        printf("not");
    }
    return 0;
}