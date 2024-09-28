#include<stdio.h>
int main(){
    int age;
    int vippass=0;
    vippass=1;
    printf("Enter the age\n");
    scanf("%d", &age);
    if((age>=18 && age<=75) || !(vippass==1)){
        printf("You can drive");
    }
    else{
        printf("You can not drive");
    }
}