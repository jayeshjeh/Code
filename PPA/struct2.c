#include<stdio.h>

struct Demo
{
    int i;
    int j;
    struct Demo *ptr;
};


int main()
{
    struct Demo dobj1;
    struct Demo dobj2;
    struct Demo dobj3;

    dobj1.i = 11;
    dobj1.ptr = &dobj2;

    dobj2.i = 21;
    dobj.ptr = &dobj3;

    dobj3.i = 51;
    dobj.ptr = NULL;

    return 0;
}
