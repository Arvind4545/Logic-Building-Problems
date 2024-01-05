#include<stdio.h>


void DisplayEvenOddDigit(int iNo )
{
    int iEvenCnt = 0 ;
    int iDigit = 0 ;
    int iOddCnt = 0 ;

    if(iNo == 0 )  //Filter 
    {
       printf("Number of Even Digits are : 1\n");
       printf("Number of Odd Digits : 0\n");
       return ; 
    }

    while(iNo != 0 )
    {
        iDigit = iNo % 10 ;
        if((iDigit % 2) == 0 )
        {
            iEvenCnt++ ;
        }
        else 
        {
            iOddCnt++ ;
        }
        iNo = iNo / 10 ;

    }
    printf("Number of Even Digits are : %d\n",iEvenCnt);
    printf("Number of Odd Digits : %d\n",iOddCnt);
}

int main()
{
    int iValue = 0 ;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    DisplayEvenOddDigit(iValue);


    return 0 ;
}