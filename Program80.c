//Problem Statement : Accept N Numbers and other Number and return the Index of the Number at which it Occurs 

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int CheckOccurrence(int Arr[],int iSize ,int iNo)
{
    int iCnt = 0 ;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++ )
    {
        if(Arr[iCnt] == iNo) 
        {
            break ;
        }
    }
    if(iCnt == iSize )
    {
        return -1 ;
    }
    else
    {
        return iCnt ;
    }
}

int main()
{
    int *ptr = NULL ;
    int iLength = 0 ;
    int iRet = 0 ;

    printf("Enter the Element to findout the Index of first Occurrence : \n" ) ;
    scanf("%d",&iValue) ;

    iRet = CheckOccurrence(ptr,length,iValue) ;
    if(iRet == -1)
    {
        printf("")
    }
    return 0 ;
}