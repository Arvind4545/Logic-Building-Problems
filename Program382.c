
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h> // File Control 

int CreateFile(char Name[])
{   
    int fd = 0 ; 

    fd = creat(Name , 0777) ; 

    return fd ; 
}   

int main()
{
    char Fname[20] ; 
    int fd = 0; 

    printf("enter the File name that you want to  Create : ") ; 
    scanf("%s",Fname) ; 

    fd = CreateFile(Fname) ;

    if(fd == -1 )
    {
        printf("Unable to Create File \n") ; 
    }
    else 
    {
        printf("File Successfully Created with FD %d\n",fd) ; 
    }

    return 0 ; 

}