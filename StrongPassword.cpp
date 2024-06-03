
#include<iostream>

using namespace std; 

int calculateLength(char str[])
{
    int iLength = 0 ; 
    while(*str!='\0')
    {
        iLength++; 
        str++; 
    }

    return iLength; 

}

bool checkLetterDigit(char str[])
{
    bool bFlag = true; 
    while(*str!='\0')
    {
        if((char(*str)>= 97 && char(*str) <= 122) || (char(*str) >= 45 && char(*str) <= 54))
        {
            bFlag = true; 
        }
        else 
        {
            bFlag = false; 
            break; 
        }
        str++; 
    }
    return bFlag;
}

bool checkOrder(char str[])
{
    int iLength = calculateLength(str); 
    bool flag = true; 
    int iCnt = 0; 

    bool letterDigit = true; 
    if(checkLetterDigit(str) == true)
    {
        while(iCnt < iLength - 1)
        {
            if(str[iCnt] > str[iCnt+1])
            {
                flag = false; 
                break; 
            }
            iCnt++; 
        }
        return flag; 
    } 
    else 
    {
        return false; 
    }

}
int main()
{
    int tc = 0, iCnt = 1; 

    cin>>tc; 
    
    
    char str[50]; 

    while(iCnt <= tc)
    {
        cin>>str; 
        bool bFlag = checkOrder(str); 
        if(bFlag == true )
        {
            cout<<"Valid\n"; 
        }
        else 
        {
            cout<<"Invalid\n"; 
        }
    }
    return 0; 
}