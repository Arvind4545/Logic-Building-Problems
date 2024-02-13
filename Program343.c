
// C Program to Toggle alternate Nibbles 

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT ; 

// 0000 1111 0000 1111 0000 1111 0000  1111
//  0     F    0    F   0     F    0    F
// 0x0F0F0F0F

UINT OffBit(UINT No )
{
    UINT iMask = 0x0F0F0F0F ; 

    UINT iAns = 0 ; 

    iAns = No ^ iMask ; 

    return iAns ; 
}

int main()
{
    UINT Value = 0 ; 
    UINT iRet = false ; 

    printf("Enter Number : \n") ; 
    scanf("%d",&Value) ; 

    iRet = OffBit(Value) ; 

    printf("Updated Number is : %d \n",iRet) ; 

    return 0 ; 
}