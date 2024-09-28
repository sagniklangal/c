#include<stdio.h>
int main(){
    int i,n;
    printf("Enter the number\n");
    scanf("%d", &n);
    for(i=1; i>=1; i++){
        printf("%d\n", i*n);
        if(i==100){
            break;
        }
    }
    
    
//     do{
//     printf("%d", i*n);        
//     i++;
//    }
//     while(i<=10);

    return 0;
}