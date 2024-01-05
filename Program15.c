///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
// Problem Statement : To Display Factors of Given Number//
///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iValue)
{
    printf("Factors of Given Number are : \t") ; 
    for(int iCnt = 1; iCnt <= iValue ; iCnt++ )
    {
        if(iValue % iCnt == 0 )
        {
            printf("%d\t",iCnt) ; 
        }
    }
}
int main()
{
    int iRet = 0 ; 

    printf("Enter Number : \t") ; 
    scanf("%d",&iRet) ;

    Display(iRet) ;  

    return 0 ; 
}