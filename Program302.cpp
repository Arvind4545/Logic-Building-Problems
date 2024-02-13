
#include<iostream>

using namespace std ; 

double Addition(double i , double j )
{
    double Ans = 0.0 ; 
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