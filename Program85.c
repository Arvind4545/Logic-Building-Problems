#include<stdio.h>
#include<stdlib.h>

//Accept N Numbers and a Number as well and return the Last Occurrence of that Number

int CheckLastOccurrence(int Arr[],int iSize,int iNo )
{
    int iCnt = 0 ;

    for(iCnt = iSize - 1 ; iCnt >= 0 ; iCnt-- )
    {
        if(Arr[iCnt] == iNo )
        {
            break ;
        }
    }

    return iCnt ;
}

int main()
{
    int *ptr = NULL ;
    int iLength = 0 ;
    int iRet= 0 ; 
    int iValue = 0 ;

    printf("Enter the Value to be founder\n") ;
    scanf("%d",&iValue) ;

    printf("Enter the Length of Array\n") ;
    scanf("%d",&iLength) ;

    ptr = (int *)malloc(iLength * sizeof(int)) ; //2

    printf("Enter the Elements of Array\n") ; //3 
    for(int iCnt = 0 ; iCnt < iLength ; iCnt++ )
    {
        scanf("%d",&ptr[iCnt]) ;
    }

    iRet = CheckLastOccurrence(ptr , iLength ,iValue ) ;  //4
     
    if(iRet == -1 )
    {
        printf("There is no %d in  Array\n",iValue) ;
    }
    else{
        printf("%d has Occurred at %d in Array ",iValue,iRet) ;
    }

    free(ptr) ;  //6 

    return 0 ;
}