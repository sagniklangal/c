#include<stdio.h>
#include<math.h>
int main(){
    float a=8; //Here a is stored as 8.0 as float is used
    printf("The value of 5/2 is:%d\n", 5/2);//%d is used
    printf("The value of 5/2 is:%f\n", 5/2);//%f is used
    printf("The value of 5/2 is:%f\n", 5.0/2);
    printf("The value of 17/3.0 is:%f\n", 17/3.0);
    printf("The value of 5/2 is:%d\n", -5/2);
    printf("The value of 5/2 is:%d\n", 5/-2);
    printf("The value of 8/2 is:%d\n", a/2);
    printf("The value of 8/2 is:%f\n", a/2); 
    return 0;
}