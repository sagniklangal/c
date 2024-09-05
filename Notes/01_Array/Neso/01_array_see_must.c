#include<stdio.h>
int main(){
    int a[] = {1,2,3,4,5,6,7}; // In a[7] there is '\o'-> Null pointer
    for(int i = 0; i<a[6]; i++) //When i=5, i++ is happening and i becomes 6
    { //After that a[6] is printed, now loop will not execute as i!<6
        printf("%d\n",a[i]);
    }
    return 0;
}