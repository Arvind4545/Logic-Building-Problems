#include<stdio.h>

int SumR(int Arr[],int iSize )
{
    static int iCnt = 0 ;
    static int iSum = 0 ;

    if(iCnt < iSize)
    {
        iSum = iSum + Arr[iCnt] ; 
        iCnt++ ; 
        SumR(Arr , iSize) ; 
    }
    return iSum ; 
}

int main()
{
    int Brr[5] = {10 , 20 , 30 , 40 , 50 } ; 

    int Ret = SumR(Brr,5) ; 

    printf("Summation is:%d\n ",Ret) ; 

    return 0 ; 

}