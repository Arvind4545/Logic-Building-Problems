#include<stdio.h>
// Input : 4 
// Output : 4 + 3 +  2 + 1  = 10 

int AdditionI(int No)
{
    int iSum = 0 ; 
    int iCnt = 0 ; 

    while(iCnt <= No)
    {
        iSum = iSum + iCnt ; 
        iCnt++ ; 
    }
    return iSum ; 
}

int main()
{
    int Value = 0 ; 
    int iRet = 0 ;

    printf("Enter the Number : \n") ; 
    scanf("%d",&Value) ; 

    iRet = AdditionI(Value) ; 
    printf("Addition is : %d\n",iRet) ; 
    return 0 ; 
}