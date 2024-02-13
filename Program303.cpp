
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

    return 0 ; 
}

// Never Intialize the Template Variable 