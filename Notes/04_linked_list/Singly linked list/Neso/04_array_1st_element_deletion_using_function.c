// Incomplete
#include<stdio.h>
#include<stdlib.h>
void del_begin(int *a,int no_of_elements){
    int index = no_of_elements-1;
    int i = 0;
    printf("After deleting the first element\n");
    while(i!=index){
        a[i]=a[i+1]; //Moving the next element into current index
        printf("%d ",*(a+i));
        i+=1;
    }
}
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
    
    del_begin(a,n);
    free(a);
    return 0;
}