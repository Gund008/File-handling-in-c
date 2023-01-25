/*
Write a Program which accepts file name from user and Count Number of occurences of that number of characters from starting position.
Input:Demo.txt    12
Output: Display first 12 character from Demo.txt

*/

#include<stdio.h>
#include<fcntl.h>
#include<io.h>
#include<string.h>

void Display(char Fname[],int fd,char Data[])
{
    int iLength=0;
    
    iLength=read(fd,Data,12);
    write(1,Data,iLength);
}

/////////////////////////////////////////////////////////////////////////////////////////////
int main()
{

    char Fname[40];  //String
    int fd=0;
    char Data[100];

    printf("Enter the File name:\n");
    scanf("%s",Fname);

    fd=open(Fname,O_RDWR);

    Display(Fname,fd,Data);

    return 0;
}

