#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h> // Univsersal standard 
#include<string.h>

int main()
{
    char Fname1[20]; // to be Copied 
    char Fname2[20]; // to be Created 

    int fdSource = 0 , fdDest = 0 , Length = 0 ;
    char Data[100];

    printf("Enter the file name which Contains Data : \n");
    scanf("%s",Fname1);

    fdSource = open(Fname1,O_RDONLY) ; 

    if(fdSource == -1 )
    {
        printf("Unaable to Open the File\n") ; 
        return -1 ; 
    }

    printf("Enter the File Name that You Want to Create : \n") ; 
    scanf("%s",Fname2) ; 

    fdDest = creat(Fname2,0777); 

    if(fdDest == -1 )
    {
        printf("Unaable to Create new File\n") ; 
        return -1 ; 
    }

    while((Length = read(fdSource , Data , sizeof(Data))) != 0 ) // read chi return value Number of Bytes asti 
    {
        write(fdDest , Data , Length) ;  // length implies write Number of bytes that are read 
    }

    close(fdSource ) ; 
    close(fdDest) ; 

    return 0 ; 
}
