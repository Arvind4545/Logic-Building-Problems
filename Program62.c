//Accept Number from User and check whether it is Palindrome or not 

#include<stdio.h>
#include<stdbool.h>

bool CheckPalindrome(int iNo)
{
    int iDigit = 0 ;
    int iReverse = 0 ;
    int iTemp = iNo ;

    for( ; iNo != 0 ; )
    {
        iDigit = iNo % 10 ;
        iReverse = iReverse * 10 + iDigit ;
        iNo = iNo / 10 ;
    }

    if(iTemp == iReverse )
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