
//Accept string and Character and check Whether the character is present in the string 

#include<stdio.h>
#include<stdbool.h>

bool Check(char *str,char ch )
{
    int iCnt = 0 ;
    bool bFlag = false ;

    while(*str != '\0')
    {
        if(*str == ch )
        {
            bFlag = true ;
            break ;
        }
        str++ ;
    }

    return bFlag ; 
}

int main()
{
    char Arr[20] ;
    char cValue = '\0' ;
    bool bRet = false ;

    printf("Enter String\n") ; //Error due to Input Buffer
    scanf("%[^'\n']s",Arr) ;//Cause is the \n

    printf("Enter the character\n") ;
    scanf(" %c",&cValue) ;

    bRet = Check(Arr,cValue);

    if(bRet == true )
    {
        printf("Character is present in the string\n") ;
    }
    else 
    {
        printf("Character is not present in the String\n") ;
    }

    return 0;

}

