
#include<stdio.h>

//Accept String from user and Display that String 

int main()
{
    char Arr[30] ;

    printf("Please Enter Your Full Name\n") ;
    //scanf("%s",Arr) ;
    scanf("%[^'\n']s",Arr) ;

    printf("Your Name is : %s\n",Arr) ;

    return 0 ;
}

//%s accepts the string upto the first whiteSpace 