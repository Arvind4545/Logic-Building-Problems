// Accept N Numbers from user and store them in an array.
// Count Even Elements from Array 
// Generic Programming 
// Solved by me

// accept no of elements you want to store 
// create an array 
// accept elements from user 
// count even elements 

// Even Numbers are those Integer which are completely divisible by 2 

#include<iostream>
#include<cmath>

using namespace std;

template<class T>
class ArrayX
{
    public : 
        int iSize ; 
        T *Arr;

        ArrayX(int i );
        void Accept();
        int CountEven();
};

template<class T>
ArrayX<T>::ArrayX(int i )
{
    iSize = i  ; 
    Arr = new T[iSize];
}

template<class T>
void ArrayX<T>::Accept()
{
    cout<<"Enter the elements of Array : \n";

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>Arr[iCnt];
    }

    cout<<"\n";
}

template<class T>
int ArrayX<T>::CountEven()
{
    int iEvenCnt = 0 ; 

    for(int iCnt = 0 ; iCnt < iSize ; iCnt++ )
    {
        if( fmod(Arr[iCnt],2.0)==0 )
        {
            iEvenCnt++ ; 
        }
    }

    return iEvenCnt;
}

int main()
{
    int iLength = 0 ; 

    cout<<"Enter the Number of elements you want to store : \n";
    cin>>iLength;

    ArrayX<int> *aobj = new ArrayX<int>(iLength);

    aobj->Accept();
    int iRet = aobj->CountEven();
    cout<<"Even Numbers are : "<<iRet<<"\n";    

    ArrayX<double> *dobj = new ArrayX<double>(iLength);

    dobj->Accept();
    iRet = dobj->CountEven();
    cout<<"Even Numbers are : "<<iRet<<"\n";    

    return 0 ;
}