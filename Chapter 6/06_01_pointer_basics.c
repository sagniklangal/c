#include<stdio.h>
//* = Value at
// & = Address of
int main(){
    int i = 34;
    int *j = &i;//Or int *j; j=&a; // j will now store the address of i
    printf("The value of i is %d\n", i);//Value at i =34
    printf("The value of i is %d\n", *j);//*j = *(Address of i) = Value at address of i = 34
    printf("The value of i is %d\n", j);//Value at j = Address of i
    printf("The address of i is %u\n", &i);//&i = Address of i(%u is used)
    printf("The address of i is %u\n", *j);//*j= Value at address of i = 34
    printf("The address of j is %u\n", &j);//&j= Address of j
    printf("The value of j is %u\n", *(&j)); //Value at address of j = value of address of i
    return 0;
}