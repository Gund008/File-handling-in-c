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
    int Data[100];
    int iret=0;


    printf("Enter file name to create:\n");
    scanf("%s",Filename);

    fd=open(Filename,O_RDONLY | O_APPEND); //function

    if(fd==-1)
    {
        printf("unable to open file\n");
        return -1;
    }
  iret=read(fd,Data,10);
  printf("Data  from file is:\n");

  write(1,Data,iret);

return 0;
}
