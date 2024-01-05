
// C Program to find out the Length of the String using for loop 

#include<stdio.h>

int strlenX(char *str)
{
    int iCnt = 0 ;
    int i = 0 ;

    for(i = 0 ; str[i] != '\0' ; i++ )
    {
        iCnt++ ;
    }

    return iCnt ; 
}

int main()
{
    char Arr[20] ;
    int iRet = 0 ;

    printf("Please Enter Your Full Name\n") ;
    scanf("%[^'\n']s",Arr) ;

    iRet = strlenX(Arr) ; //StrlenX(100 ) ;

    printf("Number of Characters are : %d\n",iRet ) ;

    return 0 ;
}

