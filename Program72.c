
// C program to accept N Numbers from user and Findout the Average 
// Date : 8 - Nov - 2022
// Day : Tuesday 
// Author Name : Arvind Kale 

#include<stdio.h>
#include<stdlib.h>

//float Average(int *Arr, int iSize)
float Average(int Arr[] , int iSize )
{
    int iSum = 0 ;
    int iCnt = 0 ;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++ )
    {
        iSum = iSum + Arr[iCnt] ;
    }
    return (iSum / iSize) ; //On the Fly Return Value (150 / 5 )
}

int main() 
{
    int *ptr = NULL ;
    int iLength = 0 ;
    int iCnt = 0 ;
    float fRet = 0.0f ;

    printf("Enter the Number of Elements\n") ;
    scanf("%d",&iLength) ;

    ptr = (int *)malloc(iLength * sizeof(int)) ; //Dynamic Memory Allocation
    //ptr = (int *)malloc(5*4) ;
    printf("Plaase Enter the Numbers\n") ;

    for(iCnt = 0 ; iCnt < iLength ; iCnt++ )
    {
        scanf("%d",&ptr[iCnt]) ;
    }
    //fRet = Average(500, 5 ) 
    fRet = Average(ptr,iLength) ;  //Call by Address 

    printf("Average is : %f\n",fRet) ;

    free(ptr) ;  //(Resource Deallocation) 
    //free(500) ;

    return 0 ;
}

//Array and Pointer correlation

//Arr[] = *Arr() ;