
//Program to perform Addition of 2 Numbers using OOP

#include<iostream>

using namespace std ; 

class Arithmetic 
{
    public :
        int Addition(int iValue1 , int iValue2 )
        {
            int iAdd = 0 ; 
            
            iAdd = iValue1 + iValue2 ; 

            return iAdd ; 

        }
};

int main()
{
    int iNo1 = 0 , iNo2 = 0 ; 
    int iAns = 0 ; 

    cout<<"Enter First Number\n"  ; 
    cin>>iNo1 ; 

    cout<<"Enter Second Number\n" ; 
    cin>>iNo2 ; 

    Arithmetic aobj ; //Object Creation in C++ 

    iAns = aobj.Addition(iNo1 , iNo2 ) ; 

    cout<<"Addition is : "<<iAns<<"\n" ; 
    
    return 0 ; 
}

//Chitale ch Dukaan : OOP 
//General stores : POP 
//Card : Object  