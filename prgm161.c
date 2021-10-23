#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>


int main()
{
    int fd =0, iRet=0;
    char Fname[30];
    char Data[] = "Marvellous Infosystems";

    printf("Enter file name\n");
    scanf("%s",Fname);

    fd= open(Fname,O_RDWR);
    if(fd == -1)
    {
        printf("unable to open file\n");
        return -1;
    }
    else
    {
        printf("File successfully created with Fd : %d\n",fd);
    }

    iRet = write(fd,Data,10);
    printf("%d bytes gets successfully written in the file\n",iRet);

    return 0;
}