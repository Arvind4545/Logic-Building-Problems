
// Dynamic Programming to perform addition of N Numbers 

#include<iostream>

using namespace std ; 

template<class T>

T Addition(T Arr[] , int iSize )
{
    int iCnt = 0 ; 
    T Sum ; 

    for(iCnt = 0 ; iCnt < iSize ; iCnt++ )
    {
        Sum = Sum + Arr[iCnt] ; 
    }
    return Sum ; 
}

int main()
{
    int Data[] = {10 , 20 , 30 , 40 } ; 

    int iRet = Addition(Data,4) ; 

    cout<<"Additon of Integers is : "<<iRet<<"\n" ; 

    float Dataf[] = {90.2 , 9.23 , 89.90 , 67.90 , 23,78 } ; 

    float fRet = Addition(Dataf,5) ; 

    cout<<"Additon of Floats is : "<<fRet<<"\n" ; 
    
    return 0 ; 
}

