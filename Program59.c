//Accept one Number From User and return the Reverse of given Number and check reversed number is Palindrome or Not 

#include<stdio.h>
#include<stdbool.h>

int ReverseNumber(int iNo)
{
    int iDigit = 0 ;
    int iReverse = 0 ;

    if(iNo < 0 )
    {
        iNo = -iNo ;
    }

    while(iNo != 0 )
    {
        iDigit = iNo % 10 ;
        iReverse = iReverse * 10 + iDigit ;
        iNo = iNo / 10 ;
    }
    return iReverse ;
}

bool CheckPalindrome(int iData)
{
    int iReverse = 0 ;
    iReverse = ReverseNumber(iData) ;
    return (iReverse == iData ) ;
}

int main()
{
    int iValue = 0 ;
    bool bRet = 0 ;

    printf("Enter the Number\n");
    scanf("%d",&iValue) ;

    bRet = CheckPalindrome(iValue) ;

    if(bRet == true )
    {
        printf("%d is a Palindrome\n",iValue);
    }
    else
    {
        printf("%d is not a Palindrome\n",iValue);
    }

    return 0 ;
}

