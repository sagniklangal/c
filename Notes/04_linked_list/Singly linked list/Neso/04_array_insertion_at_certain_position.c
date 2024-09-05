#include<stdio.h>
#include<stdlib.h>
void add_at_pos(int *a,int *b,int size,int data,int pos){
    int i;
    int index = pos-1;
    for(i = 0; i<=index-1; i++){
        b[i]=a[i];
    }
    
    b[index]=data;
    
    int j;
    for(i = index+1, j = index; i<size+1,j<size; i++,j++){
        b[i]=a[j];
    }
}

int main(){
    int a[10]={2,34,21,6,7,8,90,67,23,39};
    int b[11];
    int n=10;
    int data=72,pos;
    
    add_at_pos(a,b,n,data,7);
    printf("Printing after adding\n");
    for(int j = 0; j<(n+1); j++){
        printf("%d\n",b[j]);
    }
    return 0;
}

//Chatgpt
// #include <stdio.h>
// #include <stdlib.h>

// int*add_at_pos(const int *a, int size, int data, int pos, int *newSize) {
//     int index = pos - 1;
//     int *b = (int*)malloc((size + 1) * sizeof(int));
    
//     int i, j;
//     for (i = 0; i <= index; i++) {
//         b[i] = a[i];
//     }
//     b[index] = data;
//     for (i = index + 1, j = index; i < size + 1; i++, j++) {
//         b[i] = a[j];
//     }
    
//     *newSize = size + 1; // Update the size of the new array
//     return b;
// }

// int main() {
//     int *a, *b;
//     int n;
//     int data = 72, pos;
//     int newSize;

//     printf("Enter size of the array: ");
//     scanf("%d", &n);

//     a = (int*)malloc(n * sizeof(int));
//     b = NULL; // Initialize b to NULL

//     printf("Enter the elements of the array:\n");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &a[i]); // Use & to get the address of each element
//     }

//     pos = 3;
//     b = add_at_pos(a, n, data, pos, &newSize);
    
//     printf("Printing after adding:\n");
//     for (int j = 0; j < newSize; j++) {
//         printf("%d\n", b[j]);
//     }

//     free(a);
//     free(b);

//     return 0;
// }
