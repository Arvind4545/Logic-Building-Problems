
// To Check Whether the Fourth Bit of the Number is ON or OFF by using the Technique of Masking 

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT ; 

bool  CheckBit(UINT No )
{
    UINT iMask = 8 ; 
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
        printf("Fourth Bit is On\n") ; 
    }
    else 
    {
        printf("4 th Bit is Off\n") ; 
    }

}