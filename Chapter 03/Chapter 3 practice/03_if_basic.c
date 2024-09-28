// C program to know if a number is even or odd
#include<stdio.h>
int main(){
    int a;
    printf("Enter the number \n");
    scanf("%d", &a);
    if(a%2==0){
        printf("a is even");
    }
    else{
        printf("a is odd");
    }
    
    return 0;
}