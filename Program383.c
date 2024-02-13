#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h> // File Control 

// O_RDONLY : Open for Reading 
// O_WRONLY : Open for Writing 
// O_RDWR : Open for Reading and Writing 
// Fd: File Descriptor 

int main()
{
    char Fname[20] ; 
    int fd = 0; 

    printf("enter the File name that you want to open : ") ; 
    scanf("%s",Fname) ; 

    fd = open(Fname , O_RDWR) ;

    if(fd == -1 )
    {
        printf("Unable to Open File\n") ; 
    }  
    else 
    {
        printf("File is Successfully Open with FD %d\n",fd) ; 
    }

    return 0 ; 
}

// Accept File Name from user and Open that file 

