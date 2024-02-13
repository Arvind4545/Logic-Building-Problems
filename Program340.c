// Accept a Number 
// To Toggle the 6th , 7th , 8th bit as OFF 
// return toggled Number 

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT ; 

// 0000 0000 0000 0000 0000 0000 0111 0000 (iMask)
//  0     0    0    0   0     0    7    0
// 0x00000070

UINT OffBit(UINT No )
{
    UINT iMask = 0x00000070 ; 

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