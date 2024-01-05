
#include<stdio.h>
#include<stdbool.h>

bool IsCapitalX(char ch )
{
    if((ch >= 'A')&&(ch <= 'Z'))
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
        printf("%c is a Capital case Letter\n",cValue) ; 
    }
    else 
    {
        printf("%c is not a Capital letter\n",cValue) ;
    }
    return 0 ;
}