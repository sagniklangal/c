#include<stdio.h>
int main(){
    int grade;
    printf("Enter the grade\n");
    // Integer type only
    scanf("%d", &grade);
    switch(grade){
        case 1:
        printf("The grade is a\n");
        break;
        case 2:
        printf("The grade is b\n");
        break;
        case 3:
        printf("The grade is c\n");
        break;
        default :
        printf("Invalid input\n");
        break;
    }
    return 0;
}