/*
Write a Program which accepts file name from user and Count Number of White Spaces from that file.

Input:Demo.txt
Output: Number of White Spaces

*/

#include<stdio.h>
#include<fcntl.h>
#include<io.h>
#include<string.h>

int CountWhite(char Fname[],int fd,char *Data)
{
    int iLength=0;
    int iCnt=0;
    int i=0;

    while((iLength=read(fd,Data,sizeof(Data)))!=0)
    {
        for(i=0;i<iLength;i++)
        {
            if(Data[i]==' ')
            {
                iCnt++;
            }
        }
        
    }
    return iCnt;
}

/////////////////////////////////////////////////////////////////////////////////////////////
int main()
{

    char Fname[40];  //String
    int iRet=0;
    int fd=0;
    char Data[100];

    printf("Enter the File name:\n");
    scanf("%s",Fname);

    fd=open(Fname,O_RDWR);

    iRet=CountWhite(Fname,fd,Data);
    printf("Count of White Spaces:%d\n",iRet);

    return 0;
}

