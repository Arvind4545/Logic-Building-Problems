//Accept N Numbers and perform the Summation of Even Elements and Odd Elememts 

#include<stdio.h>
#include<stdlib.h>

void DisplaySummation(int *Arr, int iSize)
{
    int iCnt = 0 ;
    int iEvenSum = 0 ;
    int iOddSum = 0 ;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++ )
    {
        if((Arr[iCnt]%2 )== 0)
        {
            iEvenSum = iEvenSum + Arr[iCnt] ;
        }
        else 
        {
            iOddSum = iOddSum + Arr[iCnt] ;
        }
    }
    printf("Summation of Even Number is : %d\n",iEvenSum) ;
    printf("Summation of Odd Numbers is : %d\n",iOddSum) ;
}
int main() 
{
    int *ptr = NULL ;
    int iLength = 0 ;

    printf("Enter the Number of Elements\n") ;
    scanf("%d",&iLength) ;

    ptr = (int *)malloc(iLength * iLength) ;

    printf("Enter the Elements\n");

    for(int iCnt = 0 ; iCnt < iLength ; iCnt++ )
    {
        scanf("%d",&ptr[iCnt]) ;
    }

    DisplaySummation(ptr,iLength) ;

    free(ptr) ;

    return 0 ;
}