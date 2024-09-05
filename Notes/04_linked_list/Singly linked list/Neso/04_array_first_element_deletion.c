#include<stdio.h>
#include<stdlib.h>
int main(){
    int *a;
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);
    
    a = (int*)malloc(n*sizeof(int));
    int i = 0;
    printf("Enter array elements\n");
    while(i!=n){
        scanf("%d",a+i);
        i+=1;
    }
    int size = n-1;
    i=0;
    printf("After deleting the first element\n");
    while(i!=size){
        a[i]=a[i+1]; //Moving the next element into current index
        printf("%d ",*(a+i));
        i+=1;
    }
    free(a);
    return 0;
}