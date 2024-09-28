#include<stdio.h>
int main(){
    int grade;
    printf("Enter the grade\n");
    // Integer type only
    scanf("%d", &grade);
    switch(grade/10){
        case 10:
        printf("The grade is a\n");
        break;
        case 9:
        printf("The grade is a\n");
        break;
        case 8:
        printf("The grade is b\n");
        break;
        case 7:
        printf("The grade is c\n");
        break;
        case 6:
        printf("The grade is d\n");
        break;
        case 5:
        printf("The grade is e\n");
        break;
        default :
        printf("Invalid input\n");
        break;
    }
    return 0;
}