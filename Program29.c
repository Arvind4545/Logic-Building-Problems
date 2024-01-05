#include<stdio.h>

int Summation(int iNum)
{
    int iSum = 0;
    int iCnt = 0;

    for (iCnt = 1 ; iCnt<= iNum ; iCnt++ )
    {
        iSum = iSum + iCnt ;
    }
    return iSum ;
}
int main()
{
    int iRet = 0 ;
    int iValue = 0 ;

    printf("Enter the Value : \n");
    scanf("%d",&iValue);

    iRet = Summation(iValue);

    printf("Summation is : %d\n",iRet);

    return 0 ;
} 