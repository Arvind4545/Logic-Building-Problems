//Problems on Numbers 
//C++ Program to return the factorial of a Given Numbers 

#include<iostream>

using namespace std ; 

class Numbers 
{
    public : 
        int iNo ; 

        Numbers(int A )
        {
            iNo = A ; 
        }

        int Factorial()  
        {
            int iFact = 1 ; 
            int iCnt = 0 ; 

            for(iCnt = 1 ; iCnt <= iNo ; iCnt++ )
            {
                iFact = iCnt * iFact ; 
            }
            return iFact ; 
        }
};

int main()
{
    int iValue = 0 ;
    int iRet = 0 ;  

    cout<<"Enter Number\n" ; 
    cin>>iValue ;

    Numbers obj(iValue) ; 

    iRet = obj.Factorial() ; 

    cout<<"Factorial of Given Number is : "<<iRet<<"\n" ; 

    return 0; 
}