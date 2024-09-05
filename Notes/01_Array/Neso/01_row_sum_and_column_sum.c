#include<stdio.h>
int row_sum(int (*a)[5]){ // Or a[5][5]
    int sum = 0;
    int row_num=1;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            sum+=a[i][j];
        }
        printf("The row sum of the %d row is %d\n",row_num,sum);
        row_num+=1;
        sum=0;
    }
}

int column_sum(int (*a)[5]){ // Or a[5][5]
    int sum = 0;
    int col_num=1;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            sum+=a[j][i];
        }
        printf("The column sum of the %d column is %d\n",col_num,sum);
        col_num+=1;
        sum=0;
    }
}
int main(){
    int a[5][5]={
        {8,3,9,0,10},{3,5,17,1,1},{2,8,6,23,1},{15,7,3,2,9},{6,14,2,6,0}
    };
    row_sum(a);
    column_sum(a);
    return 0;
}