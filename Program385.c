#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h> 

int main()
{
    char Fname[20] ; 
    int fd = 0; 
    char Data[] = "Marvellous" ; 

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
        write(fd,Data,10) ; 
    }

    return 0 ; 
}