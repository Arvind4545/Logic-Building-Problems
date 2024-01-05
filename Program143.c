
//Accept string from user and Count Frequency of Letter  

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

    printf("Enter String\n") ; //Error due to Input Buffer
    scanf("%[^'\n']s",Arr) ;//Cause is the \n

    printf("Enter the character\n") ;
    scanf("%c",&cValue) ;

    iRet = CountFrequency(Arr,cValue);

    printf("Occurrences of given Character is : %d\n",iRet ) ;

    return 0;

}

