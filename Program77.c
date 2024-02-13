//Accept N Number from User and One Number and Count the frequeny of Occurrence of that Number 

#include<stdio.h>
#include<stdlib.h>

int CountFrequency(int *Arr,int iSize, int iNo) 
{
    int iCnt = 0 ;
    int iFrequency = 0 ;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++ )
    {
        if(Arr[iCnt] == iNo )
        {
            iFrequency++ ;
        }
    }
    return iFrequency ;
}

int main()
{
    int *ptr = NULL ;
    int iLength = 0 ;
    int iValue = 0 ;
    int iCnt = 0 ;
    int iRet = 0 ;

    printf("Enter the Element to Findout Frequence: \n") ;
    scanf("%d",&iValue) ;
    
    printf("Enter the Number of Elements\n") ;
    scanf("%d",&iLength) ;

    ptr = (int *)malloc(iLength*sizeof(int)) ;

    printf("Enter the Elements\n") ;

    for(iCnt = 0 ; iCnt< iLength ; iCnt++ )
    {
        scanf("%d",&ptr[iCnt]) ;
    }

    iRet = CountFrequency(ptr,iLength,iValue) ;
    printf("Frequence of %d is %d\n",iValue,iRet) ;

    free(ptr) ;
    
    return 0 ;
}