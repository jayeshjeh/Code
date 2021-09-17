
#include<stdio.h>     // for printf & scanf
#include<stdbool.h>  // for bool datatype 

int main()
{
    int iNo = 0;
    bool bRet = false;
    
    printf("Enter number\n");
    scanf("%d",&iNo);
    
    bRet = checkeven(iNo);
    if(bRet == true)
    {
    	printf("%d is even number\n",iNo);
    }
    else
    {
    	printf("%d is not even number\n",iNo);
    }
       
    return 0;
}
bool checkeven(int iValue)
{
	if((iValue % 2) == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
    



///////inside helper function dont interact with the end user 
///////i.e insider helper function printf and scanf 



// Kay wachayecha

// unsigned
// long
// typedef
// data types
// while
