#include<stdio.h>
void FactRev(int iNo)
{
    int i=0;
    for (i = iNo/2; i <= iNo && i>0; --i) 
    {
        if (iNo % i == 0) 
        {
            printf("%d ", i);
        }
   
    }
}
int main()
{
int iValue = 0;

printf("Enter number\n");
scanf("%d", &iValue);

FactRev(iValue);

return 0;
}