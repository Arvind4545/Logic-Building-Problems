// To Check whether the Number is Divisible by 3 and 5 

#include<stdio.h>
#include<stdbool.h>

bool DivisibleByThreeAndFive(int iNum)
{
    int iAns1 = 0,iAns2 = 0 ;

    iAns1 = iNum % 3 ;
    iAns1 = iNum % 5 ;

    if((iAns1 == 0 ) && (iAns2 == 0))
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
    int iValue = 0 ;
    bool bResult = false ;

    printf("Enter the Number \n");
    scanf("%d",&iValue);

    bResult = DivisibleByThreeAndFive(iValue);

    if(bResult == true )
    {
        printf("%d is divisible by 3 and 5 \n",iValue);
    }
    else
    {
        printf("%d is not Divisible by 3 or 5\n",iValue);
    }

    return 0 ;


}