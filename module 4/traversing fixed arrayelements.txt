#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("traverse array using pointer!\n");
    int arr[5] = {1,2,3,4,5};
    int *ptr = arr;
    printf("\n array elements are : ");
    for(int i=0;i<5;i++)
        printf("%d ",*(ptr+i));
    return 0;
}
