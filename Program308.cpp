
// Specific Programming : To Swap 2 Integers 
#include<iostream>

using namespace std ; 

// Call by Reference Mechanism 

void Swapi(int &x , int &y)
{   
    int temp ; 

    temp = x ; 
    x = y ; 
    y = temp ; 
}

void Swapd(double &x , double &y)
{   
    double temp ; 

    temp = x ; 
    x = y ; 
    y = temp ; 
}

int main()
{
    int a  = 11 , b = 10 ; 

    cout<<"Value of A "<<a<<"\n" ; 
    cout<<"Value of B "<<b<<"\n" ; 

    Swapi(a , b) ;

    cout<<"Value of A "<<a<<"\n" ; 
    cout<<"Value of B "<<b<<"\n" ; 

    double p = 11.9 , q = 10.7 ; 

    cout<<"Value of P "<<p<<"\n" ; 
    cout<<"Value of Q "<<q<<"\n" ; 

    Swapd(p , q) ;

    cout<<"Value of P "<<p<<"\n" ; 
    cout<<"Value of Q "<<q<<"\n" ; 

    return 0 ; 
}

