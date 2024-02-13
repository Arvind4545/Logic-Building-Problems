
// Specific Programming : To Swap 2 Integers 
#include<iostream>

using namespace std ; 

// Call by Reference Mechanism 

template <class T> 

void Swap(T &x , T &y)
{   
    T temp ; 

    temp = x ; 
    x = y ; 
    y = temp ; 
}

int main()
{
    int a  = 11 , b = 10 ; 

    cout<<"Value of A "<<a<<"\n" ; 
    cout<<"Value of B "<<b<<"\n" ; 

    Swap(a , b) ;

    cout<<"Value of A "<<a<<"\n" ; 
    cout<<"Value of B "<<b<<"\n" ; 

    int p = 11.9 , q = 10.7 ; 

    cout<<"Value of P "<<p<<"\n" ; 
    cout<<"Value of Q "<<q<<"\n" ; 

    Swap(p , q) ;

    cout<<"Value of P "<<p<<"\n" ; 
    cout<<"Value of Q "<<q<<"\n" ; 

    return 0 ; 
}

