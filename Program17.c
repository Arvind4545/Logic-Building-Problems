#include<stdio.h>

void ReverseFactors(int iNo)
{
    int iCnt = 0 ;

    printf("Reverse Factors of Given Number are : \n") ;

    for(iCnt = iNo -1 ; iCnt >  1; iCnt-- )
    {
        if(iNo % iCnt == 0 )
        {
            printf("%d\t",iCnt) ;
        }
    }
}
int main()
{
    int iValue = 0 ;

    printf("Enter any Number\n") ;
    scanf("%d",&iValue) ;

    ReverseFactors(iValue) ;

    return 0 ;
}