
#include<stdio.h>

int SmallestDigit(int iNo)
{
    int iMin = 9 ;
    int iDigit = 0 ;

    if(iNo < 0 )  //Updator 
    {
        iNo = -iNo ;
    }

    while(iNo != 0 )
    {
        iDigit = iNo % 10 ;

        if(iDigit < iMin )
        {
            iMin = iDigit ;
        }
        if(iMin == 0 )  //Optimization
        [
            break ;
        ]
        iNo = iNo / 10 ;
    }
    return iMin ;
}

int main()
{
    int iValue = 0 ;
    int iRet = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    iRet = SmallestDigit(iValue) ;

    printf("Smallest Digit is : %d\n",iRet) ;
    
    return 0 ;
}
