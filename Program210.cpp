
//Check whether Numbers are anagram 

//Input : 789567    597768 
//Output : Numbers are Anagram 
// Anagrams are such a numbers with same number of digits and each digit is present in same quantity

#include<iostream>

using namespace std ; 

bool CheckAnagram(int iNo1 , int iNo2 )
{
    int Frequency1[10] = {0 }; 
    int Frequency2[10] = {0 } ; 
    bool Flag = true ; 

    while(iNo1 != 0 )
    {
        Frequency1[(iNo1 % 10 )]++ ; 
        iNo1 = iNo1 / 10 ; 
    }
    while(iNo2 != 0 )
    {
        Frequency2[(iNo2 % 10 )]++ ; 
        iNo2 = iNo2 / 10 ; 
    }

    for(int iCnt = 0 ; iCnt < 10 ; iCnt++ )
    {
        if(Frequency1[iCnt] != Frequency2[iCnt])
        {
            Flag = false ; 
            break ; 
        }
    }
    return Flag ;
}

int main()
{
    int iValue1 = 0 , iValue2 = 0 ; 
    bool bRet = false ; 

    cout<<"Enter First Number : "<<"\n" ; 
    cin>>iValue1 ;

    cout<<"Enter Second Number : "<<"\n" ; 
    cin>>iValue2 ; 

    bRet = CheckAnagram(iValue1, iValue2) ; 

    if(bRet == true )
    {
        cout<<"Numbers are Anagram"<<"\n" ; 
    }    
    else
    {
        cout<<"Numbers are not Anagram"<<"\n" ; 
    }

    return 0 ; 
}

//HomeWork : remove 1 while loop 