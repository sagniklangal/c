#include<stdio.h>
int main()
{
    float pi=3.14;
    float r, h;
    printf("Enter the value of radious\n");
    scanf("%f", &r);
    printf("Enter the value of height\n");
    scanf("%f", &h);
    printf("The volume of the cylinder is %f", pi*r*r*h);
    return 0;
}