
#include<iostream>

using namespace std ; 

//Problems on N Numbers
class ArrayX 
{
    public : 
        int *Arr ; 
        int iSize ; 

        ArrayX(int iLength)
        {
            iSize = iLength ; 
            Arr= new int[iSize] ; 
        }

        void Accept()
        {
            cout<<"Please Enter the Numbers : \n" ; 
            int iCnt = 0 ; 

            for(iCnt = 0 ; iCnt < iSize ; iCnt++ )
            {
                cin>>Arr[iCnt] ; 
            }
        }

        void Display()
        {
            cout<<"Elements of the Array are : \n" ; 
            int iCnt = 0 ; 

            for(iCnt = 0 ; iCnt < iSize ; iCnt++ )
            {
                cout<<Arr[iCnt]<<"\t"; 
            }
            cout<<"\n" ; 
        }
}; 

int main()
{
    int iLength = 0; 

    cout<<"Enter the Number of elements : "<<"\n" ; 
    cin>>iLength ; 

    ArrayX obj(iLength) ; 

    obj.Accept() ; 
    obj.Display() ; 

    return 0 ; 
}