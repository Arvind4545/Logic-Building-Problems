//Problem Statement : Accept N Numbers and other Number and return the last Index of the Number at which it Occurs 

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int CheckOccurrence(int Arr[],int iSize ,int iNo)
{
    int iCnt = 0 ;
    int iPos = -1 ;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++ )
    {
        if(Arr[iCnt] == iNo) 
        {
            iPos = iCnt ;
        }
    }
    return iPos ;
}

int main()
{
    int *ptr = NULL ;
    int iLength = 0 ;
    int iRet = 0 ;
    int iValue = 0 ;

    printf("Enter the Element to findout the Index of Last Occurrence : \n" ) ;
    scanf("%d",&iValue) ;

    printf("Enter the Length of Array\n") ;
    scanf("%d",&iLength) ;

    ptr = (int *)malloc(iLength * sizeof(int)) ; //2

    printf("Enter the Elements of Array\n") ; //3 
    for(int iCnt = 0 ; iCnt < iLength ; iCnt++ )
    {
        scanf("%d",&ptr[iCnt]) ;
    }

    iRet = CheckOccurrence(ptr,iLength,iValue) ;

    if(iRet == -1)
    {
        printf("There is no %d in Array\n",iValue) ;
    }
    else
    {
        printf("%d has Occured at last Index %d in Aray ",iValue, iRet ) ;
    }

    return 0 ;
}