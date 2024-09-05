#include<stdio.h>

int main(){
    int i=0;//Or i=1
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);

    do{
        printf("The number is %d \n", i+1);//Or i
        i++;
    }while(i<n);//i<=n
    return 0;
}