
// Accept Number and 2 Position from user and check whether that positions has corresponding bits ON or OFF 
// Shift Operators 

#include<stdio.h>
#include<stdbool.h>

// 1111 0000 1111 0000 
// F 0 F 0 
typedef unsigned int UINT ; 

bool CheckBit(UINT No , UINT Pos1 , UINT Pos2)
{
    UINT iMask1 = 0X00000001 ; 
    UINT iMask2 = 0X00000001 ; 

    UINT iMask = 0 ; 

    UINT Result = 0 ; 

    if((Pos1 < 1) || (Pos1 > 32 ) ||(Pos2 < 1 ) || (Pos2 > 32 ))
    {
        printf("Invalid Position , It Should be in Between 1 to 32") ; 
        return false ; 
    }

    iMask1 = iMask1 << (Pos1 -1 ) ; // Dynamic Mask Formation 
    iMask2 = iMask2 << (Pos2 -1 ) ; // Dynamic Mask Formation 

    iMask = iMask1 | iMask2 ; 

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
    UINT Value = 0 ,Position1 = 0 , Position2 = 0 ; 
    bool bRet = false ; 

    printf("Enter Number : \n") ; 
    scanf("%d",&Value) ; 

    printf("Enter the Position1 of bit\n") ;
    scanf("%d",&Position1)  ; 

    printf("Enter the Position2 of bit\n") ;
    scanf("%d",&Position2)  ; 

    bRet = CheckBit(Value,Position1 ,Position2 ) ; 

    if(bRet == true )
    {
        printf("Bit at Position %d & %d is 0N\n",Position1, Position2) ; 
    }
    else 
    {
        printf("Bit at the Position %d & %d is OFF\n",Position1,Position2) ; 
    }

    return 0 ; 
}