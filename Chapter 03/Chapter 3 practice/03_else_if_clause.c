#include<stdio.h>
int main(){
    int a;
    printf("Enter the value\n");
    scanf("%d", &a);
    if(a==1){
        printf("The value of a is 1\n");
    }
    else if(a==2){
        printf("The value of a is 2\n");
    }
    else if(a==3){
        printf("The value of a is 3");
    }
    else{
        printf("The value of a is not 1, 2 or 3");
    }
    return 0;
}