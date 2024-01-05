
// C Program to Check whether the Character is Digit or not 

#include<stdio.h>
#include<stdbool.h>

bool IsCapitalX(char ch )
{
    if((ch >= '0')&&(ch <= '9'))
    {
        return true ;
    }
    else 
    {
        return false ;
    }
}

int main()
{
    char cValue = '\0' ;
    bool bRet ; 

    printf("Please eneter any Characters \n") ;
    scanf("%c",&cValue) ;

    bRet = IsCapitalX(cValue) ;

    if(bRet == true )
    {
        printf("%c is a Digit\n",cValue) ; 
    }
    else 
    {
        printf("%c is not a Digit\n",cValue) ;
    }
    return 0 ;
}