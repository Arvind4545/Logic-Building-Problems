
// To Turn the Fourth Bit as off 

//4 

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT ; 

// 1111 1111 1111 1111 1111 1111 1111 0111
//  F     F    f    f   F     F    F    F 
// 0xFFFFFFF7

UINT OffBit(UINT No )
{
    UINT iMask = 0xFFFFFFF7 ; 

    return (iMask & No) ; 
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