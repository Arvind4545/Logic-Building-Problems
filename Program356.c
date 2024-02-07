#include<stdio.h>
// Input : 4 
// Output : 1 2 

void FactorsR(int No)
{
    static int iCnt = 1 ; 

    if(iCnt <= No/2 )
    {
        if(No % iCnt == 0 )
        {
            printf("%d\t",iCnt) ; 
        }
        iCnt++ ; 
        FactorsR(No) ; 
    }
}

int main()
{
    int Value = 0 ; 

    printf("Enter the Number : \n") ; 
    scanf("%d",&Value) ; 

    FactorsR(Value) ; 

    return 0 ; 
}