// accept Name of the files from user and copy data of One file into another
// Input : Destination & source 
// Open both of them 
// then copy 

#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fdSrc = 0; 
    int fdDest = 0; 
    char fSrc[40];
    char fDest[40];
    int iLength = 0; 
    char fData[100];

    printf("Enter the Source file : \n");
    scanf("%s",fSrc);

    printf("Enter the Destination file : \n");
    scanf("%s",fDest);

    fdSrc = open(fSrc,O_RDONLY);

    fdDest = open(fDest,O_RDWR);

    while((iLength = read(fdSrc,fData,sizeof(fData)))!=0)
    {
        write(fdDest,fData,iLength);
    }

    close(fdDest);
    close(fdSrc);
    
    return 0;
}

// Accept file Names from user and Copy One data from One file to another 
