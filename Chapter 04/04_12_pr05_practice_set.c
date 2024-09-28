#include<stdio.h>

int main(){
    int i=1, sum=0, n=10;
    // do{
    //     sum=sum+i;
    //     i++;
    // }
    // while(i<=n);
    // printf("The sum is %d\n", sum);
    // for(i=1; i<=n; i++){
    //     sum +=i;
    // }
    while(i<=n)//Or i<=10
    {
        sum=sum+i;//Or sum +=i;
        i++; 
    }
    printf("The value of sum(1 to 10) is %d", sum);
    return 0;
}