
//Accept N Numbers from user and Count Number of Even Numbers 

#include<stdio.h>
#include<stdlib.h>

//Step 5 : Perform the Operation on Array
int CountEven(int *Arr , int iSize )   //Server 
{
    int iEvenCnt = 0 ;
    int iCnt = 0 ;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++ )
    {
        if((Arr[iCnt] % 2)== 0 )
        {
            iEvenCnt++ ;
        }
    }

    return iEvenCnt ;
}

int main()    //Client 
{
    int *ptr = NULL ;
    int iLength = 0 ;
    int iCnt = 0 ;
    int iEven = 0 ;

    //Step 1 : Accept Size of Array
    printf("Enter the Number of Elements\n") ;
    scanf("%d",&iLength) ;

    //Step 2 : Allocate Memory for Array
    ptr = (int *)malloc(iLength * sizeof(int)) ;

    //Step 3 : Accept the Elements of Array
    printf("Enter the Elements\n") ;

    for(iCnt = 0 ; iCnt < iLength ; iCnt++ )
    {
        scanf("%d",&ptr[iCnt]) ;
    }

    //Step 4 : Call the Function 
    iEven = CountEven(ptr,iLength ) ;

    printf("Number of Even Numbers are : %d\n",iEven) ;

    //Step 6 : Deallocate the Memory
    free(ptr) ;

    return 0 ;
}