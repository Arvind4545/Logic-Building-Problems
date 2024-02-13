
//Problems on Digits : return the Summation of Digits

#include<iostream>

using namespace std  ; 

class DigitX
{
    public : 
        int iNo ; 

        DigitX() // Constructor : Default 
        {
            iNo = 0 ; 
        }

        DigitX(int i)
        {
            iNo = i ; 
        }

        int SumEvenDigit()
        {
            int iDigit = 0 , iSum = 0 ; 

            while(iNo != 0 )
            {
                iDigit = iNo % 10 ; 

                if( iDigit % 2 == 0 )
                {
                    iSum = iSum + iDigit ; 
                }

                iNo = iNo / 10 ; 
            }
            return iSum ; 
        }
};

int main()
{
    int iValue = 0 ,iRet = 0 ; 

    cout<<"Enter any Number: "<<"\n" ; 
    cin>>iValue ; 

    DigitX obj(iValue) ; 

    iRet = obj.SumEvenDigit() ; 

    cout<<"Summation of Even Digits : "<<iRet<<"\n" ; 

    cout<<"Number is : "<<obj.iNo<<"\t" ; 

    return 0 ; 
}

//No Destructor just because there are no resources 
//Characteristic iNo is getting Changed
