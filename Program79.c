
//Accept N Numbers and one Number and Findout the Occurrence of that Number from that Number(Optimized Code)
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckOccurrence(int *Arr,int iSize, int iNo) 
{
    int iCnt = 0 ;
    int iFrequency = 0 ;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++ )
    {
        if(Arr[iCnt] == iNo )  
        {
            break ;
        }
    }
    
    if(iCnt == iSize)  //Loop has Traverssed iLength times 
    {
        return false ;
    }
    else
    {
        return true ;
    }
}

int main()
{
    int *ptr = NULL ;
    int iLength = 0 ;
    int iValue = 0 ;
    int iCnt = 0 ;
    bool bRet = 0 ;

    printf("Enter the Element to Check whether the number is present in Array: \n") ;
    scanf("%d",&iValue) ;
    
    printf("Enter the Number of Elements\n") ;
    scanf("%d",&iLength) ;

    ptr = (int *)malloc(iLength*sizeof(int)) ;

    printf("Enter the Elements\n") ;

    for(iCnt = 0 ; iCnt< iLength ; iCnt++ )
    {
        scanf("%d",&ptr[iCnt]) ;
    }

    bRet = CheckOccurrence(ptr, iLength,iValue) ;

    if(bRet == true )
    {
        printf("%d is present in N Numbers\n",iValue) ;
    }
    else
    {
        printf("%d is not present in N Numbers\n",iValue) ;
    }

    free(ptr) ;
    
    return 0 ;
}

//time complexity for this Code : 
//Best Case : O(1)
//Worst Case : 0(N) 
//Average Case : avg N