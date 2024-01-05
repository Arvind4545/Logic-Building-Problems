//Accept Number from User and Return the Largest Digit

#include<stdio.h>

int LargestDigit(int iNo)
{
    int iMax = 0 ;
    int iDigit = 0 ;

    if(iNo < 0 )  //Updator 
    {
        iNo = -iNo ;
    }

    while(iNo != 0 )
    {
        iDigit = iNo % 10 ;

        if(iDigit > iMax )
        {
            iMax = iDigit ;
        }
        
        iNo = iNo / 10 ;
    }
    return iMax ;
}

int main()
{
    int iValue = 0 ;
    int iRet = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    iRet = LargestDigit(iValue) ;

    printf("Largest Digit is : %d\n",iRet) ;
    
    return 0 ;
}