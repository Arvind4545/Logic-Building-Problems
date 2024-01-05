#include<stdio.h>

int Summation()
{
    int iCount = 0 ;
    int iSum = 0 ;

    for( iCount = 1 ; iCount<6 ; iCount++ )
    {
        iSum = iSum + iCount ;
    }
    return iSum ;
}

int main()
{
    int iResult = 0;

    iResult = Summation();

    printf("Sum is : %d ", iResult);

    return 0 ;S
}