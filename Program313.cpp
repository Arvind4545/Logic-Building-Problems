
// Dynamic Programming to return the largest of N Numbers 

#include<iostream>

using namespace std ; 

template<class T>

T Maximum(T Arr[] , int iSize )
{
    int iCnt = 0 ; 
    T Max = Arr[0] ; 

    for(iCnt = 0 ; iCnt < iSize ; iCnt++ )
    {
        if(Max < Arr[iCnt]) 
        {
            Max = Arr[iCnt] ; 
        }
    }
    return Max ; 
}

int main()
{
    int Data[] = {110 , 120 , 320 , 40 } ; 

    int iRet = Maximum(Data,4) ; 

    cout<<"Maximum of Integers is : "<<iRet<<"\n" ; 

    float Dataf[] = {90.2 , 9.23 , 89.90 , 67.90 , 23,78 } ; 

    float fRet = Maximum(Dataf,5) ; 

    cout<<"Maximum of Floats is : "<<fRet<<"\n" ; 
    
    return 0 ; 
}

