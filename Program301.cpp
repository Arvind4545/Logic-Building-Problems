
#include<iostream>

using namespace std ; 

int Addition(int i , int j )
{
    int Ans = 0 ; 
    Ans = i + j ; 

    return Ans ; 
}

int main()
{
    int a = 11 ; 
    int b = 10 , ret = 0 ; 

    ret = Addition(a,b) ; 

    cout<<"Addtion is : "<<ret<<"\n" ; 

    return 0 ; 
}