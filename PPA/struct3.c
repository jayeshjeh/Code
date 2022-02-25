#include<stdio.h>

struct Demo
{
    int i;
    char c;
    int j;
    float f;
};

int main()
{
    printf("%d\n", sizeof(struct Demo));

    return 0;
}