#include<stdio.h>
int main(){
    int i, n=8, mul, sum;
    for(i=1; i<=10; i++){
        mul=i*n;
        sum +=mul;
    }
    printf("The sum is %d", sum);

    
    return 0;
}