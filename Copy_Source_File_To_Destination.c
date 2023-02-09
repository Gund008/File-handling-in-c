#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>


int main(int argc,char *argv[])
{
  
    int fdSource=0,fdDest=0,Length=0;
    char Data[100];
    int iCnt=0;

    fdSource=open(argv[1],O_RDONLY);

    if(fdSource==-1)
    {
        printf("Unable to open:\n");
        return -1;
    }
  
    fdDest=creat(argv[2],0777);

    if(fdDest==-1)
    {
        printf("Unable to create new file:");
        return -1;
    }

    while((Length=read(fdSource,Data,sizeof(Data)))!=0)
    {
        write(fdDest,Data,Length);
    }

    close(fdSource);
    close(fdDest);

    printf("Data Succesfully copied:\n");


    return 0;

}