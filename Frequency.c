/*
Write a Program which accepts file name from user and Count Number of occurences of that Character from that file.  .

Input:Demo.txt   'M'
Output: Frequency of M is 7

*/

#include<stdio.h>
#include<fcntl.h>
#include<io.h>
#include<string.h>

int Frequency(char Fname[],int fd,char *Data,char ch)
{
    int iLength=0;
    int iCnt=0;
    int i=0;

    while((iLength=read(fd,Data,sizeof(Data)))!=0)
    {
        for(i=0;i<iLength;i++)
        {
            if(Data[i]==ch)
            {
                iCnt++;
            }
        }
    }
    if(iCnt==0)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////
int main()
{

    char Fname[40];  //String
    int iRet=0;
    int fd=0;
    char Data[100];
    char ch='M';

    printf("Enter the File name:\n");
    scanf("%s",Fname);

    fd=open(Fname,O_RDWR);

    iRet=Frequency(Fname,fd,Data,ch);
    
    if(iRet==-1)
    {
        printf("Character %c is not Present:\n",ch);
    }
    else
    {
        printf("Count of Frequancy of that character Character:%d\n",iRet);
    }

    return 0;
}

