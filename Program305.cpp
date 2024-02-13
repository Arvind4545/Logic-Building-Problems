
// Specific Programming : To Swap 2 Integers 
#include<iostream>

using namespace std ; 

// Call by Value Mechanism 

void Swap(int x , int y )
{   
    int temp ; 

    temp = x ; 
    x = y ; 
    y = temp ; 
}

int main()
{
    int a  = 11 , b = 10 ; 

    cout<<"Value of A "<<a<<"\n" ; 
    cout<<"Value of B "<<b<<"\n" ; 

    Swap(a , b ) ;

    cout<<"Value of A "<<a<<"\n" ; 
    cout<<"Value of B "<<b<<"\n" ; 

    return 0 ; 
}

