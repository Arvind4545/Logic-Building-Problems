#include<stdio.h>
#include<stdbool.h> //Declaration of false and true keywords is stored 

bool DivisibleByFive(int iNo)
{
    int iAns =0 ;
    iAns = iNo % 5 ;

    if(iAns == 0)
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
    bool bRet = false ;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    bRet = DivisibleByFive(iValue);

    if(bRet == false )
    {
        printf("%d is not divisible by 5\n",iValue);  //Position Argument 
    }
    else 
    {
        printf("%d is divisible by 5\n",iValue);
    }
    return 0 ;
}