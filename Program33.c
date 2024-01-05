//C Program to Return the Addition of factors of given Numbers 
#include<stdio.h>

int SumFactors(int iNo)
{
    int iCnt = 0 ;
    int iSum = 0 ;

    for(iCnt = 1 ; iCnt <= iNo/2 ; iCnt++ ) //Time Complexity O(N):order of N
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt ;
        }       
    }

    return iSum ;
}

int main()
{
    int iValue = 0 ;
    int iAddition = 0 ;

    printf("Enter number : \n");
    scanf("%d",&iValue);
    
    iAddition = SumFactors(iValue);

    printf("Summation of Factors : %d\n",iAddition);//Factors Addition

    return 0 ;
}