#include<stdio.h>

int main()
{
    char cvalue = 'M';
    char *cptr  = &cvalue;


    int ivalue = 21;
    int*iptr = &ivalue;

    float fvalue = 10.11;
    float *fptr = &fvalue;

    double dvalue = 20.11;
    double *dptr = &dvalue;

    printf("%c\n", *cptr);
    printf("%d\n", &cvalue);
    printf("%d\n", cptr);
    printf("%d\n", sizeof(cvalue));
    printf("%d\n", sizeof(cptr));
    printf("%d\n", sizeof(*cptr));

    return 0;

}
