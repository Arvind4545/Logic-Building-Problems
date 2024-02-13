//Accept N Numbers and perform Addition of those Numbers using Dynamic Memory Allocation

#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[], int iSize )
{
    int iCnt = 0 ;
    int iSum = 0 ;
    
    for(iCnt = 0 ; iCnt < iSize ; iCnt++ )
    {
        iSum = iSum + Arr[iCnt] ;
    }

    return iSum ; 
}

int main()
{
    int iLength = 0 ;
    int iCount = 0 ;
    int iRet = 0 ;

    printf("Enter the Number of Elements you want to Store\n");
    scanf("%d",&iLength);

    int *ptr = NULL ;
    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the Elements of Array");

    for(iCount = 0 ; iCount < iLength ; iCount++ )
    {
        scanf("%d",&ptr[iCount]);
    }

    printf("Elements of Array are\n");

    for(iCount = 0 ; iCount < iLength ; iCount++ )
    {
        printf("%d\n",ptr[iCount]);
    }

    iRet = Summation(ptr,iLength);  //Summation(100,iLength)
    printf("Addition of all Elements is : %d\n",iRet) ;

    free(ptr) ;

    return 0 ;
}