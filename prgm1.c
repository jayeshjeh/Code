#include<stdio.h>

int Addition (int iNo1, int iNo2)
{
    return iNo1 + iNo2;
}

int main()
{
    int x, y, z;
    
    printf("Enter first number\n");
    scanf("%d",&x);
    printf("Enter second number\n");
    scanf("%d",&y);

    z = Addition(x,y);
    printf("Addition is : %d\n",z);
    return 0;
}