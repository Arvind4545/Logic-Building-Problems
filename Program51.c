#include<stdio.h>

int SumOfDigit(int iNo )
{
    int iDigit = 0 ;
    int iSum = 0 ;

    while(iNo != 0 )
    {
        iDigit = iNo % 10 ;
        iNo = iNo / 10 ;
        iSum = iSum + iDigit ;
    }

    return iSum ;
}
int main()
{
    int iValue = 0 ;
    int iRet = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    iRet = SumOfDigit(iValue);

    printf("Summation of Digits is : %d\n",iRet);

    return 0 ;
}
