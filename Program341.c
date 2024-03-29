
// Accept Number and Position from user and check whether that position has corresponding bit ON or OFF 
// Shift Operators 

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT ; 

bool CheckBit(UINT No , UINT Pos)
{
    UINT iMask = 0X00000001 ; // UINT iMask = 1 ; Since 1 in Octal , Decimal and Hexadecimal is Same 
    UINT Result = 0 ; 

    if((Pos < 1) || (Pos > 32 ))
    {
        printf("Invalid Position , It Should be in Between 1 to 32") ; 
        return false ; 
    }

    iMask = iMask << (Pos -1 ) ; // Dynamic Mask Formation 

    Result = No & iMask ; 

    if(Result == iMask )
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
    UINT Value = 0 ,Position = 0 ; 
    bool bRet = false ; 

    printf("Enter Number : \n") ; 
    scanf("%d",&Value) ; 

    printf("Enter the Position of bit\n") ;
    scanf("%d",&Position)  ; 

    bRet = CheckBit(Value,Position) ; 

    if(bRet == true )
    {
        printf("Bit at Position %d is 0N\n",Position) ; 
    }
    else 
    {
        printf("Bit at the Position %d is OFF\n",Position) ; 
    }

    return 0 ; 
}