#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
    int fd =0;
    char Fname[30];

    printf("Enter file name\n");
    scanf("%s",Fname);

    fd = creat(Fname,0777);

    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File created successfully\n");
    }
    return 0;
}