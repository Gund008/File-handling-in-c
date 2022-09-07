#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

//4-:read
//2:-write
//1:-Execute

int main()
{
    char Filename[20];
    int fd=0;  //file descriptor


    printf("Enter file name to create:\n");
    scanf("%s",Filename);

    fd=open(Filename,O_RDONLY); //function

    if(fd==-1)
    {
        printf("unable to open file\n");
        return -1;
    }
    printf("file opened successfully with fd:%d\n",fd);
    return 0;
}