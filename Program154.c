
// C Program to Count Spaces in user Entered String 

#include<stdio.h>

int CountSpace(char *str)
{
    int iCount = 0 ; 

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++ ;
        }
        str++ ;
    }

    return iCount ; 
}

int main()
{
    char Arr[30] ;
    int iRet = 0 ;

    printf("Enter the String\n") ;
    scanf("%[^'\n']s",Arr) ;

    iRet = CountSpace(Arr) ;
    
    printf("Number of Whitespaces are :%d\n",iRet) ;

    return 0 ;
}