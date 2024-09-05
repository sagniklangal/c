#include<stdio.h>
#include<stdlib.h>
int main(){
    int *a,n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    
    //Alloacting memory
    //a = (int*)malloc(n*sizeof(int));
    a = (int*)calloc(n,sizeof(int));
    
    //Enter values into dynamic array
    printf("Enter the values\n");
    for (int i = 0; i < n; i++)
    {
    //    scanf("%d",&a[i]);
    //    scanf("%d",a+i); //Alternate syntax
    }

    //Printing the values
    printf("The elements are\n");
    for (int i = 0; i < n; i++)
    {
    //    printf("%d\n",a[i]);
        //   printf("%d\n",*(a+i)); //Alternate syntax
    }
    free(a);
    return 0;
}