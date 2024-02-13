
// To Check Whether the Seventh, Eight th and Nine th Bit of the Number is ON or OFF by using the Technique of Masking 

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT ; 

//  7 8 and 9 th Bit 
// 0000 0000 0000 0000 0000 0001 1100 0000 
//   0    0    0    0    0    1    C    0  
// 000001C0 
// 0x000001C0 : Hexa Decimal Number 

bool  CheckBit(UINT No )
{
    UINT iMask = 0x000001C0 ; 
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