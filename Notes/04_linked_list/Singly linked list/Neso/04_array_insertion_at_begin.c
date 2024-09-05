#include<stdio.h>
int add_begin(int *a,int n,int data){
    for (int i = n-1; i >= 0; i--)
    {
        a[i+1]=a[i];
    }
    a[0]=data;
    return n+1;
}
int main(){
    int a[20];
    int data =10;
    int i, n;
    printf("Enter the no of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Now adding in the begining\n");
    n=add_begin(a,n,data);
    
    //Printing elements after adding
    for ( int j = 0; j < n; j++)
    {
        printf("%d\n",a[j]);
    }
    return 0;
}