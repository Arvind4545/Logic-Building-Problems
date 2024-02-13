
#include<stdio.h>

int CountOnBits(unsigned int No)
{
    int Digit = 0 ; 
    int iCount = 0 ; 

    while(No != 0 )
    {
        Digit = No % 2 ; 
        if(Digit == 1 )
        {
            iCount++ ; 
        }
        No = No / 2; 
    }

    return iCount ; 
}

int main()
{
    int iRet = 0 , Value = 0 ;  

    printf("Enter Number : \n") ; 
    scanf("%d",&Value) ; 

    iRet = CountOnBits(Value) ; 

    printf("Number of Bits which are ON : %d \n",iRet) ; 
    
    return 0 ; 
}