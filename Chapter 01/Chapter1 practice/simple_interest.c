#include<stdio.h>
int main()
{
    float p, t, r;
    printf("Enter the value of principal\n");
    scanf("%f", &p);
    
    printf("The rate of interest\n");
    scanf("%f", &r);
    printf("No of years\n");
    scanf("%f", &t);
    printf("The amount of interest is %f", p*t*r/100);
    return 0;
}