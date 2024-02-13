
// Dynamic Programming to Traverse the Array of Integer as well as Double

#include<iostream>

using namespace std ; 

template<class T>

void Display(T Arr[] , int iSize )
{
    int iCnt = 0 ; 

    for(iCnt = 0 ; iCnt < iSize ; iCnt++ )
    {
        cout<<Arr[iCnt]<<"\n" ; 
    }
}

int main()
{
    int Data[] = {10 , 20 , 30 , 40 } ; 

    Display(Data,4) ; 

    char Datac[] = {'a' , 'b' , 'c' , 'e' , 'w' , 'q' } ; 

    Display(Datac,6) ; 

    return 0 ; 
}

