#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd =0;
    char Fname[30];

    printf("Enter file name\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR);

    if(fd== -1)
    {
    printf("unable to open file\n");
    }
    else
    {
    printf("File successfully opened with FD: %d\n",fd);
    }

    return 0;
}