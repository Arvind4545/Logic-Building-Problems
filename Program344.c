
// To Turn the User Entered Bit as off 

//4 

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT ; 

// 1111 1111 1111 1111 1111 1111 1111 0111
//  F     F    f    f   F     F    F    F 
// 0xFFFFFFFF

UINT OffBit(UINT No , UINT Pos )
{
    UINT iMask = 0X00000001; 
    iMask = iMask << (Pos -1 ) ; 

    UINT Result = 0 ; 

    iMask = ~iMask ; 

    Result = No & iMask ; 

    return Result ; 
}

int main()
{
    UINT Value = 0 , Position = 0 ; 
    UINT iRet = 0  ; 

    printf("Enter Number : \n") ; 
    scanf("%d",&Value) ; 

    printf("Enter Position : \n") ; 
    scanf("%d",&Position) ; 

    iRet = OffBit(Value , Position) ; 

    printf("Updated Number is : %d \n",iRet) ; 

    return 0 ; 
}