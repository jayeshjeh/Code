#include<stdio.h>
#include<stdlib.h>


int main()
{
    // int Arr[5];         //Static memort allocation
    int *ptr = NULL;
    int size = 0;

    printf("Enter number of elements that you want to allocate: ");
    scanf("%d", &size);

    ptr = (int *)malloc(size * sizeof(int));        // 1 :  Allocate the memory

    if (ptr == NULL) {
        printf("Unable to allocate memory\n");
    }
    else {
        printf("Memory successfully allocated\n");
    }

    //2 Use the memory 

    free(ptr);          //3 Free the memory

    return 0;
}
