// Accept N Numbers from user and store them in an array.
// Calculate their average 
// Generic Programming 
// Solved by me

#include<iostream>

using namespace std; 

template<class T>
class Arrayx
{
    public : 
        int iSize ; 
        T *Arr ; 

        Arrayx(int i);

        void Accept();
        T calulateAvg();
};

template<class T>
Arrayx<T>::Arrayx(int i)
{
    iSize = i ; 
    Arr = new T[iSize];
}

template<class T>
void Arrayx<T>::Accept()
{
    cout<<"Enter the elements of array : \n";
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>Arr[iCnt];
    }
}

template<class T>
T Arrayx<T>::calulateAvg()
{
    T Sum = 0 ; 

    for(int iCnt =0 ; iCnt < iSize ; iCnt++ )
    {
        Sum = Sum + Arr[iCnt];
    }

    return Sum / iSize;
}

int main()
{
    int iLength = 0; 

    cout<<"Enter the Number of Elements you want to store : "<<"\n";
    cin>>iLength;

    Arrayx<int> *aobj = new Arrayx<int>(iLength);

    aobj->Accept();
    int iRet = aobj->calulateAvg();
    cout<<"Average is : "<<iRet<<"\n";

    cout<<"Enter the Number of double Elements you want to store : "<<"\n";
    cin>>iLength;

    Arrayx<double> *dobj = new Arrayx<double>(iLength);

    dobj->Accept();
    double dRet = dobj->calulateAvg();
    cout<<"Average is : "<<dRet<<"\n";

    return 0 ;
}