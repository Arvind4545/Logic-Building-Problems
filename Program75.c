
//Accept N Numbers from User and Display Number of Even and Odd Count 

#include<stdio.h>
#include<stdlib.h>

void DisplayEvenOddCount(int *Arr , int iSize )
{
    int iEvenCnt = 0 ;
    int iOddCnt = 0 ;
    int iCnt = 0 ;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++ )
    {
        if((Arr[iCnt] % 2)== 0 )
        {
            iEvenCnt++ ;
        }
    }

    printf("Even count is : %d\n",iEvenCnt) ;
    printf("odd count is : %d\n",iSize - iEvenCnt) ;
}

int main()
{
    int *ptr = NULL ;
    int iLength = 0 ;
    int iCnt = 0 ;

    printf("Enter the Number of Elements of Array\n") ;
    scanf("%d",&iLength) ;

    ptr = (int *)malloc(iLength * iLength) ;

    printf("Enter the Elements\n") ;

    for(iCnt = 0 ; iCnt < iLength  ; iCnt++ )
    {
        scanf("%d",&ptr[iCnt]) ;
    }

    DisplayEvenOddCount(ptr,iLength) ;

    free(ptr) ;

    return 0 ; 
}