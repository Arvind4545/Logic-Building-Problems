#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
    char Fname[20];
    int fd = 0 , Length = 0;
    char Data[100];

    printf("Enter the file name that you want to open : \n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR | O_APPEND);
    if(fd == -1)
    {
        return -1;
    }

    printf("Enter the data that you want to write in the file : \n");
    scanf(" %[^'\n']s",Data);

    Length = strlen(Data);

    // write(kashat,Kay,Kiti);
    write(fd,Data,Length);

    return 0;
}
// O_APPEND is a constant in Header file fcntl.h.It Indicates that whatever data you want to store inside the file is Written at the end of existing data rather than overwriting it.