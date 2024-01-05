#include<stdio.h>

int Factorial(int iNo)
{
    int iCount = 0 ;
    int iMult = 1 ;
    for(iCount = 1 ; iCount <= iNo ; iCount++)
    {
        iMult = iMult * iCount ;
    }
    return iMult ;
}

int main()
{
    int iValue = 0 ;

    printf("Enter the Value \n");
    scanf("%d",&iValue);

    int iFactorial = 0 ;

    iFactorial = Factorial(iValue);

    printf("Factorial of %d : %d\n",iValue ,iFactorial);

    return 0 ;
}