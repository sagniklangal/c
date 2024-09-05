#include<stdio.h>
int main(){
    //int a[10]={0,0,2,0,0,0,5,0,0,8};
    int a[10]={a[2]=2,a[9]=8,a[6]=5,}; //Rest will be placed 0 automatically
    //Order is not important here
    
    int b[]={a[8]=7,a[1]=3,a[4]=9}; //As [] is empty, so [8] will be max index
    
    int c[]={1,2,c[2]=3,4,c[4]=5}; //Valid

    //Here there is 8 at 3rd position and also d[2]=3
    int d[] = {1,2,8,d[2]=3,4,d[4]=5}; //Here designator d[2] will win
    return 0;
}