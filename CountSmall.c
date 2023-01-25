/*
Write a Program which accepts file name from user and Count Number of Small characters from that file.

Input:Demo.txt
Output: Number of Small character are 21

*/


#include<stdio.h>
#include<fcntl.h>
#include<io.h>
#include<string.h>

int CountSmall(char Fname[],int fd,char *Data)
{
    int iLength=0;
    int iCnt=0;
    int i=0;

    while((iLength=read(fd,Data,sizeof(Data)))!=0)
    {
        for(i=0;i<iLength;i++)
        {
            if((Fname[i]>='a')&&(Fname[i]<='z'))
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

    iRet=CountSmall(Fname,fd,Data);
    printf("Count of Small Character:%d\n",iRet);

    return 0;
}

