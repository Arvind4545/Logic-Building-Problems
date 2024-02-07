#include<stdio.h>
// Input : 4 
// Output : 4 * 3 * 2 * 1  = 24 

int FactorialR(int No)
{
    static int Factorial = 1 ; 
    static int iCnt = 1 ; 

    if(iCnt <= No)
    {
        Factorial =  Factorial* iCnt ; 
        iCnt++ ; 
        FactorialR(No) ;
    }
    return Factorial; 
}

int main()
{
    int Value = 0 ; 
    int iRet = 0 ;

    printf("Enter the Number : \n") ; 
    scanf("%d",&Value) ; 

    iRet = FactorialR(Value) ; 
    printf("factorial is : %d\n",iRet) ; 
    return 0 ; 
}