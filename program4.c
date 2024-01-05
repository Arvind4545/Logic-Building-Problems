#include<stdio.h>

int AdditionOfNumbers(int iNo1 , int iNo2) //Fuctional Approach 
{
    int iAns = 0 ;

    iAns = iNo1 + iNo2 ;

    return iAns ;
}

int main() //Entry Point Function 
{
    int iValue1 = 0;
    int iValue2 = 0 ;
    int iRet = 0 ;

    printf("Enter first Number : \n");
    scanf("%d",&iValue1 );

    printf("Enter Second Number : \n");
    scanf("%d",&iValue2 );

    iRet = AdditionOfNumbers(iValue1,iValue2 );

    printf("Addition is : %d \n",iRet );

    return 0 ;
    
}