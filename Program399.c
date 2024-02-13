#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h> // Univsersal standard 
#include<string.h>

int main(int argc , char *argv[])
{
    int fdSource = 0 , fdDest = 0 , Length = 0 ;
    char Data[100];

    fdSource = open(argv[1],O_RDONLY) ; 

    if(fdSource == -1 )
    {
        printf("Unaable to Open the File\n") ; 
        return -1 ; 
    }

    fdDest = creat(argv[2],0777); 

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

    printf("Data Successfully copied....\n") ; 

    return 0 ; 
}

// Myexe Marvellous.txt InfoSystems.txt 
