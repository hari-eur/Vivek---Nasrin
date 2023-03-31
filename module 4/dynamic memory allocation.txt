#include<stdio.h>
#include<stdlib.h>
int main(){
    printf("\n dynamic memory allocation");
    int size,sum =0;
    printf("\nenter array size :  ");
    scanf("%d",&size);
    int *arr;
    arr=(int*)malloc(size*sizeof(int));
    printf("\nenter the elements of array of integers :");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        sum =sum+arr[i];
    }
    printf("\nsum of the array elements: %d\n ",sum);
    free(arr);
    return 0;
}
