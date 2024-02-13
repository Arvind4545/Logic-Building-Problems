
// To Toggle the Fourth Bit as off 

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT ; 

// 0000 0000 0000 0000 0000 0000 0000 1000 
//  0     0    0    0   0     0    0    8
// 0x00000008

UINT OffBit(UINT No )
{
    UINT iMask = 0x00000008 ; 

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