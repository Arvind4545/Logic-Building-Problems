
#include<iostream>

using namespace std ; 

template<class T> 

T Addition(T i ,T j )
{
    T Ans;

    Ans = i + j ; 

    return Ans ; 
}

int main()
{
    double a = 11.9; 
    double b = 10.1 , ret = 0.0 ; 

    ret = Addition(a,b) ; 

    cout<<"Addtion is : "<<ret<<"\n" ; 

    int x = 11 , y = 10 , iret = 0 ; 
    iret = Addition(x , y ) ; 

    cout<<"Addition is : "<<iret<<"\n" ; 

    return 0 ; 
}

