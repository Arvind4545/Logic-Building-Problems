 
//Accept N Numbers from user and reverse the Array

#include<stdio.h>
#include<stdlib.h>

void DisplayReverse(int Arr[],int iSize)
{
    int iCnt = 0 ;

    for(iCnt = iSize -1 ; iCnt >= 0 ; iCnt-- )
    {
        printf("%d\n",Arr[iCnt]) ;
    }
}

int main()
{
    int *ptr = NULL ;
    int iLength = 0 ;
    
    printf("Enter the Length of Array\n") ;
    scanf("%d",&iLength) ;

    ptr = (int *)malloc(iLength * sizeof(int)) ; //2

    printf("Enter the Elements of Array\n") ; //3 
    for(int iCnt = 0 ; iCnt < iLength ; iCnt++ )
    {
        scanf("%d",&ptr[iCnt]) ;
    }

    printf("Elements in the Reverse order are\n") ;
    DisplayReverse(ptr , iLength ) ;  //4

    free(ptr) ;  //6 

    return 0 ;
}