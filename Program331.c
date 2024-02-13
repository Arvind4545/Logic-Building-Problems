
// To Check Whether the Fourth Bit of the Number is ON or OFF 

#include<stdio.h>

typedef unsigned int UINT ; 

int CountOnBits(UINT No)
{
    int Digit = 0 ; 
    int iCount = 0 ; 

    while(No != 0 )
    {
        Digit = No % 2 ; 
        iCount = iCount + Digit ; 
        No = No / 2; 
    }
    return iCount ; 
}

int main()
{
    int iRet = 0 , 
    UINT Value = 0 ;  

    printf("Enter Number : \n") ; 
    scanf("%d",&Value) ; 

    iRet = CountOnBits(Value) ; 

    printf("Number of Bits which are ON : %d \n",iRet) ; 
    
    return 0 ; 
}