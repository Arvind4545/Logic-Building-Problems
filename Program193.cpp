
#include<iostream>
using namespace std;

// Problems on N Numbers
class ArrayX
{
    public:
        int * Arr;
        int iSize;

        ArrayX(int i)
        {
            iSize = i;
            Arr = new int[iSize];
        }

        void Accept()
        {
            cout<<"Please enter the numbres : "<<"\n";
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            cout<<"Elements of array are : "<<"\n";
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<"\n";
        }

        int SumOfEven()
        {
            int iCnt = 0 ; 
            int iEvenSum = 0; 

            for(iCnt = 0; iCnt < iSize ; iCnt++ )
            {
                if(Arr[iCnt] % 2 == 0 )
                {
                    iEvenSum = iEvenSum + Arr[iCnt] ; 
                }
            }
            return iEvenSum ; 
        }
        int SumOfOdd()
        {
            int iCnt = 0 ; 
            int iOddSum = 0; 

            for(iCnt = 0; iCnt < iSize ; iCnt++ )
            {
                if(Arr[iCnt] % 2 != 0 )
                {
                    iOddSum = iOddSum + Arr[iCnt] ; 
                }
            }
            return iOddSum ; 
        }


};

int main()
{
    int iLength = 0;
    int EvenSum = 0 , iOddSum = 0 ; 

    cout<<"Enter the number of elements : "<<"\n";
    cin>>iLength;

    ArrayX obj(iLength);

    obj.Accept();
    obj.Display();

    EvenSum = obj.SumOfEven() ; 
    cout<<"Addition of Even Elements : "<<EvenSum<<"\n" ; 

    iOddSum =  obj.SumOfOdd() ; 
    cout<<"Addition of Odd Elements : "<<iOddSum<<"\n" ; 

    return 0;
}