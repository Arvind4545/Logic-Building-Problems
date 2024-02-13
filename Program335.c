
// To Check Whether the Twelth Bit of the Number is ON or OFF by using the Technique of Masking 

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT ; 

//  12 th bit 
// 0000 0000 0000 0000 0000 0000 1110 0000 
//   0    0    0    0    0    0    B    0  
// 00000B00  
// 0x000000B0 : Hexa Decimal Number 

bool  CheckBit(UINT No )
{
    UINT iMask = 0x00000800 ; 
    UINT Result = 0 ; 

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
    UINT Value = 0 ; 
    bool bRet = false ; 

    printf("Enter Number : \n") ; 
    scanf("%d",&Value) ; 

    bRet = CheckBit(Value) ; 

    if(bRet == true )
    {
        printf("Tenth Bit is On\n") ; 
    }
    else 
    {
        printf("Tenth Bit is Off\n") ; 
    }

}