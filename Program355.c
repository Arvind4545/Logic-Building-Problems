#include<stdio.h>

void FactorsI(int No)
{
    int iCnt = 0 ; 

    for(iCnt = 1 ; iCnt <= No / 2 ; iCnt++ )
    {
        if(No % iCnt == 0 )
        {
            printf("%d\t",iCnt) ; 
        }
    }
}

int main()
{
    int Value = 0 ; 

    printf("Enter the Number : \n") ; 
    scanf("%d",&Value) ; 

    FactorsI(Value) ; 

    return 0 ; 
}

// Input : 4 
// Output : 1 2 
