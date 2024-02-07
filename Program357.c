#include<stdio.h>
// Input : 4 
// Output : 1 2 

int SumFactorsR(int No)
{
    static int iCnt = 1 ; 
    static int iSum = 0 ; 

    if(iCnt <= No/2 )
    {
        if(No % iCnt == 0 )
        {
            iSum = iSum + iCnt ; 
        }
        iCnt++ ; 
        SumFactorsR(No) ; 
    }
    return iSum ; 
}

int main()
{
    int Value = 0 ;
    int iRet = 0 ;  

    printf("Enter the Number : \n") ; 
    scanf("%d",&Value) ; 

    iRet = SumFactorsR(Value) ; 

    printf("summation of Facotrs is :%d\n ", iRet) ; 

    return 0 ; 
}