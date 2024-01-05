
// Accept a Character and Check whetehr it is Digit or Not using ASCII Value 

#include<stdio.h>
#include<stdbool.h>

bool IsCapitalX(char ch )
{
    if((ch >= 48)&&(ch <= 57))
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