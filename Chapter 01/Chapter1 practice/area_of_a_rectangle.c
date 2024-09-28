#include <stdio.h>
int main()
{
    int length, width;
    printf("Enter the length of the rectangle \n");
    scanf("%d", &length);
    printf("Enter the width of the rectangle \n");
    scanf("%d", &width);
    printf("The area of the rectangle is %d", length*width);
    return 0;
}