#include<stdio.h>
int main(){
    int age;
    printf("Enter the age\n");
    scanf("%d", &age);
    if(age>=18){
        printf("You can drive");
    }
    else{
        printf("You can not drive");
    }
}