#include<stdio.h>

int CountDigits(int iNo)
{
    //int iDigit = 0 ;
    int iCnt = 0 ;

    if(iNo == 0 )   //Filter
    {
        return 1 ;
    } 

    if(iNo < 0 )   //Updator
    {
        iNo = - iNo ;
    }

    while(iNo > 0 )   //Bug if condition is (iNo >= 0 )
    {
        //iDigit = iNo % 10 ;
        iNo = iNo / 10 ;
        iCnt++ ;
    }
    return iCnt ;
}

int main()
{
    int iValue = 0;
    int iRet = 0 ;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue) ;

    printf("Number of Digits are : %d\n",iRet);
    
    return 0 ;
}