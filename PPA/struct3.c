#include<stdio.h>

struct Demo
{
    double d;
    float f;
};

int main()
{
    printf("%d\n", sizeof(struct(Demo)));

    return 0;
    
}