#include<stdio.h>
int main(){
    int n;
    int a[10]={0};
    printf("Enter the number\n");
    scanf("%d",&n);
    while(n>0){
        int rem = n%10;
        if(a[rem]==1){
            break;
        }
        a[rem]=1;
        n = n/10;
        
    }
    if(n==0){
        printf("Repeated digits were not found");
    }
    else{
        printf("Repeated digits were found");
    }
    return 0;
}