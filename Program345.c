
// Accept Number from user and Toggle the bits from the Given Range of Bits 

//  0000 0000 0000 0000 0000 0000 0000 0000 

// Start = 7 
// End = 17 
//                           17           7
// Input : 0010 1010 1010 1110 1101 1010 0110 1101  // Start = 7 and End = 17 

// Output : 0010 1010 1010 1111 0010 0101 1010 1101

// Mask :  0000 0000 0000 0001 1111 1111 1100 0000

// Mask1 : 1111 1111 1111 1111 1111 1111 1111 1111 
// Mask2 : 1111 1111 1111 1111 1111 1111 1111 1111 

// Mask1 = Mask1 << (Start  -1 )

// Mask1 : 1111 1111 1111 1111 1111 1111 1100 0000 

// Mask2 = Mask2 >> (32 - End )
// Mask2 = Mask 2 >> (15 )

// Mask2 : 0000 0000 0000 0001 1111 1111 1111 1111 

// Mask = Mask1 & Mask2 ; 

// Input : 0010 1010 1010 1110 1101 1010 0110 1101 
// Mask :  0000 0000 0000 0001 1111 1111 1100 0000
// -------------------------------------------------
//Result : 0000 0000 0000 0001 1111 1111 1100 0000 

// Result = No ^ Mask ; 

// Input : 0010 1010 1010 1110 1101 1010 0110 1101 
// Mask :  0000 0000 0000 0001 1111 1111 1100 0000
// -----------------------------------------------------
// Result: 
#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT ; 

bool ToggleBits(UINT No , UINT Start , UINT End )
{
    UINT iMask = 0X00000001 ; 
    if(Start > End )
    {
        printf("Invalid Range\n") ; 
    }

    iMask1 = iMask << (iEnd - 1 ) ; 

    iMask2 = iMask << (iStart -1 )
}