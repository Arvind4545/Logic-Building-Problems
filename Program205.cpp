
//Problems on Digits 

#include<iostream>

using namespace std  ; 

class DigitX
{
    public : 
        int iNo ; 

        DigitX()
        {
            iNo = 0 ; 
        }
        DigitX(int i )
        {
            iNo = i ; 
        }
};

int main()
{
    int iValue = 0 ; 

    cout<<"Enter any Number: "<<"\n" ; 
    cin>>iValue ; 

    DigitX obj(iValue) ; 

    cout<<"Number is : "<<obj.iNo<<"\n";

    return 0 ; 
}

//No Destructor just because there are no resources 
