
// Input : 4 

//Output : 
/*
 4 
 3 
 2 
 1 
 */

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0 ;

    if(iNo < 0 )
    {
        iNo = -iNo ;
    }

    for(int iCnt = iNo ; iCnt > 0 ; iCnt-- )
    {
        printf("%d\n",iCnt) ;
    }
}

int main()
{
    int iValue = 0 ;

    printf("Enter Number\n") ;
    scanf("%d",&iValue) ;

    printf("Pattern Would be \n") ;
    Display(iValue) ;
    
    return 0 ; 
}