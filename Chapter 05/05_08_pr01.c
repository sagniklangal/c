#include<stdio.h>
float average(int a, int b, int c);

int main(){
    int a, b, c;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    printf("Enter the value of b\n");
    scanf("%d", &b);
    printf("Enter the value of c\n");
    scanf("%d", &c);
    printf("The value of average is %f", average(a, b, c));
    return 0;
}

float average(int a, int b, int c){
    float result;
    
    //Without typecasting into float (Use a=5, b=2, c=1 to check)
    // result = (a + b + c)/3;
    
    //After typecasting into float
    result = (float)(a + b + c)/3;
    
    return result;
}