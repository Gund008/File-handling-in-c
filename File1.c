/*
Write a Application which accept  file name from used and open File in read mode.
Input:Demo.txt
Output: File opened Successfuly
*/
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    char Fname[20];
    int fd=0;

    printf("Enter the File Name that you want to create:\n");
    scanf("%s",Fname);

    fd=open(Fname,O_RDONLY);

    if(fd==-1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File is Successully opened with FD %d\n",fd);
    }
    
    return 0;

}