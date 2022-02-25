#include<stdio.h>

int main()
{
    int i, n =5, z= 45, sum =0;

    for(i =n; i<z; i++)
    {
        sum+= i;

        i = i*i;

    }
    printf("%d", sum);

    return 0;

}