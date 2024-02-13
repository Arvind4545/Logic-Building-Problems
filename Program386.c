
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h> 
#include<string.h>

int main()
{
    char Fname[20] ; 
    int fd = 0 , Length = 0 ; 
    char Data[100] ; 

    printf("enter the File name that you want to open : ") ; 
    scanf("%s",Fname) ; 

    fd = open(Fname , O_RDWR) ;

    if(fd == -1 )
    {
        return -1 ;  // to the OS 
    }

    printf("Enter the Data that You Want to Write into the File : \n") ; 
    scanf(" %[^'\n']s",Data) ; 

    Length = strlen(Data) ; 

    write(fd, Data , Length) ; // write (kashat , kay , kiti) ; 

    return 0 ; 
}
