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

    fd=creat(Filename,0777); //Gives all permission 4+2+1
    if(fd==-1)
    {
        printf("unable to create the  file\n");
        return -1;
    }
    printf("file created successfully with fd:%d\n",fd);

    return 0;
}