#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h> // File Control 

int main()
{
    char Fname[20] ; 
    int fd = 0; 

    printf("enter the File name that you want to  Create : ") ; 
    scanf("%s",Fname) ; 

    fd = creat(Fname , 0777 ) ;

    if(fd == -1 )
    {
        printf("Unable to Create File\n") ; 
    }  
    else 
    {
        printf("File is Successfully created with FD %d\n",fd) ; 
    }

    return 0 ; 
}