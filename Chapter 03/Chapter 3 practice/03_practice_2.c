#include<stdio.h>
int main(){
    int math, physics, chem;
    float total;
    printf("Enter your marks in maths\n");
    scanf("%d", math);

    printf("Enter your marks in physics\n");
    scanf("%d", physics);

    printf("Enter your marks in chemistry\n");
    scanf("%d", chem);

    total = (math + physics + chem)/3;

    if((total<40) || math<33 || physics<33 || chem<33){
        printf("You have failed and your total percentage is %d", total);
    return 0;
    }
    else{
        printf("You have passed and your total percentage is %d", total);
    }
    return 0;
}