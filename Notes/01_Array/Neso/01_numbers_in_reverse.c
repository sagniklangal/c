#include<stdio.h>
int main(){
    int a[]={34,56,54,32,67,89,90,32,21};
    
    //Normal order
    printf("In normal order\n");
    for(int i=0;i<=8;i++){
        printf("%d\n",a[i]);
    } 
    //Reverse order
    printf("In reverse order\n");
    for(int j=8;j>=0;j--){
        printf("%d\n",a[j]);
    }
    return 0;
}