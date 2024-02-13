
// To Check Whether the Tenth Bit of the Number is ON or OFF by using the Technique of Masking 

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT ; 

//  
// 0000 0000 0000 0000 0000 0010 0000 0000 
//   0    0    0    0    0    2    0    0  
// 00000200  
// 0x00000200 : Hexa Decimal Number 

bool  CheckBit(UINT No )
{
    UINT iMask = 0x00000200 ; 
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