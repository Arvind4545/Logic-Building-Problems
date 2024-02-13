#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h> // Univsersal standard 
#include<string.h>

int main()
{
    char Fname[20];
    int fd = 0 , Length = 0;
    char Data[100];
    int iSize = 0 ; 

    printf("Enter the file name that you want to open : \n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDONLY) ; 

    if(fd == -1 )
    {
        printf("Unaable to Open the File\n") ; 
        return -1 ; 
    }

    while((Length = read(fd , Data , sizeof(Data))) != 0 ) // read chi return value Number of Bytes asti 
    {
        iSize = iSize  + Length ; 
    }

    printf("Size of File is %d Bytes.\n",iSize) ; 

    close(fd ) ; 

    return 0 ; 
}

// Program which accepts the Name of the File from user and Returns the Size of that File 
