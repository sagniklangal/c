#include<stdio.h>
#define n 20
int main(){
    int arows,brows,acolumnn,bcolumn;
    int a[n][n],b[n][n],result[n][n];
    int i,j,k;
    
    //Storing elemnts inside 1st matrix
    printf("Enter the column and row of the 1st matrix\n");
    scanf("%d %d",&arows,&acolumnn);
    printf("Enter the elements of 1st matrix\n");
    for(i=0;i<arows;i++){
        for(j=0;j<acolumnn;j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    //Storing elemnts inside 2nd matrix
    printf("Enter the column and row of the 2nd matrix\n");
    scanf("%d %d",&brows,&bcolumn);
    if(acolumnn!=brows){
        printf("Matrix multiplication is impossible\n");
        }
    else
    {
        printf("Enter the elements of 2nd matrix\n");
        for(i=0;i<brows;i++){
            for(j=0;j<bcolumn;j++){
                scanf("%d",&b[i][j]);
            }
    }
    }
    
    
    
    int sum = 0;
    
    // Storing the elements of resultant matrix
    
    for(int i=0;i<arows;i++){
        for(int j=0;j<bcolumn;j++){
            for(int k=0;k<brows;k++){
            sum+=a[i][k]*b[k][j];
        }
        result[i][j]=sum;
        sum=0;
        }
    }
    

    //Printing the elements of resultant matrix
    printf("The elemnts of the resultant matrix is\n");
    for(i=0;i<arows;i++){
        for(j=0;j<bcolumn;j++){
            printf("%d\n",result[i][j]);
        }
    }

    return 0;
}