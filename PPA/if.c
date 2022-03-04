#include<stdio.h>

int main()
{
    auto int marks = 0;

    printf("Enter of marks\n");
    scanf("%d", &marks);

    printf("Your entered marks are: %d\n", marks);

    if(marks >= 60){
        printf("First Class\n");
    }
    else {
        printf("Not a first class\n");
    }

    return 0;
}
