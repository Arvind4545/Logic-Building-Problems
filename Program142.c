
//Accept string from user and Count Captial Letters in the String  

#include<stdio.h>

int CountFrequency(char *str,char ch )
{
    int iCnt = 0 ;

    while(*str != '\0')
    {
        if(*str == ch )
        {
            iCnt++ ;
        }
        str++ ;
    }
    
    return iCnt ; 
}

int main()
{
    char Arr[20] ;
    int iRet = 0 ;
    char cValue = '\0' ;


    printf("Enter String\n") ;
    scanf("%[^'\n']s",Arr) ;


    iRet = CountFrequency(Arr,'a');

    printf("Occurrences of given Character is : %d\n",iRet ) ;

    return 0;

}

