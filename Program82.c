//Accept N Numbers from user and Return the Largest Number

#include<stdio.h>
#include<stdlib.h>

int FindSmallest(int Arr[],int iSize)  // 5 
{
    int iMin = Arr[0] ;
    int iCnt = 0 ;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++ )  //N Time Complexity
    {
        if(Arr[iCnt] < iMin) 
        {
            iMin = Arr[iCnt] ;
        }
    }
    return iMin ;
}

int main()
{
    int *ptr = NULL ;
    int iLength = 0 ;
    int iRet = 0 ;

    printf("Enter the Length of Array\n") ;  //1 
    scanf("%d",&iLength) ;

    ptr = (int *)malloc(iLength * sizeof(int)) ; //2

    printf("Enter the Elements of Array\n") ; //3 
    for(int iCnt = 0 ; iCnt < iLength ; iCnt++ )
    {
        scanf("%d",&ptr[iCnt]) ;
    }

    iRet = FindSmallest(ptr , iLength ) ;  //4

    printf("Lowest Number is : %d\n",iRet) ;

    free(ptr) ;  //6 

    return 0 ;
}